#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");	
    printf("\n******************************************************************************* ");
    printf("\n* Aluno: Hiago Henrique Teixeira do Amaral - RA  0026265* ");
    printf("\n* Programa JPA-58: A Calculadora de Bolso de 4 Operações* ");
    printf("\n******************************************************************************* \n");

    float n1, n2;
    char operacao;

    printf("Digite o primeiro número: ");
    scanf("%f", &n1);
    printf("Digite o segundo número: ");
    scanf("%f", &n2);
    printf("Digite a operação (+, -, *, /): ");
    scanf(" %c", &operacao);

    switch(operacao) {
        case '+':
            printf("Resultado: %.2f\n", n1 + n2);
            break;
        case '-':
            printf("Resultado: %.2f\n", n1 - n2);
            break;
        case '*':
            printf("Resultado: %.2f\n", n1 * n2);
            break;
        case '/':
            if (n2 != 0) {
                printf("Resultado: %.2f\n", n1 / n2);
            } else {
                printf("Erro: Divisão por zero.\n");
            }
            break;
        default:
            printf("Operação matemática não reconhecida\n");
    }

    return 0;
}
