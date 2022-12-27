#include <stdio.h>
int addarray(){
    int a[2]={10,20};
    int b[2] = {10,20};
    int c[2],i;
    for ( i = 0; i < 2; i++)
    {
        c[i] = a[i] + b[i];
    }
    for ( i = 0; i < 2; i++)
    {
        printf("%d ",c[i]);
    }
    return i;
}
int main(){
    addarray();
    return 0;
}