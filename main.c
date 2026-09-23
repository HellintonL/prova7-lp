#include <stdio.h>
#include <stdlib.h>

int main(){
struct Aluno{
char nome[50];
char turma[20];
};
float nota;
float nota1;
float nota2;
float nota3;
float nota4;
float media;
struct Aluno aluno;
int continuar = 1;

    system("cls");
    printf("==============================\n");
    printf("       BOLETIM ESCOLAR\n");
    printf("==============================\n");
    
    printf("Digite o seu nome: \n");
    scanf("%s", aluno.nome);

    printf("Informe a sua turna: \n");
    scanf("%s", aluno.turma);

    printf("Informe as suas notas: \n");
    for(int i = 1; i < 5; i++){
        printf("Nota: %.2f", &nota, i + 1); 
    };

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    if(media >= 7){
        printf("SITUAÇÃO: APRIVADO! \n");
    };
        else if(media == 5 && < 7){
            printf("SITUAÇÃO: RECUPERAÇÃO! \n");
        };
            else{
                printf("SITUAÇÃO: REPROVADO! \n");
            };    

}