#include "my.h"

static int sig_cnt[NSIG];
static volatile sig_atomic_t get_SIGINT=0;

void handler(int signo)
{
	if(signo==SIGINT)
		get_SIGINT=1;
	else	
		sig_cnt[signo]++;	
}



int main(int argc,char* argv[])
{
	int i=0;
	



}





