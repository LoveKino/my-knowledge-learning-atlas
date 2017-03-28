package com.jcg;


/**
 * @author ashraf
 * 
 */
public class ClassLoaderTest extends JavaClassLoader {

	public static void main(String[] args) {

		JavaClassLoader javaClassLoader = new JavaClassLoader();
		javaClassLoader.invokeClassMethod("com.jcg.MyClass", "sayHello");
		
	}
	
}