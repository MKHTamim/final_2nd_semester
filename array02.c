//buble sort assending
#include<stdio.h>
int main(){
 int item[100],a,b,t,count;
 
 scanf("%d",&count);
 for(a=0;a<count;a++)
 scanf("%d",&item[a]);
 
 for(a=1;a<count;a++){
     for(b=count-1;b>=a;--b){
         if(item[b-1] > item[b]){
             t=item[b-1];
             item[b-1]=b;
             item[b]=t;
         }
     }
 }
 for(a=0;a<count;a++){
     printf("%d",item[a]);
 }
 return 0;
}
