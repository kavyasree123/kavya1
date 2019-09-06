#include<stdio.h>


 void input(int a[2][2])
{
int i,j;
	for (i=0;i<2;i++)
	{
	   for(j=0;j<2;j++)
	{
	scanf("%d",&a[i][j]);
	}
	}
}

int mul(int a[2][2],int b[2][2],int res[2][2])
{
int i,j,k;

for (i=0;i<2;i++)
	{ 
	   	for(j=0;j<2;j++)
		{	res[i][j]=0;
			
				for(k=0;k<2;k++)
					res[i][j] = res[i][j]+a[i][k]*b[k][j];
	  
		}
	
	}
}

int main()
{
int i,j,k;
int a[2][2];
int b[2][2];
int res[2][2];
input(a);
input(b);
mul(a,b,res);

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d",res[i][j]);
		}
			printf("\n");
	}
}








