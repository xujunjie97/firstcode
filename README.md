# firstcode
## 编程要求
>用java语言编写一个hellow world程序
使用编译器：
  idea15

具体流程：

1.新建工程

![image](https://github.com/xujunjie97/firstcode/blob/master/屏幕快照%202017-09-23%20下午2.50.10.png)

2.新建java文件

![image](https://github.com/xujunjie97/firstcode/blob/master/屏幕快照%202017-09-23%20下午2.47.55.png)

3.编写代码
  
    package ewdqwd;
    public class helloworld {
        public static void main(String[] args){
            System.out.println("hellow world!");
        }
    }

4.输出结果

![image](https://github.com/xujunjie97/firstcode/blob/master/屏幕快照%202017-09-23%20下午2.49.09.png)


***

## 程序分析

分析上述代码，从程序开始处介绍。

>public class helloWorld

定义了一个类，类是 “public” 公共类型的，类名为“helloWorld”。另外，Java 中主类名应该和要保存的 Java 文件名相同，也就是说，这里定义的类名是“helloWorld”，则文件应该保存为“helloWorld.java”。

>public static void main(String[] args)

Java 中的主运行方法，它和 C/C++中的main()作用是一样的，就是所有的程序都从“main()”中开始执行。要执行 Java 程序，必须有一个包括主运行方法的类。至于“public static void”的含义。

>System.out.println("Hello world");

“System.out.println()”是 Java.lang 包的一个方法，用来将字串“Hello world”输出到命令行窗口。
