#include <stdio.h>
int main(){
    int a[100],size,pos;
    printf("Enter the Index\n");
    scanf("%d",&pos);
    printf("Enter the size\n");
    scanf("%d",&size);
    printf("Enter The Elements\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = pos ; i < size - 1 ; i++)
    {
        a[i] = a[i + 1];
    }
    for (int i = 0; i < size - 2; i++)
    {
        printf("%d ",a[i]);
    }
    }
