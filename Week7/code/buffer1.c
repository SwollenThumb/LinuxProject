#include <stdio.h>
#include <stdlib.h>
#define SIZE 512//定义缓冲区的大小

int main()
{
	char buf[SIZE];//缓冲区
	if(setvbuf(stdin,buf,_IONBF,SIZE)!=0)//将标准输入的缓冲类型设为无缓冲
	{
		perror("将标准输入stdin的输入设置为无缓冲失败!\n");//如果设置失败
		return 1;	
	}
	printf("将标准输入stdin的输入设置为无缓冲成功!\n");
	printf("stdin类型为");//
	if(stdin->_flags & _IO_UNBUFFERED)//
	{
		printf("");
	}
	else if(stdin->_flags & _IO_LINE_BUF)
	{
		printf("");	
	}
	else
	{
		printf("");	
	}
	printf("缓冲区大小为%ld\n",stdin->_IO_buf_end-stdin->_IO_buf_base);


}




