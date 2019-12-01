/**无名管道的验证
fork()三个子进程p1,p2,p3
p1中把0-4096共4097个数字写入到管道中去//验证管道页面的数据量是4096还是65535
p2中把4097个数字从管道中读出去
p3中把这些数字从p2中读出并累加起来
*/
#include "my.h"

int handle_cmd(int cmd);

int main()
{
	int fd[2];
    pipe(fd); /*创建一个管道*/ 
	char outpipe[4097],inpipe[4097];
	memset(inpipe,0,sizeof(inpipe));
	memset(outpipe,0,sizeof(outpipe));
	pid_t p1=fork();
    if(p1==0)
    //子进程p1：把0-4096共4097个数字写入到管道中去
    {
		close(fd[0]);
		for(int i=0;i<4097;i++)
		{
			inpipe[i]=i;
		}        
		sleep(3);
		write(fd[1],inpipe,4097);
		printf("child p1:write 0-4096 to fd[1] of pipe sucess !\n");
		close(fd[1]);
        return 0;
    }
	pid_t p2=fork();
    if(p2==0)
    //子进程p2：把4097个数字从管道中读出去
    {
        close(fd[1]);
		for(int i=0;i<4097;i++)
		{
			inpipe[i]=i;
		}        
		sleep(3);
		read(fd[0],outpipe,4097);
		//sprintf("");
		printf("child p2:read 0-4096 to fd[0] of pipe sucess !\n");
		close(fd[0]);
        return 0;
    }
	pid_t p3=fork();
    if(p3==0)
    //子进程p3：把这些数字从p2中读出并累加起来
    {
        printf("child p3:add 0-4096 to  child p2 fd[0] of pipe sucess !\n");
        return 0;
    }
    else
    //parent: send commands to child
    {
		printf("parent now!\n");
    	close(fd[0]);
    	close(fd[1]);
		printf("parent end!\n");
		return 0;
    }
	return 0;   
}



