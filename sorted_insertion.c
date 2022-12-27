#include <stdio.h>
int main(){
    int a[100];
    int size , index , element;
    printf("Enter The Array Size\n");
    scanf("%d",&size);
     
    printf("Enter The Array Elements\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter The Position where u want to put The Element\n");
    scanf("%d",&index);
     printf("Enter The Element which you want to insert\n");
    scanf("%d",&element);
    
    size++;
    for (int i = size-1; i >= index; i--)
    {
        a[i+1] = a[i];
    }
    a[index] = element;
    for (int i = 0; i < size; i++)
    {
        printf("%d ",a[i]);
    }
    
}