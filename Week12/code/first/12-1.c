#include "my.h"
main()
{
    int pipe_fd[2];
    pid_t pid;
    char r_buf[100];
    char w_buf[4];
    char* p_wbuf;
    int r_num;
    int cmd;
     
    memset(r_buf,0,sizeof(r_buf));
    memset(w_buf,0,sizeof(r_buf));
    p_wbuf=w_buf;
    if(pipe(pipe_fd)<0)
    {
        printf("pipe create error\n");
        return -1;
    }
     
    if((pid=fork())==0)
    {
        printf("\n");
        close(pipe_fd[1]);
        sleep(3);//确保父进程关闭写端
        r_num=read(pipe_fd[0],r_buf,100);
printf( "read num is %d   the data read from the pipe is %d\n",r_num,atoi(r_buf));
         
        close(pipe_fd[0]);
        exit(0);
    }
    else if(pid>0)
    {
    close(pipe_fd[0]);//read
    strcpy(w_buf,"111");
    if(write(pipe_fd[1],w_buf,4)!=-1)
        printf("parent write over\n");
    close(pipe_fd[1]);//write
        printf("parent close fd[1] over\n");
    sleep(10);
    }   
}
