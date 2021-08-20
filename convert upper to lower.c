#include<stdio.h>
#include<ctype.h>
int main()
{
    char alphabet;
    printf("enter any alphabet :");
    putchar('\n');/*move into next line*/
    alphabet=getchar();
    if(islower(alphabet))
        putchar(toupper(alphabet));/*reverse and display*/
    else
        putchar(tolower(alphabet));//reverse and display







    return 0;
}
