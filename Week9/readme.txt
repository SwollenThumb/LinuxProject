

valgrind 工具(检测c++程序内存泄漏)
https://blog.csdn.net/ysh1042436059/article/details/80905728
valgrind是一个开源的，检测c++程序内存泄漏有效工具，识别自己写的程序中的内存错误。
mentest.c文件中的内存错误可以通过命令：
valgrind --track-fds=yes --leak-check=full --undef-value-errors=yes ./mentest
查看出错提示

出错转向到err.dat文件：evn 2>err.dat
https://blog.csdn.net/zhongqi2513/article/details/78613768
标准输入0    从键盘获得输入 /proc/self/fd/0 
标准输出1    输出到屏幕（即控制台） /proc/self/fd/1 
错误输出2    输出到屏幕（即控制台） /proc/self/fd/2 

setjmp()
#include <setjmp.h>
设定跳转点setjmp(),其返回值为0
longjmp()跳转回设定的跳转点setjmp()，此时setjmp()=1



---------------------------test1.c中出现的函数------------

__attribute__((constructor))
https://blog.csdn.net/shaoyizhe2006/article/details/8927089
__attribute__((constructor)) // 在main函数被调用之前调用(两个双下滑线)
__attribute__((destructor)) // 在main函数被调用之后调用


atexit函数介绍
https://blog.csdn.net/IT_xiaoye/article/details/80408112
atexit函数（设置程序正常结束前调用的函数）
相关函数 _exit,exit,on_exit
函数原型
#include<stdlib.h>
 int atexit (void(*function)(void));
 返回值 如果执行成功则返回0，否则返回-1，失败原因存于errno中。












