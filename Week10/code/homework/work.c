#include "my.h"
#include <string.h>

int main()
{
	FILE* fp;
	
	char buf[]={0,1,2,3,4,5,6,7,8,9};
	char a[10];
	int number=100;

	pid_t pid;	
	pid=fork();

	fp= fopen("./text.dat","w+");
	if(!fp)
    {
        printf("fopen error!\n");
    }
//////////////////////////////////////////////////////////////////////////
	if(pid==0)  /*子进程*/ 
	{
		printf("子进程:\n");
		fwrite(buf,sizeof(char),10,fp);
		_exit(number);	
	}
	else if(pid>0) /*父进程*/  
	{
		wait(&number);
		printf("父进程:\n");
		printf("子进程 _exit code=%d\n",WEXITSTATUS(number));
		int ret = fread(a,sizeof(char),10,fp);
		if(ret>0)
    	{
        	a[ret] = 0;
        	printf("ret = %d a=%s\n",ret,a);
    	}	
	}
/////////////////////////////////////////////////////////////////////////
	fclose(fp);//一定要关 防止资源泄漏
}







