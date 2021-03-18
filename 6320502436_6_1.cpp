#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	scanf("%d",&a);
	char A[a][30]={};
	for(b=0;b<a;b++)
	{
		scanf("%s",A[b]);
		//printf("%s",A[b]);
	}
	for(c=65;c<91;c++)
	{
		for(b=0;b<a;b++)
	{
		if(A[b][1]==c)
		{printf("%s",A[b]);
		}
}
	}
	
}
