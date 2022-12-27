#include <stdio.h>
int array(){
int a[5] = {10,20,30,40,50} ,i;

for (i = 0; i < 5; i++)
{
    printf("%d ",a[i]);
}
return i;
}
int main(){
    
    array();
    return 0;
}