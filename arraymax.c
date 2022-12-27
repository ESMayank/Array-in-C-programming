#include <stdio.h>
int main(){
    int a[5] = {10,20,30,40,50};
    int max,min;
    max = a[0];
    min = a[0];
    for (int i = 1; i < 5; i++)
    {
        if(a[i]>max){
            max=a[i];
        }
       else if (a[i]<min);
            a[i]=min;
        }
    
    printf("the max value is %d\n",max);
    printf("the min value is %d\n",min);
        
return 0 ;
    
    
}