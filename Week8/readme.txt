proc1.c	查看进程

proc2.c	通过main函数的第三个参数查看环境变量

proc3.c	通过第三方变量environ获取

proc4.c	常用putenv和getenv来访问特定的环境变量

proc5.c	通过environ全局变量，来使用环境变量；


echo:显示某个环境变量(相当于C printf)
export:设置一个新的环境变量
env：显示所有环境变量
unset:清楚环境变量
set:显示本地定义的shell变量和环境变量
