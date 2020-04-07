#include<stdio.h>
#include<stdlib.h>
int main(void){
float *p,i;
printf("digite 3 numros inteiros\n");

for(i=0;i<3;i++){
scanf("%f",&p[i]);
}
p=(float*)malloc(3*sizeof(float));
	if(p==0){
	printf("erro\n");
	exit(0);
	}
som( *p,3);
ma(*p,3);

free(p);
return 0;
}
float som(float *p){
	float som,i;
	som+=p[i];
	
	printf("a soma eh %f",som);
	return som;
}
float ma(float *p){
	float ma,i;
	ma=p[0];
	if(ma<p[i]){
	ma=p[i];
	}	
printf("o maior eh %f",ma);
	return ma;
}
