#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
#include<sys/types.h>

int glob = 5;

int main()
{
        int var=10;
        pid_t pid;
		
        printf("child befork vforkn\n");
		pid = vfork();
        if(pid < 0)
        {
                printf("errorn\n");
                exit(1);
        }
        else if(pid == 0)
        {
                glob++;
                var++;
				printf("child after");
                //_exit(0);//_exit(0)不进行任何处理直接退出。且是因为终端是行缓冲，重定向是全缓冲.
				exit(0);//子进程中exit(0)进行刷新缓冲，且将glob=6，var=11写如磁盘，还有其它的一些如关闭所有I/O流的处理再退出。且父进程有exit(0)，
        }
        printf("parent pid = %d, glob = %d, var = %d",getpid(), glob,var);
        _exit(0);
}
