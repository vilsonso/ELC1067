#include <stdio.h>

void main(){
	int matricula;
	FILE*f;
	char nome[100];
	printf("Digite matricula:");
	scanf("%d",&matricula);
	printf("Nome:");
	scanf("%s",nome);
	f = fopen ("saida.txt","w");
	fprintf(f,"%d%s\n",matricula,nome);
	fclose(f);
}

