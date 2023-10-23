#include<stdio.h>
int main(){
 int n;
 scanf("%d",&n);
 int k=1;
 for(int i=1;i<=n;i++){
    for(int j=1;j<=k;j++){
        printf("*");
    }
    k++;
    printf("\n");
 }
  printf("\n");
   printf("\n");
    printf("\n");
    k=n;
     for(int i=n;i>=1;i--){
    for(int j=1;j<=k;j++){
        printf("*");
    }
    k--;
    printf("\n");
 }

printf("\n");
   printf("\n");
    printf("\n");

   int s;
   k=1;
   s=n-1;
   for(int i=1;i<n;i++){
    for(int j=1;j<=s;j++){
        printf(" ");
    }
     for(int j=1;j<=k;j++){
        printf("*");
    }
    s--;
    k=k+2;
    printf("\n");
   }


return 0;
}
