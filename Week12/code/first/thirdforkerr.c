/**
目的：fork（）出三个子进程p1,p2,p3
做法：
p1=fork();
p2=fork();
p3=fork();
结果：
fork出7个子进程
*/
#include "my.h"

int main()
{
	pid_t p1,p2,p3;
	p1=fork();
	p2=fork();
	p3=fork();
	int count=0;

	if(p1<0||p2<0||p3<0)
	{
		perror("fork failed!\n");
		return -1;
	}
	else if(p1==0)
	{
		count++;
		printf("child pid=%d,ppid=%d,count=%d\n",getpid(),getppid(),count);
		exit(0);
	}
	else if(p2==0)
	{
		count++;
		printf("child pid=%d,ppid=%d,count=%d\n",getpid(),getppid(),count);
		exit(0);
	}
	else if(p3==0)
	{
		count++;
		printf("child pid=%d,ppid=%d,count=%d\n",getpid(),getppid(),count);
		exit(0);
	}
	else{
		printf("parent sleep!\n");
		sleep(30);
		printf("parent pid=%d,count=%d\n",getpid(),count);
	}



	return 0;
}
