#include <stdio.h>

int main(void)
{
    int N = 0;
    int X = 0;
    int Y = 0;
    int dist = 0;
    int A[100];

    scanf("%d %d %d", &N, &X, &Y);
    for (int i = 1; i <= N - 1; i++)
    {
        A[i]=0;
    }
    printf("%d\n", N);//ハブられたところを抽出
    int new = N - (Y - X)+1;//新line
    int MAX = new;//ただし距離マックスは0
    A[MAX] = 0;
    for (dist = 1; dist < MAX;dist++){
        A[dist] = new - 1;
        new --;
    }
    int x,y;

    printf("①\n");
    for (int i = 1; i <= N-1; i++)
    {
     
        printf("%d\n", A[i]);
    } ///マジcr３うbv

    int half = (X + Y) / 2;//halfまでは通常処理OK

    for (x = X; x < Y - 1; x++)
    {
        //Xからの処理 これはYまで

        for (dist = 1; dist <= x; dist++)
        {
            if (half > x)
                A[dist] += 1;
            else if (x-X>=dist){
                A[dist] += 1;
            }
        }
    }

    printf("②\n");
    for (int i = 1; i <= N-1; i++)
    {
        printf("%d\n", A[i]);
    } ///マジcr３うbv」

    half = half + (X + Y) % 2;//中央変換

    for (y = Y; y > X+1; y--)
    {
        //Xからの処理 これはYまで
        for (dist = 1; dist <= N-y+1; dist++)
        {
            if (half <= y)
                A[dist] += 1;
            else if (Y - y -1> dist)
                A[dist] += 1;
        }
    }
    printf("\n\n");
    for (int i = 1;i<=N-1;i++){
        printf("%d\n", A[i]);
    }
        return 0;
}