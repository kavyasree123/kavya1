#include<stdio.h>

int main()
{
int i,j;
int a[4][4];
for(i=0;i<4;i++)
{
for(j=0;j<4;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<4;i++)
{
for(j=0;j<4;j++)
{
     if (i==j)
      {
         printf("%d",a[i][j]);

       }
else if (i+j==3)

printf("%d",a[i][j]);

else

printf(" ");
}
printf("\n");

}
}






