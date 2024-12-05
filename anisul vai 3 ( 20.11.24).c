#include<stdio.h>
int main()
{

    char operator;
    double n1,n2;
    printf("enter an operator : (+,-,*,/) : ");
    scanf("%c",&operator);
     printf("enter two number : ");
    scanf("%lf %lf",&n1,&n2);

    switch(operator)
    {
    case '+':
    {
        printf("%.2lf + %.2lf = %.2lf\n",n1,n2,n1+n2);
        break;
    }
    case '-':
    {
        printf("%.2lf - %.2lf = %.2lf\n",n1,n2,n1-n2);
        break;
    }
    case '*':
    {
        printf("%.2lf * %.2lf = %.2lf\n",n1,n2,n1*n2);
        break;
    }
    case '/':
    {
        printf("%.2lf / %.2lf = %.2lf\n",n1,n2,n1/n2);
        break;
    }
    default:
    {
        printf("not a valid operator");
    }

    }

}

