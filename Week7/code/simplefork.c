#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int globa=4;

int main()
{
	pid_t pid;
	int vari=5;
	
	printf("before fork\n");

	if((pid=fork())<0)
	{
		printf("fork error\n");
		exit(0);
	}
	else if(pid==0)
	{
		globa++;
		vari++;
		printf("child changed\n");	
	}
	else{
		printf("Parent did not changed\n");
}
	printf("globa=%d vari=%d\n",globa,vari);
	exit(0);

}



















