#include<stdio.h>
int main()
{
    char lower,x;
    printf("enter any lower case letter :");
    scanf("%c",&lower);                         //eta lower theke upper e convert er
    x=toupper(lower);
    printf("Upper case letter : %c",x);
}


#include<stdio.h>
int main()
{
    char upper,x;
    printf("enter any upper case letter :");
    scanf("%c",&upper);
    x=tolower(upper);                        // eta upper theke lower e convert er
    printf("Lower case letter : %c",x);
}

