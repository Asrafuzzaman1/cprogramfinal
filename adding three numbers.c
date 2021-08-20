#include<stdio.h>

int main()

{
    int num1,num2,num3,sum,average;
    printf("Enter the value of num1 , num2 and num3 :");
    scanf("%d%d%d",&num1,&num2,&num3);
    sum=num1+num2+num3;
    printf("\nthe sum is %d+%d+%d=%d",num1,num2,num3,sum);
    average=sum/3;
    printf("\nqthe average is %d/3=%d",sum,average);

    return 0;
}
