#include "my.h"

#define Err_EXIT(m)\
	do{\
		perror(m);\
		exit(EXIT_FAILURE);	\
	}while(0)	


int main(int argc,char* argv[])
{
	int pipefd[2];
	if(pipe(pipefd)==-1)
		Err_EXIT("exit_failure");

	int ret;
	int count=0;
	int flags=fcntl(pipefd[1],F_GETFL);
	while(1){
		ret=write(pipefd[1],"A",1);
		if(ret==-1)
		{
			printf("err=%s\n",strerror(errno));
			break;
		}
		count++;
	}
	printf("pipe capacity=%d",count);

	return 0;
}
