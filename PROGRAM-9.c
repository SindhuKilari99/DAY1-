#include <stdio.h>
int main()
{
 int x,y,z,z1,z2;
 printf("enter the value of x and y:");
 scanf("%d %d",&x,&y);
 
 z=x&&y;
 
 z1=x||y;
 
 z2=!x;
 
 printf("z = %d\t z1 = %d\t  z3 = %d",z,z1,z2);
 return 0;
}
