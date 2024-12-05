/*#include<stdio.h>
int main()
{
    int sum=0,n,temp,mod;
    scanf("%d",&n);
    temp=n;
    while(temp!=0)                     //eta sum of digits er code
    {
        mod=temp%10;
        sum=sum+mod;
        temp=temp/10;
    }
    printf("Sum of digits = %d\n",sum);
}*/


/*#include<stdio.h>
int main()
{
    int reverse=0,n,temp,mod;
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        mod=temp%10;                              //eta digit reverse korar code
        reverse=reverse*10+mod;
        temp=temp/10;
    }
    printf("Reverse of digit = %d\n",reverse);
}*/



/*#include<stdio.h>
int main()
{
    int reverse=0,n,temp,mod;
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        mod=temp%10;                              //eta palindrome er code
        reverse=reverse*10+mod;
        temp=temp/10;
    }
    if(n==reverse)
    {
        printf("palindrome");
    }
    else{
        printf("not palindrome");f
    }

}*/


#include<stdio.h>
int main()
{
    int sum=0,n,temp,mod;
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        mod=temp%10;                              //eta armstrong number er code
        sum=sum+mod*mod*mod;
        temp=temp/10;
    }
    if(n==sum)
    {
        printf("armstrong number\n");
    }
    else{
        printf("not armstrong number");
    }

}






