#include <stdio.h>


int main (void){
    int w=0;
    char c[100];
    int b;
    scanf("%d",&w);
    while (w > 0)
    {
        scanf("%s %d",c,&b);
        w--;
    }
    return 0;
}