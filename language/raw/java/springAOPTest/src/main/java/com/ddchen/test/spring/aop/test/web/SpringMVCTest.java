package com.ddchen.test.spring.aop.test.web;

import java.util.HashMap;
import java.util.Map;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.ResponseBody;

@Controller
@RequestMapping(value = "/test")
public class SpringMVCTest {
	
	@RequestMapping(value = "/query")
	@ResponseBody
	public Map queryData(HttpServletRequest request, HttpServletResponse response){
		System.out.println("testtttttttttttttttttttttttttttttttttttt!");
		HashMap map = new HashMap();
		map.put("test", "haha!");
		return map;
	}
	
}
