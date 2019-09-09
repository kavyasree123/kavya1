#include<stdio>.h
 void input(a[2][2])
{

int i,j;

for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&a[i][j]);
}
}
}

int main()
{
int i,j;
int a[2][2];
input(a);
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
     if ((i=j)||(i+j=2))
      {
         print("%d",a[i][j]);

       }
}
}
}






