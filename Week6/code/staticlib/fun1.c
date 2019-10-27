#include "mylib.h"
#include <stdio.h>
int max(int* a,int n)
{
	int m,i;
	m=a[0];
	for(i=0;i<n;i++)
		if(a[i]>m)
			m=a[i];
		
	return m;	
}

int sum(int* a,int n)
{
	int s,i;
	s=0;
	for(i=0;i<n;i++)
	{
		s+=a[i];
			
	}
	return s;	
}

void show(int* a,int n)
{
	int m,i;
	for(i=0;i<n;i++)
		printf("%4d\n",a[i]);
	printf("%4d : %4d\n",sum(a,5),max(a,5));
		

}


int init(int* a,int n)
{
	

}
