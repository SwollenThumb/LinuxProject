#include "my.h"

int main()
{
	int pid,s;
	


	if((pid=fork())<0)//失败
	{
		perror("failed to fork@\n");
		return -1;
	}
	else if(pid==0)//子进程
	{
		printf("%d:child is runing now!\n",getpid());
		
		exit(0);
	}
	else//if(pid>0)//父进程
	{
		printf("%dparent is waiting zombie now!\n",getpid());
		while(1);

	}


}





