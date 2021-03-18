#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,x,y,max=0,z=0,i;
	scanf("%d %d",&a,&b);
	int A[a]={},B[a]={},C[5]={};
	for(c=0;c<b;c++)
	{
		scanf("%s",B);
		if(B[0]=='U')
		{
		scanf("%d %d",&d,&e);
		A[d]=e;
		}
		if(B[0]=='P')
		{
		scanf("%d %d",&d,&e);
		for(x=d;x<=e;x++)
		{
			if(A[x]>max)
			{
				max=A[x];
			}
		}
		printf("%d\n",max);
		max=0;
		}
		
		//printf(". %d",z);
	}
	
	
}
