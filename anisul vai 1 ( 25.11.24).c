#include<stdio.h>
int main()
{
    int n,i,sum=0,mod,fact,temp;
    printf("enter the number :");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        mod=temp%10;
        fact=1;
        for(i=1;i<=mod;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;

    }
    if(sum==n)
    {
        printf("%d is a strong number",n);
    }
    else
    {
        printf("%d is not a strong number",n);
    }


}
