#include <stdio.h>
int main() {
    int n,count,fibo,first=0,second=1;
    printf("Enter range : ");
    scanf("%d", &n);
    for(count=0;count<n;count++) {
        if(count<=1)
        {
            fibo=count;
        }
        else
        {
            fibo=first+second;
            first=second;
            second=fibo;
        }

    printf("fibonacci value = %d\n",fibo);
    }

}


