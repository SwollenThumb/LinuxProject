#include "my.h"

int main()
{
	pid_t pid;
	pid=vfork();
	FILE* fp;	
	
	if(pid<0)//失败

	if(pid=0)//子进程
		if((fp=fopen("text.dat","w+"))==NULL)
			fwrite();
	if(pid>0)//父进程
		if((fp=fopen("text.dat","w+"))==NULL)
			fread();

	fclose();
	return 0;
}
