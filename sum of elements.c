#include<stdio.h>
int main(){
    
    int arr[20]= {1,2,3,4,5};
    int a,sum = 0;
    
    for(a=0;a<5;a++){
        sum += arr[a];
    }
    printf("%d",sum);
    
    return 0;
}