#include "test.h"



int chmd();
int chmd ()
{
int c;
mode_t mode=S_IWUSR;
printf(" 0. 0700\n 1. 0400\n 2. 0200 \n 3. 0100\n ");
printf("Please input your choice(0-3):");
scanf("%d",&c);

switch(c)
{
case 0: chmod("file1",S_IRWXU);break;
case 1: chmod("file1",S_IRUSR);break;
case 2: chmod("file1",S_IWUSR);break;
case 3: chmod("file1",S_IXUSR);break;
default:printf("You have a wrong choice!\n");
}

return(0);
}

//显示界面
void show()
{
	printf("********************************\n");
	printf("0.退出\n");
	printf("1. 创建新文件\n");//CreateNewFile()
	printf("2. 写文件\n");//WriteFile()
	printf("3. 读文件\n");//ReadFile()
	printf("4. 修改文件权限\n");//ModifyFilePermission()
	printf("5. 查看当前文件的权限\n");//ViewFilePermission()
	printf("********************************\n");
	printf("Please input your choice(0-6:0");
	scanf("%d",&choice);

}

//创建新文件
void CreateNewFile()
{
	fd=open("file1",O_RDWR|O_TRUNC|O_CREAT,0750);                 
	if(fd==-1)
		printf("File Create Failed!\n");
	else
		printf("fd = %d\n",fd);
	return ;
}


//写文件
void WriteFile()
{
	num=read(0,buffer,MAX);
	write(fd,buffer,num);


}

//读文件
void ReadFile()
{
	read(fd,buffer,MAX);
	write(1,buffer,num);



}


//修改文件权限(r 表示可读取，w 表示可写入，x 表示可执行)
void ModifyFilePermission()
{
	chmd ();
	printf("Change mode success!\n");



}


//查看当前文件的权限
void ViewFilePermission()
{
	execv(path,argv);









}







