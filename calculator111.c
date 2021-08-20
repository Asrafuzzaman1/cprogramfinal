#include<stdio.h>
int main()
{
    double num1,num2;
    int modulus;
    char op;
    printf("enter an operator(+,-,*,%,/)\n");
    scanf("%c",&op);
    printf("enter two number.");
    scanf("%lf %lf",&num1,&num2);
    switch(op)
    {
    case '+':
        {
            printf("the summition is %lf+%lf=%lf",num1,num2,(num1+num2));
            break;
        }
         case '-':
        {
            printf("the subtraction is %lf-%lf=%lf",num1,num2,(num1-num2));
            break;
        }
         case '*':
        {
            printf("the multiplycation is %lf*%lf=%lf",num1,num2,(num1*num2));
            break;
        }
         case '/':
        {
            printf("the divition is %lf/%lf=%lf",num1,num2,(num1/num2));
            break;
        }
         case '%':

        {
            modulus=(int)num1%(int)num2;
            printf("the modulus is =%d",modulus);
            break;
        }
         default:
            printf("this is not valid.\n");
    }




    return 0;

}
