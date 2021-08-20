#include<stdio.h>
int main()
{
   int choice;
   float temp,convertedtemp;
   printf("temperature conversion menu.\n");
   printf("1.conversion into celsius to fahrenhiet.\n");
   printf("2.conversion into fahrenhiet to celsius.\n");
   printf("enter your choice.\n");
   scanf("%d",&choice);
   switch(choice)
   {
   case 1:
       {

    printf("enter celsius tempreture.\n");
    scanf("%f",&temp);
    convertedtemp=(1.8*temp)+32;
    printf("the fahrenhiet tempreture is =%f\n",convertedtemp);
    break;
       }

   case 2:
       {
    printf("enter fahrenhiet tempreture.\n");
    scanf("%f",&temp);
    convertedtemp=.56*(temp-32);
    printf("the celsius tempreture is =%f\n",convertedtemp);
    break;
       }
   default:
    printf("your choice is invalid.");

   }




    return 0;
}
