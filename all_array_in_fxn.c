#include <stdio.h>
#include <string.h>
int transpose(){
    
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
int sparx(){

    int a[2][2],  count = 0 ;
    


    printf("Enter The Elements\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d",&a[i][j]);
        }  
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (a[i][j]==0)
            {
                count++;
            }}
            if(count >= (2*2/2)) {
            printf("this is sparx Matrix");
           } 
           }if(count< (2*2/2)){
            printf("Dense");
           }
           
        
        
    
    

}
int bubbleshot(){
    
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
int display(){

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
    
}
int addmatrix(){
    
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





int main(){
    char user[100];

    printf("Wht u want\nTranspose\nSparx\nBubbleShot\n");
    printf("Write Display to Print 2d Array\n");
    printf("Write Add to adding 2 Matrix\n");
     
     scanf("%s",&user);
    if (strcmp(user,"Transpose")==0)
    {
        transpose();
    }
     else if (strcmp(user,"Sparx")==0)
    {
        sparx();
        
    }
    else if(strcmp(user,"BubbleShot")==0){
        bubbleshot();
    }
    else if(strcmp(user,"Display")==0){
        display();
    }
    else if (strcmp(user,"Add")==0){
        addmatrix();
    }
    else{
        printf("Invalid");
    }
    

}