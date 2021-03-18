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
	for(c='A';c<='Z';c++)
	{
		for(b=0;b<a;b++)
	{
		if(c==A[b][0])
		{
		printf("%s\n",A[b]);
		}
}
	}
	
}
