#include <stdio.h>

int main(void)
{
    int w = 0;
    scanf("%d", &w);
    int F=0;
    int f = 0;
    if(w>=500){
    F = w / 500;
    w = w - (500 * F);
    }
    if (w >= 5)
    {
        f = w / 5;
    }
    printf("%d\n", f * 5 + F * 1000);
    return 0;
}