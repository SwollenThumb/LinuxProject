#include "mysort.h"

int cmp ( const void *a , const void *b ) ;

int main()
{
	int a[]={1,3,62,13,79,81,29,411,56,8,0,91,19,1,26,70,89,111,66,324};//20 of numbers
	int b[20];
	int number;	

	number=sizeof(a)/sizeof(a[0]); //数组占内存总空间，除以单个元素占内存空间大小
	for(int i=0;i<number;i++)
		b[i]=a[i];

	//int* p=a;
	
	clock_t start1,finish1,start2,finish2;
	double  duration1,duration2;  //持续的时间
	

	printf("a[] and b[] is:");
	for(int j=0;j++;j<number)
	{
		printf("%d	",b[j]);
	}
	printf("\n");	
	
	start1 = clock();//挂钟时间
	mysort(a,number);
	finish1 = clock(); 
	duration1 = (double)(finish1 - start1) / CLOCKS_PER_SEC; 
	printf( "The function of mysort() is %f seconds\n", duration1 );  


	start2 = clock();//挂钟时间
	qsort(b,20,sizeof(b[0]),cmp);
	for(int j=0;j++;j<number)
	{
		printf("%d	",b[j]);
	}
	printf("\n");
	finish2 = clock(); 
	duration2 = (double)(finish2 - start2) / CLOCKS_PER_SEC; 
	printf( "The function of qsort() is %f seconds\n", duration2 );
	
	pause();


	return 0;
}

int cmp ( const void *a , const void *b ) 
{ 
  return *(int *)a - *(int *)b; 
} 
