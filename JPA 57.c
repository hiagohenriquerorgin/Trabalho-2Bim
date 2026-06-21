#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");	
    printf("\n******************************************************************************* ");
    printf("\n* Aluno: Hiago Henrique Teixeira do Amaral - RA  0026265* ");
    printf("\n* Programa JPA-57: A Central do Brinquedo Eletrônico* ");
    printf("\n******************************************************************************* \n");

    char cor;

    printf("Digite a inicial da cor que acendeu (V - Verde, A - Amarelo, E - Vermelho): ");
    scanf(" %c", &cor);

    switch(cor) {
        case 'V':
        case 'v':
            printf("Vamos brincar lá fora!\n");
            break;
        case 'A':
        case 'a':
            printf("Estou ficando com soninho...\n");
            break;
        case 'E':
        case 'e':
            printf("Estou com fome, hora do lanche!\n");
            break;
        default:
            printf("Cor desconhecida\n");
    }

    return 0;
}
