#include<stdio.h>
int main(){
    
    int arr[100] = {10,20,30,40,50};
    int key,index,a;
    
    scanf("%d",&key);
    
    for(a=0;a<5;a++){
        if(arr[a] == key){
            index= a;
        }
    }
    printf("%d",index);
    return 0;
}