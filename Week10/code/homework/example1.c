#include<stdio.h>  
#include<stdlib.h>  
#include<unistd.h>  
#include<sys/types.h>  
#include<sys/stat.h>  
#include<fcntl.h>  
#include<sys/wait.h>  
  
int main(){  
        FILE* fd;
		char a[]={0,1,2,3,4,5,6,7,8,9}  
        char c[10];  
        //char *s = "TestFs";  
  
        fd = fopen("./text.dat","w+");  
  
        if(fork()==0)   //子进程  
        {  
                fd = 1;//stdout  
                fwrite(fd,a,7);  
                exit(0); 
        }  
       else if(fork()>0)//父进程
		{
			sleep(2);  
	        fread(fd,c,10);  
	        //c[6]='\0';
			for(int i=0;i<10;i++)  
	        printf("c=%s \n",a);  
	        exit(0); 
		}
		fclose(); 
}  
