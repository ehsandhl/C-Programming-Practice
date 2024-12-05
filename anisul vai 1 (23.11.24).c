#include<stdio.h>
int main()
{
    while(1)
    {
        int n,i,prime=1;
        scanf("%d",&n);
        if(n<=1)
        {
            prime=0;
        }
        else
        {
            for(i=2; i<=n/2; i++)
            {
                if(n%i==0)
                {
                    prime=0;
                }
            }
        }


        if(prime==1)
        {
            printf("Prime Number\n");
        }
        else
        {
            printf("Not prime number\n");
        }
    }



}
