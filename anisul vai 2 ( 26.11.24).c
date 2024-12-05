/*#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the series last  values :");
    scanf("%d",&n);
    //printf("1+3+5+.......%d\n",n);            //odd number print korar code
    for(i=1; i<=n; i=i+2)
    {
        printf("%d\n",i);
    }


}*/


/*#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the series last  values :");
    scanf("%d",&n);
    //printf("1+3+5+.......%d\n",n);
    for(i=2; i<=n; i=i+2)                              //even number print korar code
    {
        printf("%d\n",i);
    }


}*/




/*#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter the series last  values :");
    scanf("%d",&n);
    printf("1^2+2^2+3^2+.......%d^2",n,n);
    for(i=1; i<=n; i=i+1)
    {
        sum=sum+i*i;               //1^2+2^2+3^2+......+n^2 er code
    }
        printf(" = %d",sum);

}*/
    //another way



/*#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,sum=0,p,s;
    printf("enter the series last  values :");
    scanf("%d",&n);
    printf("enter the exponent :");
    scanf("%d",&s);
    printf("1^%d+2^%d+3^%d+.......%d^%d",s,s,s,n,s);
    for(i=1; i<=n; i=i+1)
    {
        sum=sum+pow(i,s);             //1^2+2^2+3^2+......+n^2 er another code
    }
        printf(" = %d",sum);

}*/






