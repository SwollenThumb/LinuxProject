/**
管道的读规则验证
*/
#include "my.h"

int main()
{
	
    pid_t r;
	int r_num;
	int pipefd[2];
    char buf[4096];
    char* p_wbuf;
    
	memset(buf,0,sizeof(buf));
    if(pipe(pipefd)<0)
    {
        printf("pipe create error\n");
        return -1;
    }
    r=fork();
	if(r<0)
	{
		perror("fork failed.\n");
		return -1;
	} 
    if(r==0)
    {
        printf("\n");
        close(pipefd[1]);
        if((r_num=read(pipefd[0],buf,100))>0)
		printf( "child read from pipe:%s,total=%d\n",buf,r_num);    
        close(pipefd[0]);
        exit(0);
    }
	else
    {
    	close(pipefd[0]);//read
    	if(write(pipefd[1],"1234567890",10)!=-1)
    	    printf("parent write over\n");
    	close(pipefd[1]);//write
    	printf("parent close fd[1] over\n");
    }   

	return 0;
}
