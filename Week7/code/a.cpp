#include <string>
#include <iostream>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

using namespace std;

int main()
{
	int fd;
	FILE* file;
	char* s="hello,world\n";

	if((fd=open("text.txt",O_WRONLY|O_CREAT,S_IRUSR|S_IWUSR))==-1)
	{
		cout<<"Error Open File."<<endl;
		return -1;
	}
	if((file=fopen("text2.txt",'w+'))==NULL)
	{
		cout<<"Error Open File."<<endl;
		return -1;
	}
	cout<<"File has been Opened"<<endl;
	sleep(15);

	if(write(fd,s,strlen(s))<strlen(s))
	{
		cout<<"Write Error"<<endl;
		return -1;
	}

	if(write(s,sizeof(char),strlen(s),file)<strlen(s))
	{
		cout<<"Write Error in 2"<<endl;
		return -1;	
	}
	cout<<"After write"<<endl;
	sleep(15);
	cout<<"After write"<<endl;
	close(fd);
	
	reutrn 0;

}
