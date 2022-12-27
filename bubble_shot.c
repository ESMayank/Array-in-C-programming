#include <stdio.h>
int main()
{
    int a[5] = {10, 30, 20, 90, 50};
    int temp;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (a[j] < a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("the array elements are");

    for (int i = 0; i < 5; i++)
    {
        printf(" %d ", a[i]);
    }

    return 0;
}