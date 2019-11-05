#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>

static void mem_leak1()//内存泄漏
{
	char* p=malloc(1);
}

static void mem_leak2()//设备黑洞
{
	FILE* fp=fopen("test.txt","w");
}

static void mem_overrun1()
{
	char* p=malloc(1);
	*(short*)p=2;
	free(p);
}

static void mem_overrun2()//越界访问
{
	char array[5];
	strcpy(array,"hello");
}

static void mem_double_free()//重复回收
{
	char* p=malloc(1);
	free(p);
	free(p);
}

static void mem_free_wild_pointer()//野指针
{
	char* p;
	free(p);
}


//通过使用valgrind 工具
//通过使用valgrind --track-fds=yes --leak-check=full --undef-value-errors=yes ./mentest  命令查看出错提示
int main()
{
	mem_leak1();
	mem_leak2();
	mem_overrun1();
	mem_overrun2();
	mem_double_free();
	mem_free_wild_pointer();

	return 0;
}
