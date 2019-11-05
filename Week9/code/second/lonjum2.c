#include <setjmp.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

static jmp_buf g_stack_env;

static void fun1(int* a,int* b,int* c);
//static void fun2();

int main()
{
	int a=1;	
	int b=2;
	int c=3;

	if(0==setjmp(g_stack_env))
	{
		printf("Normal fun1\n");
		printf("1:a=%db=%dc=%d\n",a,b,c);
		fun1(&a,&b,&c);
	}
	else
	{
		printf("Long jump flow\n");	
		printf("2:a=%db=%dc=%d\n",a,b,c);
	}



	return 0;
}

static void fun1(int* a,int* b,int* c)
{
	printf("Enter fun1\n");
	++(*a);
	++(*b);
	++(*c);
	printf("fun1:a=%db=%dc=%d\n",*a,*b,*c);
}
/*
static void fun2()
{
	printf("Enter fun2\n");
	longjmp(g_stack_env,1);
	printf("Leave fun2\n");
}
*/
