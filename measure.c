#include<stdio.h>
#include<stdlib.h>
#define N 5
int main (void){
 FILE *fp;
 char name[N][10];
 double height[N], weight[N];
 double hsum, wsum;
 int i;
 
 if ((fp=fopen("measure.txt","r"))==NULL) {
 fprintf(stderr,"cannot open measure.txt\n"); exit(1);
}

hsum = wsum = 0.0;
for (i=0;i<N;i++) {
fscanf(fp,"%s %lf %lf",name[i],&height[i],&weight[i]);
hsum += height[i]; wsum += weight[i];
}
fclose(fp);
for (i=0;i<N;i++) {
printf("%s\t%lf\t%lf\n",name[i],height[i],weight[i]);
}
printf("\t%lf\t%lf\n",hsum/N,wsum/N);
}


