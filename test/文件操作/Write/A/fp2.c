#include <stdio.h>
#include <stdlib.h>


void sort(int * p, int len)
{
	for (int i = 0; i<len; i++)
	{
		for (int j = 0; j<len - i - 1; j++)
		{
			if (p[j]>p[j + 1])
			{
				int temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
		}
	}
}
void Sortprintf(int *p, int len)
{
	printf("排序结果如下所示：\n");
	for (int i = 0; i < len; i++)
	{
		printf("%d ", p[i]);
	}
}



int main()
{
	FILE* fp;
	if((fp=fopen("test.txt","a"))==NULL)
	{
		printf("file is start Writing!\n");		
	}
	int a[7];
	printf("please input array(request:num<7)\n");
	for (i = 0; i < 7; i++)
	{
		scanf("%d", &arr[i]);
	}
	sort(arr, 7);
	Sortprintf(arr, 7);
		


	return 0;
}






