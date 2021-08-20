#include<stdio.h>
int main()
{
    int a,b,x;
    printf("enter the value of a and b:");
    scanf("%d %d",&a,&b);
    x=(a>b)?a:b;
    printf("the greatest number is =%d",x);
}
