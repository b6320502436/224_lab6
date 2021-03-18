#include<stdio.h>
main()
{
	int a,b=0,c=0,d,e;
	scanf("%d",&a);
	char A[2][10]={};
	scanf("%s",A[0]);
	scanf("%s",A[1]);
	for(d=0;d<a;d++)
	{
		if(A[0][d]==A[1][d])
		{
			b++;
		}
		else {
			c++;
		}
	}
	printf("%d %d",b,c);
	
	
}
