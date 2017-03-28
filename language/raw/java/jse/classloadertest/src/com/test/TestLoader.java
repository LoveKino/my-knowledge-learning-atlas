package com.test;

/**
 * Created by yuer on 9/19/16.
 */
public class TestLoader extends ClassLoader{
    @Override
    protected synchronized Class<?> loadClass(String name, boolean resolve) throws ClassNotFoundException {
        System.out.println("-----------------------------");
        System.out.println(name);
        return super.loadClass(name, resolve);
    }

    @Override
    protected Class<?> findClass(String name) throws ClassNotFoundException {
        System.out.println("++++++++++++++++");
        System.out.println(name);
        return super.findClass(name);
    }
}
