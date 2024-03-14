// break
#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}

// continue mane holo condition true hole setake skip korbe ai mane setake r excution korbe nah