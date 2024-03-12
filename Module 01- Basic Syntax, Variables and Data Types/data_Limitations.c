/* #include <stdio.h>
int main()
{
    // int data limit holo1 ar por 9 digit r long long data limit holo 19 digits
    int a = 1000000000;
    long long int b = 1000000000000000000;
    printf("%lld %d", b, a);
    return 0;
} */

// float ar khetre data limit holo
#include <stdio.h>
int main()
{
    // int data limit holo1 ar por 9 digit r long long data limit holo 19 digits
    // float a = 200.5678;
    double a = 2.123456789123456;
    printf("%0.15lf", a);
    return 0;
}