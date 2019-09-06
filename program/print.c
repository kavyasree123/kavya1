                                               
#include<stdio.h>

int add(int a,int b)

{  if(!a)
return b;
else 
return add((a&b)<<1,a^b);
}
 

int main()
{ 
int n = add(8,2);
printf("%d",n);
  }
