#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

//__attribute__((constructor)) // 在main函数被调用之前调用(两个双下滑线)
static void __attribute__ ((constructor))before_main()
{
	printf("Running before main!\n");
}

static void callback1()
{
	printf("1:Running after main!\n");
}

static void callback2()
{
	printf("2:Running after main!\n");
}

static void callback3()
{
	printf("3:Running after main!\n");
}


int main()
{
	atexit(callback1);//用atexit()函数来注册程序正常终止时要被调用的函数。
	atexit(callback2);
	atexit(callback3);
	printf("test1:pid= %d,ppid= %d\n",getpid(),getppid());
	sleep(2);
}





