package com.ddchen.test;

import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;

/**
 * Created by yuer on 9/28/16.
 */
public class Main {
    public static void main(String[] args) {
        class FileClassLoader extends ClassLoader {
            public Class findClass(String name, String path) {
                try {
                    byte[] data = this.readContentIntoByteArray(new File(path));
                    return defineClass(name, data, 0, data.length);
                } catch (IOException e) {
                }
                return null;
            }

            public byte[] readContentIntoByteArray(File file) throws IOException {
                byte[] bFile = new byte[(int) file.length()];
                FileInputStream fileInputStream = new FileInputStream(file);
                fileInputStream.read(bFile);
                fileInputStream.close();
                return bFile;
            }
        }

        Class Test = new FileClassLoader().findClass("Test",
                "/Users/yuer/workspaceforme/category/study/technology/language/java/jse/classLoaderDefineClass/res/Test.class");

        Object test = null;
        if (Test != null) {
            try {
                test = Test.newInstance();
            } catch (InstantiationException e) {
                e.printStackTrace();
            } catch (IllegalAccessException e) {
                e.printStackTrace();
            }
        }

        try {
            if (test != null) {
                Method method = Test.getDeclaredMethod("sayHello");
                method.invoke(test);
            }
        } catch (NoSuchMethodException e) {
            e.printStackTrace();
        } catch (IllegalAccessException e) {
            e.printStackTrace();
        } catch (InvocationTargetException e) {
            e.printStackTrace();
        }
    }
}
