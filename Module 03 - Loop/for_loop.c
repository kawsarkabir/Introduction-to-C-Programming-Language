#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
    };
    return 0;
}

// odd number in for loop using c
#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 10; i += 2)
    {
        printf("%d\n", i);
    }
}

// even number find
#include <stdio.h>
int main()
{
    for (int i = 0; i <= 10; i += 2)
    {
        printf("%d\n", i);
    }
}