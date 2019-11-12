#include "my.h"

int main()
{
	FILE* fp;
	pid_t pid;
	int buf[]={0,1,2,3,4,5,6,7,8,9};
	int number=1;	
	pid=fork();
	if(pid==0)  /*子进程*/ 
	{
		if((fp=fopen("text.dat","w"))==NULL)
		{
			perror("failed to fopen!\n");
			return -1;
		}
		if(write(fp,buf,10)==EOF)//fputs()全缓冲
		{
			perror("failed to fputs!\n");
			return -1;
		}
		_exit(number);	
	}
	else if(pid>0) /*父进程*/  
	{
		wait(&number);
		printf("child _exit code=%d\n",WEXITSTATUS(number));	
	}
	

}







