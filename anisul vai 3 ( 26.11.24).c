#include<stdio.h>
int main()
{
    double n,i,sum=0;
    printf("enter the series last  values :");
    scanf("%lf",&n);
    for(i=1; i<=n; i=i+1)
    {
        sum=sum+(1/i);
        if(i==1)
        {
            printf("\n1 + ");
        }
        else if(i==n)
        {
            printf("(1/%.1lf)",i);
        }
        else
        {
            printf("(1/%.1lf)+",i);
        }
    }
        printf(" = %.2lf\n",sum);

}



