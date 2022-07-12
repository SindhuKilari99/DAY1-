#include<stdio.h>
int main()
{
    int i;
    printf("enter number ");
    scanf("%d",&i);
    if((i%11)==0||(i%11)==1)
    {
        //i=i+1;
        printf("SPECIAL");
    }
        else
        printf("NON SPECIAL");
}
