#include "my.h"
int main()
{
 
    FILE* fp;
	int val;
	int aint[10];
	char bchar[20];
    fp=fopen("a.txt","w+");//父进程先打开文件，再进行vfork（）操作
    int buff1[]={0,1,2,3,4,5,6,7,8,9};
	char buff2[]={'a','b','c','d','e','f','g','h','i','j'};
    pid_t pid=vfork();
         
    if(pid==0)//子进程
    {  
        printf("child:\t");
        fwrite(buff1,sizeof(int),10,fp);//把字符串内容写入到文件
        printf("已向a.txt写入0-9共十个数字\n");
		fseek(fp,0,SEEK_SET);//定位文件指针到文件开始位置
		printf("用fread()把数据从文件中读出来:\n");
		fread(aint,10*sizeof(int),1,fp);//把文件内容读入到缓存
		for(int i=0;i<10;i++)
			printf("%d	",aint[i]);
		printf("\n");
        exit(0);
    }
    else//父进程
    {
        wait(&val);
        printf("current id=%d\n",getpid());
        printf("exit code:%d\n",val);
        printf("parent:\t");
		fwrite(buff2,sizeof(char),10,fp);//把字符串内容写入到文件
        printf("已向a.txt写入a-j共十个字母\n");
		/*fseek(fp,0,SEEK_SET);//定位文件指针到文件开始位置
		printf("用fread()把数据从文件中读出来:\n");
		fread(bchar,20*sizeof(char),1,fp);//把文件内容读入到缓存
		for(int i=0;i<20;i++)
			printf("%d	",bchar[i]);
		printf("\n");*/
		exit(0);
    }
    fclose(fp);
	return 0;
}

 
