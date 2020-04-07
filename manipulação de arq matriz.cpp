#include<stdio.h>
#include<stdlib.h>
int main(void){
int mat[100][100];
FILE*arq;
int lin,col,i,j;
arq=fopen("texto.txt","r");
if(arq==NULL){
	printf("ERRO");
	exit(0);
}
while(fscanf(arq,"%d%d\n",&lin,&col)!=EOF){
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			fscanf(arq,"%d\n",&mat[i][j]);
		}
	}
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			printf("%d\t",mat[i][j]);
		}
	}
}

fclose(arq);



return 0;
}

