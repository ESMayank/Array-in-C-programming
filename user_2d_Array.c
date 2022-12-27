#include <stdio.h>
int main()
{
    int s1, s2;
    printf("First array size\n");
    scanf("%d", &s1);
    printf("Second array Size\n");
    scanf("%d", &s2);
    int a[s1][s2];
    printf("Enter first array Elements\n");
    for (int i = 0; i < s1; i++)
    {
        for (int j = 0; j < s2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < s1; i++)
    {
        for (int j = 0; j < s2; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}