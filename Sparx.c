#include <stdio.h>
int main(){
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