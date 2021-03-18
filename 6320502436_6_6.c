#include<stdio.h>
#include<string.h>
int main()
{
	int a=5,b=0,c=0,d=0,e,f,x,y;
	scanf("%d",&a);
	char A[20]={},B[a][a];
	for(x=0;x<a;x++)
	{
		for(y=0;y<a;y++)
		{
			B[x][y]='.';
		}
	}
	//printf("%s",B[0]);
	scanf("%s",A);
	
	
	for(b=0;b<20;b++)
	{
	if(A[0]=='D'||A[0]=='U')
	{B[c][d]='|';
	}
	if(A[0]=='L'||A[0]=='R')
	B[c][d]='-';
		if(A[b]=='D')
		{c++;
		B[c][d]='|';
		
		}
		if(A[b]=='U')
		{c--;
		B[c][d]='|';
		
		}
		if(A[b]=='L')
		{d--;
		B[c][d]='+';
		
		if(A[b+1]=='D'||A[b+1]=='U')
		B[c][d]='-';
		}
		if(A[b]=='R')
		{d++;
		B[c][d]='+';
		
		}
	}
	for(e=0;e<5;e++)
	{
		for(f=0;f<5;f++)
	{
		printf("%c",B[e][f]);
	}
	printf("\n");
}
	
	
}
