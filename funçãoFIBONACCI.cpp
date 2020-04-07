#include<stdio.h>
#include<stdlib.h>
int fib(int);
int main(void){
int num,result;
printf("informe um numero inteiro\n");
scanf("%d",&num);
result=fib(num);
printf("e-nesimo (%d) elemento da fibonacci eh %d\n",num,result);

return 0;
}
int fib(int n){
	int aux;
	if(n==1 || n==2){
		return 1;
	}
	aux=fib(n-1)+fib(n-2);
	return aux;
}
