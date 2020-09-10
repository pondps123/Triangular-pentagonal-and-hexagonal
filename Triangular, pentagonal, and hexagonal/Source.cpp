#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int T(int x)
{
    int y;
    y = (x * (x + 1)) / 2;
    return y;
}
int P(int x)
{
    int y;
    y = (x * ((3 * x) - 1)) / 2;
    return y;
}
int H(int x)
{
    int y;
    y = (x * ((2 * x) - 1));
    return y;
}
int main()
{
    int a = 1000, b=1,c=0;
    while (b<=a)
    {
        int c = 1;
        while (c<=a)
        {
            int d = 1;
            while (d<=a)
            {
                if (T(b)==P(c)&&T(b)==H(d))
                {
                    printf("T%d = P%d = H%d = %d\n", b, c, d, T(b));
                }
                d++;
            }
            c++;
        }
        b++;
    }
    return 0;
}