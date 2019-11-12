Linux C进程之间的通信

（pid_t 是一个宏定义，其实质是int 被定义在#include<sys/types.h>中）

https://blog.csdn.net/nan_lei/article/details/81636473

 函数fork()
    所需头文件：#include <sys/types.h>
                #include <unistd.h>
    函数原型：pid_t fork()
    函数参数：无
    函数返回值：
          0    子进程
        >0    父进程，返回值为创建出的子进程的PID
         -1    出错
/***********vfork()函数****************/

fork()函数还有一个兄弟函数：vfork()。

    函数vfork()

    所需头文件：#include<sys/types.h>

                        #include<unistd.h>

    函数原型：

        pid_t vfork()

    返回值：同fork()函数



fork()函数与vfork()函数的主要区别如下：

    1.vfork()函数保证子进程先行运行，在子进程调度exec函数族函数或者exit()函数后父进程才会被调度运行。如果子进程需要依赖父进程的进一步动作，则会产生死锁

    2.fork()函数需要拷贝父进程的进程环境，而vfork()函数则不需要完全拷贝父进程的进程环境，在子进程调用exec函数族函数或者exit()函数之前，子进程与父进程共享进程环境（此时子进程相当于线程），父进程阻塞等待。
版权声明：本文为CSDN博主「nan_lei」的原创文章，遵循 CC 4.0 BY-SA 版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/nan_lei/article/details/81636473
