#include<stdio.h>
int main()
{
    int a[100],size,count,n,find;
    printf("Enter Your Size\n");
    scanf("%d",&size);
     
    count=0;
    printf("Enter Your Elements\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("Which number position uhh want\n");
    scanf("%d",&n);
     find = n;
    for (int i = 0; i < size; i++)
    {
        if (a[i]==find)
        {
            printf("%d ",i);
            count++;
        }}
         if (count==0){
            printf("Not found");
        }else{
            printf("\n%d",count);
}}