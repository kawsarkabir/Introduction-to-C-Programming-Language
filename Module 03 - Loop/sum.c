#include <stdio.h>
int main()
{
    // int value 1 soho 10 ta digit ar beshi nite pare na. jodi ar beshi hoi tahole "long long int" use korte hobe and printf ar somoy "%lld" dite hobe.
    long long int sum = 0;
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += i;
        // printf("%d\n", i);
    }
    printf("%lld", sum);
}
