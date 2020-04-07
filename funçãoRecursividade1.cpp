#include<stdio.h>
#include<stdlib.h>
int fat(int);
int main(void){
int num,resp;
printf("digite um numero que deseja saber o fatorial\n");
scanf("%d",&num);
resp=fat(num);
printf("o fatorial eh %d\n",resp);
return 0;
}
int fat(int n){
	int aux;
	if(n==1){
		return 1;
	}
	aux=n*fat(n-1);
	return aux;
}
