#include <stdio.h>
#include <stdlib.h>


int main(){
    int a=0;
    int i=0;
    int n=13;
    for(i=0;i<n;i++){
        a=2*a+i;
    }
    printf("%d\n",i);
    while(i--){
        printf("hi\n");
    }
    printf("%d\n",a);
    return 0;
}