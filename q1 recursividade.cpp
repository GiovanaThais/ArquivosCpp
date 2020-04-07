#include<stdio.h>
#include<stdlib.h>
int Exp(int ,int);
int main(void){
	int x,n,result;
printf("digite um numero inteiro\n");
scanf("%d",&x);
printf("digite o exponencial\n");
scanf("%d",&n);
result=Exp(x,n);
printf("o numero %d elevado a %d eh %d\n",x,n,result);
return 0;
}
int Exp(int a,int b){
	
	if(b==0)
	return 1;
	else if(b==1)
	return a;
	else
	return a*Exp(a,b-1);
	
}
