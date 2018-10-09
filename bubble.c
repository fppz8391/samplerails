#include<stdio.h>
#define N 10

int main(void){

int array[N];
int i,j,tmp,count=0,k;

for(i=0;i<N;i++)
scanf("%d",&array[i]);

printf("\n");

for(i=0;i<N-1;i++)
 for(j=1;j<N-i;j++){
  count++;
  if(array[j-1]>array[j]){
   tmp=array[j-1];
   array[j-1]=array[j];
   array[j]=tmp;
  }
 }

for(i=0;i<N;i++)
 printf("%d\n",array[i]);

 printf("count=%d\n",count);

}
