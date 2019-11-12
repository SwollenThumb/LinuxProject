#include "my.h"

int g=10;

int main()
{
	int s=20;
	static int k=30;
	pid_t pid;
	pid=fork();
	
	if(pid<0)
	{
		perror("fork failed!\n");
		return -1;
	}	
	else if(pid==0)
	{
		printf("child pid=%d : \n&g=%16p\n&k=%16p\n&s=%16p\n",getpid(),&g,&k,&s);
		g=100;
		k=200;
		s=300;
		//sleep(2);
		printf("child after g=%d,k=%d,s=%d",g,k,s);
		return 0;		
		//_exit(0);	
	}
	else
	{
		sleep(2);
		printf("parent pid=%d : \n&g=%16p\n&k=%16p\n&s=%16p\n",getpid(),&g,&k,&s);
		printf("parent after g=%d,k=%d,s=%d",g,k,s);
		return 0;
		//_exit(0);	
	}

}


