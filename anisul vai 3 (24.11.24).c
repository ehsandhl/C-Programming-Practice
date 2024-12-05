#include<stdio.h>
int main() {
    int n1, n2, gcd, lcm, mod;
    int original_n1, original_n2;  // মূল n1 এবং n2 সংরক্ষণের জন্য ভেরিয়েবল

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    original_n1 = n1;  // n1-এর মূল মান সংরক্ষণ
    original_n2 = n2;  // n2-এর মূল মান সংরক্ষণ

    // GCD বের করার জন্য ইউক্লিডিয়ান অ্যালগরিদম
    while (n2 != 0) {
        mod = n1 % n2;
        n1 = n2;
        n2 = mod;
    }
    gcd = n1;

    // মূল মান ব্যবহার করে LCM বের করা
    lcm = (original_n1 * original_n2) / gcd;

    printf("GCD = %d\n", gcd);
    printf("LCM = %d\n", lcm);

    return 0;
}
