#include <stdio.h>
int main(){
    int m , n , i , j , size = 0; 
    printf("Enter The Rows\n");
    scanf("%d",&m);
    printf("Enter The column\n");
    scanf("%d",&n);
    int a[m][n];
    for (int i = 0; i < m; i++)
    {
     for (int j = 0; j< n; j++)
     {
        scanf("%d",&a[m][n]);
     }
     
    }
    for (int i = 0; i < m; i++)
    {
     for (int j = 0; j< n; j++){
        if(i==j){
            size+=a[m][n];
        }
     }
    }
    printf("%d",size);
}