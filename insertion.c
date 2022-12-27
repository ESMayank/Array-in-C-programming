#include <stdio.h>
int main()
{ 
    int a[100], size, item;
    printf("Enter the size\n");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    size++;
    printf("Enter the number uhh insert\n");
    scanf("%d", &item);
    a[size - 1] = item;
    printf("Your Elements are ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
}