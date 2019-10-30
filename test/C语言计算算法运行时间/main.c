#include "mysort.h"
//在ubuntu/linux系统下system是包含在stdlib.h头文件中的 ，要实现system("pause")功能的方法,system("read");要么不用system命令，直接getchar()；前面是按任意键继续，但是后者两种方法都是按回车键继续的。
//C/C++中的计时函数是clock()，而与其相关的数据类型是clock_t。
int main( void )  
{  
   long    i = 10000000L;  
   clock_t start, finish;  
   double  duration;  
   /* 测量一个事件持续的时间*/  
   printf( "Time to do %ld empty loops is ", i );  
   start = clock();//挂钟时间
   while( i-- )      ;  
   finish = clock();  
   //在time.h文件中，还定义了一个常量CLOCKS_PER_SEC，它用来表示一秒钟会有多少个时钟计时单元
   duration = (double)(finish - start) / CLOCKS_PER_SEC; 
   printf( "%f seconds\n", duration );  
   pause();
}  
