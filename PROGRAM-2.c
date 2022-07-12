#include<stdio.h>
int main()
{
    char m;
    printf("enter a character ");
    scanf("%c",&m);
    if((m=='A')||(m=='E')||(m=='I')||(m=='O')||(m=='U')||(m=='a')||(m=='e')||(m=='i')||(m=='o')||(m=='u'))
    {
        printf("vowel");
    }
    else
    printf("consonant");
}
