#include<stdio.h>
int main()
{

    int choice;
    float temp,converttemp;
    printf("1.fahrenheit to celsius\n");
    printf("2.celsius to fahrenheit\n");
    printf("enter your choice : ");
    scanf("%d",&choice);


    switch(choice)
    {
    case 1:
    {
        printf("enter the fahrenheit temperature :");
        scanf("%f",&temp);
        converttemp=(temp-32)/1.8;
        printf("the temperature in celcius is : %.2f\n",converttemp);
    }
    case 2:
    {
        printf("enter the celsius temperature :");
        scanf("%f",&temp);
        converttemp=(temp*1.8)+32;
        printf("the temperature in fahrenheit is : %.2f\n",converttemp);
    }
    default:
    {
        printf("not a correct option");
    }

    }

}

