#include<stdio.h>
int main(){
    
    int arr[100] = {-1,2,-3,4,5};
    int count=0;
    int a;
    
    for(a=0;a<5;a++){
        if(arr[a] > 0){
            count++;
        }
    }
    
    printf("%d",count);
    return 0;
}