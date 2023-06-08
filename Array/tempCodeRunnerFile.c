#include <stdio.h>
int C[] = {1, 5, 10, 25, 100};
void makechange(int n);
int bestsol(int, int);
int main()
{
    int n;
    printf("\nMAKING CHANGE USING GREEDY TECHNIQUE\n");
    printf("\n Enter the amount you want :");
    scanf("%d", &n);
    makechange(n);
    printf("\n");
    return 1;
}
void makechange(int n)
{
    int S[100], s = 0, x, ind = 0, i;
    printf("\nAVAILABLE COINS\n");
    for (i = 0; i <= 4; i++)
        printf("%d ", C[i]);
    while (s != n)
    {
        x = bestsol(s, n);
        if (x == -1)
        {
            printf("CHANGE NOT AVAILABLE.");
        }
        else
        {
            S[ind++] = x;
            s = s + x;
        }
    }
    printf("\nMAKING CHANGE FOR %d", n);
    for (i = 0; i < ind; i++)
    {
        printf("\n%d", S[i]);
    }
}
int bestsol(int s, int n)
{
    int i;
    for (i = 4; i > -1; i--)
    {
        if ((s + C[i]) <= n)
            return C[i];
    }
    return (-1);
}