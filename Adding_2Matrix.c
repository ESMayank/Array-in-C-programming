#include <stdio.h>
int main(){
    int a[2][2],b[2][2],c[2][2];
    printf("Enter The First Array Elements\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the Second Array Elements\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d",&b[i][j]);
        }
        
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
        
    }   
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}