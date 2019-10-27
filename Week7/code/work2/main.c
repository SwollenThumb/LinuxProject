#include "test.h"

//标准IO库练习

int main()
{
	int fd;
	int num;
	int choice;
	char buffer[MAX];
	struct stat buf;
	char* path="/bin/ls";
	char* argv[4]={"ls","-l","file1",NULL};
	
	char a=getch();
	switch(a)
	{
		case '0':
			exit(0);
			break;	
		case '1':
			CreateNewFile();//创建新文件
			break;
		case '2':
			WriteFile();//写文件
			break;
		case '3':
			ReadFile();//读文件
			break;
		case '4':
			ModifyFilePermission();//修改文件权限
			break;
		case '5':
			ViewFilePermission();//查看当前文件的权限
			break;

		default:
			printf("异常");
	

	}









}
