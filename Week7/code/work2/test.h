#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <syslog.h>
#include <string.h>
#include <stdlib.h>

void CreateNewFile();//创建新文件
void WriteFile();//写文件
void ReadFile();//读文件
void ModifyFilePermission();//修改文件权限
void ViewFilePermission();//查看当前文件的权限
void show();//显示界面
