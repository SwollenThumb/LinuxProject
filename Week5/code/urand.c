#include "uhead.h"
void urand(int*a) 
{
    int i;//用于保存10个产生的随机数
	
    srand((unsigned int)time(0);//设置当前时间为种子
    for (i = 0; i < N; ++i){
        a[i] = rand()%100+1;//产生1~100的随机数
    }
    //打印生成的随机数
    for (i = 0; i < 10; ++i){
        printf ("%d ", a[i]);
    }
    printf ("\n");
    return ;
}
