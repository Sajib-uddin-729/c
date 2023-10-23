#include<stdio.h>
#include<string.h>
int main(){
  char s[100];
  scanf("%s",s);
  int c[26]={0};
  for(int i=0;i<strlen(s);i++){
  int value=s[i]-'a';
  c[value]++;
  }
  //kon value koto bar ace ta count a teke soro hobe ; a je jaigai ace oi jaigai toto sonkha dekhabe
  for(int i=0;i<26;i++){
        if(c[i]!=0){
  printf("%c - %d\n",i+'a',c[i]);
  }
  }

  // kon value koto bar ace string ono jai e dekhabe
  for(int i =0;i<strlen(s);i++){
    int value=s[i]-97;
    printf("%c --- %d\n",value+'a',c[value]);
  }
  printf("\n");
  //sodo akbr dekhbe kon ta koibar ace oita
    for(int i =0;i<strlen(s);i++){
    int value=s[i]-97;
    if(c[value] != 0){
    printf("%c --- %d\n",value+'a',c[value]);
  }
  c[value]=0;
    }

return 0;
}
