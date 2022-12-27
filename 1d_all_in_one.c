#include <stdio.h>
int main(){
printf("press 1 for Deletion\n");
    printf("Press 2 for insertion\n");
    printf("press 3 for Search A Elements In Array\n");
    
    int s;
    scanf("%d",&s);
    int a[100],pos,size,item,count,n,find;
    switch (s)
    {
    case 1:
    printf("Enter the size\n");
    scanf("%d",&size);
     printf("Enter the Index\n");
    scanf("%d",&pos);
    printf("Enter The Elements\n");
    
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = pos ; i < size - 1 ; i++)
    {
        a[i] = a[i + 1];
    }
    for (int i = 0; i < size - 1; i++)
    {
        printf("%d ",a[i]);
    }
    break;
        
    case 2 : printf("Enter the size\n");
    scanf("%d", &size);
    printf("Enter the Elements\n");
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
    break;
    case 3 : 

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
            printf("Your Position is %d ",i);
            count++;
        }}
         if (count==0){
            printf("Not found");
        }else{
            printf("\nyour frequency is %d",count);
}
    break;
    
    default: printf("Invalid");
        break;
    }
}