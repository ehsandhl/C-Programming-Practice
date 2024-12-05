#include<stdio.h>
int main()
{
    int n, i,s,p,prime = 1,tp=0,sum=0;

    printf("Enter the value of : "); // ব্যবহারকারীকে ইনপুট দিতে বলার জন্য মেসেজ
    scanf("%d %d", &s,&p);  // s-এর মান ইনপুট নিচ্ছে

    for(n = s; n <=p; n++) // ১ থেকে s পর্যন্ত সংখ্যা চেক করবে
    {
        prime = 1;

        if(n <= 1)  // ১ বা তার চেয়ে ছোট সংখ্যার জন্য প্রাইম নয়
        {
            prime = 0;
        }
        else
        {
            for(i = 2; i <= n - 1; i++)  // ২ থেকে n-1 পর্যন্ত ভাগ করা চেক
            {
                if (n % i == 0)
                {
                    prime = 0;  // প্রাইম নয়
                    break;  // লুপ বন্ধ
                }
            }
        }

        if(prime == 1) // যদি প্রাইম হয়
        {
            printf("%d ",n);
            tp++;
            sum=sum+n;
        }

    }
    printf("\n\ntotal prime number = %d ",tp);
    printf("\n\nsum of prime number = %d ",sum);

}

