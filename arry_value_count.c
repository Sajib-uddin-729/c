#include<stdio.h>
int main(){
   int n;
   scanf("%d",&n);
   int a[n];
   for (int i=0;i<n;i++){
    scanf("%d",&a[i]);
   }
   int c[101]={0};
   for(int i=0;i<n;i++){
    int val=a[i];
    c[val]++;
   }
   for(int i=0;i<n;i++){
    printf("%d --- %d\n",i,c[i]);
   }

return 0;
}
