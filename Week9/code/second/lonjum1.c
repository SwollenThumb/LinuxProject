#include <setjmp.h>
#include <stdio.h>
static jmp_buf g_stack_env;

static void fun1();
static void fun2();

int main()
{
	if(0==setjmp(g_stack_env))//设定跳转点setjmp(),其返回值为0
	{
		printf("Normal fun1\n");
		fun1();
	}
	else
	{
		printf("Long jump flow\n");	
	}



	return 0;
}

static void fun1()
{
	printf("Enter fun1\n");
	fun2();
}

static void fun2()
{
	printf("Enter fun2\n");
	longjmp(g_stack_env,1);//longjmp()跳转回设定的跳转点setjmp()，此时setjmp()=1
	printf("Leave fun2\n");
}












