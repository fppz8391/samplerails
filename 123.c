#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

char analyse(char c, int n){
if( c+n < 'a')
return c+n+26;

else if(c+n > 'z')
return c+n-26;

else return c+n;
}


int main(){
char c;
FILE *fp;
int i;

fp = fopen("code.txt","r");

if(fp == NULL){
 printf("ファイルを正しく読み込めませんでした\n");
 exit(1);
}else{
 printf("ファイルを正しく読み込めました!\n");
}

for(i=1;i<=26;i++){
while((c = fgetc(fp))!= EOF){
 if( isalnum(c) == 0){printf("%c",c); continue;}
  printf("%c",analyse(c,i));
}
rewind(fp);
printf("\n\n");
}

}
