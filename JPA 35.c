#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");	
    printf("\n******************************************************************************* ");
    printf("\n* Aluno: Hiago Henrique Teixeira do Amaral - RA  0026265* ");
    printf("\n* Programa JPA-35: Números de Fibonacci (n termos)* ");
    printf("\n******************************************************************************* \n");

    int n, i, t1 = 0, t2 = 1, proximo;

    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d ", t1);
        proximo = t1 + t2;
        t1 = t2;
        t2 = proximo;
    }
    printf("\n");

    return 0;
}
