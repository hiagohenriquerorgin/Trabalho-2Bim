#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");	
    printf("\n******************************************************************************* ");
    printf("\n* Aluno: Hiago Henrique Teixeira do Amaral - RA  0026265* ");
    printf("\n* Programa JPA-54: Validar número entre 1 e 5* ");
    printf("\n******************************************************************************* \n");

    int nivel;

    do {
        printf("Escolha o nível de dificuldade (1 a 5): ");
        scanf("%d", &nivel);
    } while (nivel < 1 || nivel > 5);

    printf("Nível %d selecionado.\n", nivel);

    return 0;
}
