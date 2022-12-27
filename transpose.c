#include <stdio.h>
int main(){
    int a[2][2];
    printf("Enter The Elements\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d",&a[i][j]);
        }    
    }
    printf("Before Transpose\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("After Transpose\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }   
}