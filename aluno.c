#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void le_alunos(int matriculas;char **nomes;int*n){
        FILE*f = fopen ("alunos.txt","r");
        int mat,i,linha;
        char c, nome[50];
        while(feof(f) != 0){
                if(fscanf(f,"%d",&mat)==0){
                        break;
                }
                fscanf(f,"%d",&mat)==0);
                i=0;
                c=fgetc(f);
                while(c=! '\n'){
                        nome[i]=c;
                        c=fgetc(f);
                        i++;
                }
                nome[i]='\0';
                matriculas[linha]=mat;
                strcpy(nomes[linha],nome);
                linha++;
        }
        n=linha;
        fclose(f);
}

int main(int argc, char **argv){
        char*nome;
        if(argc>1){
                nome=argv[1];
        }
        printf("%s\n",nome);
        int matricula[50],
        char nomes[50][50];
        int n;
        le_alunos(matriculas,nommes,&n);
}

