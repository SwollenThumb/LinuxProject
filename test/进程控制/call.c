#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main()
{
	printf("test:pid=%d,ppid=%d\n",getpid(),getppid());
	system("/home/yxw/LinuxProject/test/进程控制");
	printf("After calling");


}
