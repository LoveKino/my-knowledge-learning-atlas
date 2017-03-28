package com.test;

/**
 * Created by yuer on 9/19/16.
 */
public class Main {
    public static void main(String[] args) throws NoSuchFieldException, IllegalAccessException, ClassNotFoundException {
        TestLoader tl = new TestLoader();
        /*
        Field scl = ClassLoader.class.getDeclaredField("scl");
        scl.setAccessible(true);
        scl.set(null, tl);
        */

        tl.loadClass("com.test.MyClass");

        /*
        ClassLoader cl = ClassLoader.getSystemClassLoader();
        System.out.println(cl);
        Class.forName("com.test.MyClass");
        */
        MyClass my = new MyClass();
        my.sayHello();
    }
}
