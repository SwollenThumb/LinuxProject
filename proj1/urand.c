int urand(int*a,int N) 
{
    int a[10], i;//用于保存10个产生的随机数
    srand((unsigned int)time(NULL));//设置当前时间为种子
    for (i = 0; i < 10; ++i){
        a[i] = rand()%100+1;//产生1~100的随机数
    }
    //打印生成的随机数
    for (i = 0; i < 10; ++i){
        printf ("%d ", a[i]);
    }
    printf ("\n");
    return 0;
}
