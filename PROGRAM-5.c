#include <stdio.h>
int main()
{
int num,i;
for(i=0;i<5;i++)
{
    scanf("%d",&num);
    if(num%2==0)
    printf("even");
    else
    printf("odd");
}
}
