#include <stdio.h>
int main()
{
    int myMoney;
    scanf("%d", &myMoney);
    if (myMoney >= 5000)
    {
        printf("go to cox'z bazar\n");

        if (myMoney > 5000 && myMoney >= 10000)
        {
            printf("go to sent mertin !\n");
        }
        else
        {
            return 0;
        }
    }
    else
    {
        printf("jamui na kunu jaigai !");
    }
    return 0;
}