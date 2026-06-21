#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");	
    printf("\n******************************************************************************* ");
    printf("\n* Aluno: Hiago Henrique Teixeira do Amaral - RA  0026265* ");
    printf("\n* Programa JPA-38: Senha correta* ");
    printf("\n******************************************************************************* \n");

    int senha;

    printf("Digite a senha: ");
    scanf("%d", &senha);

    while (senha != 1234) {
        printf("Senha incorreta! Digite novamente: ");
        scanf("%d", &senha);
    }

    printf("Acesso permitido!\n");

    return 0;
}
