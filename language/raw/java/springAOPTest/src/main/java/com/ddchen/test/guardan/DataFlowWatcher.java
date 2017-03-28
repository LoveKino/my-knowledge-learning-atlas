package com.ddchen.test.guardan;

import java.util.Date;

import org.aspectj.lang.ProceedingJoinPoint;
import org.aspectj.lang.annotation.Around;
import org.aspectj.lang.annotation.Aspect;
import org.aspectj.lang.annotation.Pointcut;
import org.springframework.stereotype.Component;

@Component
@Aspect
public class DataFlowWatcher {

	public static final String CONTROLLER_CUTPOINT = "execution(public * com.ddchen.test.spring.aop.*.web.*.*(..))";
	
	@Pointcut(CONTROLLER_CUTPOINT)
	public void defineControllerCutPoint() {
	}

	@Around(value = "defineControllerCutPoint()")
	public Object aroundController(ProceedingJoinPoint pjp) throws Throwable {
		Object obj = this.logAroundMethod(pjp);
		return obj;
	}

	///////////////////////////////////////////////////////////////////////////////////////////////////////
	private Object logAroundMethod(ProceedingJoinPoint pjp) {
		Object result;
		try {
			Object target = pjp.getTarget();
			Date startTime = new Date();
			result = pjp.proceed();
			Date endTime = new Date();
			this.logLine("cost time:"+(endTime.getTime() - startTime.getTime()));
			// 拦截的方法名称
			String methodName = pjp.getSignature().getDeclaringTypeName() + "."
					+ pjp.getSignature().getName();
			// 拦截的方法参数
			Object[] args = pjp.getArgs();
			this.log(methodName, args, result);
			return result;
		} catch (Throwable e) {
			e.printStackTrace();
		}
		return null;
	}

	private void log(String methodName, Object[] args, Object result) {
		this.logLine(methodName);
		this.logLine("方法接收的参数：");
		String params = "";
		for (Object arg : args) {
			String param = "";
			if (arg == null) {
				param = "null";
			} else {
				param = arg.toString();
			}
			params = params + param + "\n";
		}
		this.logLine(params);
		this.logLine("方法返回对象：" + result);
	}

	private void logLine(Object message) {
		System.out.println("[aspect] " + message);
	}
}
