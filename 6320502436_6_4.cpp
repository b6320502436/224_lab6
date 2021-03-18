#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,max=0,x,y,max2=0;
	scanf("%d",&a);
	int A[a]={};
	for(b=0;b<a;b++)
	{
		scanf("%d %d",&c,&d);
		A[c-1]=A[c-1]+d;
		c=0;
		d=0;
	}
	for(b=0;b<a;b++)
	{
		if(A[b]>max)
		{
			x=b;
			max=A[b];
		}
		if(A[b]>max2&&b!=x)
		{
			y=b;
			max2=A[b];
		}
}
printf("%d %d",x+1,y+1);
	
}
