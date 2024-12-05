#include<stdio.h>
int main()
{
    int x,y,i;
    printf("enter two numbers : ");
    scanf("%d %d",&x,&y);
    i= (x>y)? x : y ;
    printf("large number = %d\n",i);
}



