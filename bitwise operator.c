#include<stdio.h>
int mmain()
{
    int a=12;
    int b=32;
    int c;
    //printf("enter the value of a and b .\n");
    //scanf("%d %d",&a,&b);
    c=a&b;
    printf("a&b=%d",c);
    c=a|b;
    printf("a|b=%d",c);
    c=a^b;
    printf("a^b=%d",c);




    return 0;
}
