# include <stdio.h>
# include <stdlib.h>
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
int main(void)
{
	FILE *fp;
	//当想在空的txt文件中写入数据，清空原文件内容，使用的是w模式。
	if ((fp = fopen("test.txt", "w")) == NULL);
	{
		printf("文件开始写入\n");
	}
	int i;
	int arr[7];
	printf("请输入数组（要求小于7个元素） :\n");
	for (i = 0; i < 7; i++)
	{
		scanf("%d", &arr[i]);
	}
	sort(arr, 7);
	Sortprintf(arr, 7);
	fp = fopen("test.txt", "w");
	for ( i = 0; i < 7; i++)
	{
		fprintf(fp, "%d ", arr[i]);
	}
	fclose(fp);
	printf("文件排序完毕结果请看文件\n");
	return 0;
}
