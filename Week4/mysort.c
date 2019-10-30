
void mysort(int* pData,int Count) 
{ 
    int iTemp; 
    for(int i=1;i<Count;i++) 
    { 
        for(int j=Count-1;j>=i;j--) 
        { 
            if(pData[j]<pData[j-1]) 
            { 
                iTemp = pData[j-1]; 
                pData[j-1] = pData[j]; 
                pData[j] = iTemp; 
            } 
        } 
    } 

	for(int k=0;k<Count;k++)
	{
		printf("%d	",pData[k])	;
	}
	printf("\n");
} 
/*
void mysort(int* p,int number)
{
	int a[number];
	for(int i=0;i<number;i++)
	{
		a[i]=*p;
		printf("%d	",a[i]);
		p++;	
	}
		

}
*/
