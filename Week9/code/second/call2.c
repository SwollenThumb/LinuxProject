#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
	char* arg[]={"./test2","123","abc","hello","ncu","edu",NULL};
	int ret;

	printf("test1:pid= %d,ppid= %d\n",getpid(),getppid());
	ret=execvp("test2",arg);
	printf("After calling! ret=%d\n",ret);
	return 0;
}
