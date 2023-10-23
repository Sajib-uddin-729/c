#include<stdio.h>
int main(){
 int n,m;
 scanf("%d %d",&n,&m);
 int a[n][m];

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        scanf("%d",&a[i][j]);
    }
}
int f=1;
if(n != m){
    f=0;
}
for(int i =0; i<n;i++){
    for(int j =0;j<m;j++){
            if(i == j){
                continue;
            }
        if(a[i][j] != 0){
        f=0;
        }
    }
}
if (f==1){
    printf("primary diagonal\n");
}
else printf("not diagobal\n");
return 0;
}
