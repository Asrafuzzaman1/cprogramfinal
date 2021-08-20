#include<stdio.h>
#include<math.h>
int main()
{
    int choice,num1,num2,modulus,sum,sub,muilty;
    float average,divition,squre_root;
    printf("calculator menu.\n");
    printf("1.addition.\n");
    printf("2.subtraction.\n");
    printf("3.multiplication.\n");
    printf("4.divition.\n");

    printf("5.modulus.\n");
    printf("6.squre root.\n");
    printf("7.average.\n");

    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        {
            printf("enter any two number.\n");
            scanf("%d %d",&num1,&num2);
            sum=num1+num2;
            printf("the summition is %d+%d=%d",num1,num2,sum);
            break;
        }
    case 2:
        {
           printf("enter any two number.\n");
            scanf("%d %d",&num1,&num2);
            sub=num1-num2;
            printf("the subtraction is %d-%d=%d",num1,num2,sub);
            break;
        }
    case 3:
        {
           printf("enter any two number.\n");
            scanf("%d %d",&num1,&num2);
            muilty=num1*num2;
            printf("the muiltyplication is %d*%d=%d",num1,num2,muilty);
            break;
        }
    case 4:
        {
         printf("enter any two number.\n");
            scanf("%d %d",&num1,&num2);
            divition=(float)num1/num2;
            printf("the divition is %d/%d=%f",num1,num2,divition);
            break;
        }
    case 5:
        {
             printf("enter any two number.\n");
            scanf("%d %d",&num1,&num2);
            modulus=num1%num2;
            printf("the modulus is =%d",modulus);
            break;
        }
    case 6:
        {
            printf("enter a number.\n");
            scanf("%d",&num1);
            squre_root=sqrt((float)num1);
            printf("the squre_root is =%f",squre_root);
            break;

        }
    case 7:
        {
             printf("enter any two number.\n");
            scanf("%d %d",&num1,&num2);
            average=((float)num1+(float)num2)/2;
            printf("the modulus is =%f",average);
            break;
        }
    default:
        printf("your choice is invalid.");
    }


    return 0;
}
