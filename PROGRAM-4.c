#include<stdio.h>
int main()
{
    int num,rev=0,rem;
    printf("enter the number ");
    scanf("%d",&num);
    label:
    if(rem>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
        if(num!=0)
        goto label;
    }
    printf("%d",rev);
}
