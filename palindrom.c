#include<stdio.h>
int main(){
 char a[100],b[100];
 scanf("%s",a);
 strcpy(b,a);
 int i =0, j = strlen(b)-1;
 while(i<j){
    char temp = b[i];
    b[i]=b[j];
    b[j]=temp;
    i++;
    j--;
 }
 /* int flag = 1;
 while(i<j){
   if ( a[i] != a[j]){
   flag= 0;
   }
   i++;j--;
 }
 */
 if (strcmp(a,b)== 0){
    printf("YES");
 }
 else printf("NO");
return 0;
}
