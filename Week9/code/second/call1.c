#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
	char* arg[]={"./call1","123","abc","hello","ncu","edu",NULL};
	int ret;

	printf("test1:pid= %d,ppid= %d\n",getpid(),getppid());
	ret=system("./test2 123 abc hello ncu edu");
	printf("After calling! ret=%d\n",ret);
	return 0;
}
