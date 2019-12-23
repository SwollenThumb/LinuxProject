#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <netdb.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <sys/socket.h>
#define SERVPORT 3333
#define MAXDATASIZE 100//

int main(int argc,char* argv[])
{
	int sockfd,recvbytes;
	char buf[MAXDATASIZE];
	struct hostent* host;
	struct sockaddr_in serv_addr;
	if(argc<2)
	{
		fprintf(stderr,"Please enter the server's hostname!\n");
		exit(1);
	}
	if((host=gethostbyname(argv[1]))==NULL)
	{
		perror("gethostbyname error!\n");
		exit(1);
	}
	if((sockfd=socket(AF_INET,SOCK_STREAM,0))==-1)
	{
		

	}





}
