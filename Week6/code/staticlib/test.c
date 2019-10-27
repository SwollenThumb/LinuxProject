#include "mylib.h"

void urand(int* a,int n)
{
	int i;
	srand((int)time(0));//设置当前时间为种子
    	for (i = 0; i < n; ++i){
        a[i] = rand()%100+1;//产生1~100的随机数
    }
}


int main()
{
	int a[5];
	urand(a,5);
	show(a,5);
	//printf("%4d : %4d\n",sum(a,5),max(a,5));

	return 0;
}
