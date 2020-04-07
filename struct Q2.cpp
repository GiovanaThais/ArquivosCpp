#include<stdio.h>
#include<stdlib.h>
int main(void){
typedef struct{
	int idade,semestre,mat;
	float score;
	char nome[50];
}Aluno;
int c=1,i=0,j=0;
Aluno*aluno;
aluno=(Aluno*)calloc(i+1,sizeof (Aluno));
if(aluno==0){
	printf("erro");
	
}
while(c!=0){
	printf("digite a matricula\n");
	scanf("%d",&aluno[i].mat); getchar();
	printf("digite o nome\n");
	gets(aluno[i].nome);
	printf("digite a idade\n");
	scanf("%d",&aluno[i].idade);
	printf("digite o semestre\n");
	scanf("%d",&aluno[i].semestre);
	printf("digite o score\n");
	scanf("%f",&aluno[i].score);
	
	printf("digite 0 para sair\n");
	scanf("%d",&c);
	
	if(c!=0){
		i++;
		aluno=(Aluno*)realloc(aluno,(i+1)*sizeof(aluno));
	}
}
for(j=0;j<=1;j++){
	printf("matricula %d\n",aluno[i].mat);
	printf("nome %s\n",aluno[i].nome);
	printf("semestre %d\n",aluno[i].semestre);
	printf("idade  %d\n",aluno[i].idade);
	printf("score %f\n",aluno[i].score);
}
free(aluno);
return 0;
}

