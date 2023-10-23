#include<stdio.h>
#include<limits.h>
void find_minimum_maximum(int a[],int n){
int i,min=INT_MAX,max=INT_MIN;
for(i=0;i<n;i++){
    if(a[i]<min){
        min=a[i];
    }
    if(a[i]>max){
        max=a[i];
    }
}
printf("maximun = %d\nminimum = %d\n",max,min);
}
int main(){
 int n;
 scanf("%d",&n);
 int a[n];
 for(int i=0;i<n ;i++){
   scanf("%d",&a[i]);
 }
 find_minimum_maximum(a,n);
 return 0;
}
