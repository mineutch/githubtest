#include <stdio.h>

int main(void)
{
    int i = 0;
    char c[100];
    while (i<6)
    {
        scanf("%c",&c[i]);
        i++;
    }
if(c[2]==c[3]&&c[4]==c[5]){
    printf("Yes\n");
}
else
    printf("No\n");

    return 0;
}