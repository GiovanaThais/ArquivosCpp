#include<stdio.h>
#include<stdlib.h>
void calculadora(int,int,int*,int*,int*,float *);
int main(void){
int num,num2,soma,dif,prod;
float media;
printf("digite um numero\n");
scanf("%d",&num);
printf("digite outro numero\n");
scanf("%d",&num2);
calculadora(num,num2,&soma,&dif,&prod,&media);
printf("a soma eh %d\n\t a diferenca eh %d\n\t o produto eh %d\n\t  a media eh %f\n",soma,dif,prod,media);
return 0;
}
void calculadora(int num,int num2,int *soma,int *dif,int *prod,float *media){
	
	*soma=num+num2;
	*dif=num-num2;
	*prod=num*num2;
	*media=(num+num2)/2;
}
