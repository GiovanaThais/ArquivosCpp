#include<stdio.h>
#include<stdlib.h>
int mult2(int,int);
int main(void){
int a,b,r;
printf("digite dois numeros\n");
scanf("%d%d",&a,&b);
r=mult2(a,b);
printf("multiplicacao %d\n",r);
return 0;
}
int mult2(int a,int b){
	if(a==0){
		return 0;
	}
	else 
	return b+mult2(a-1,b);
}
