#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
setlocale(LC_ALL, "portuguese");	
printf("\n******************************************************************************* ");
printf("\n* Aluno: Hiago Henrique Teixeira do Amaral - RA  0026265*                       ");
printf("\n* Programa JPA-19: Ordem crescente (três números)*                              ");
printf("\n******************************************************************************* ");

int n1, n2, n3;

printf("Digite a pontuação dos 3 colocados: ");
scanf("%d %d %d", &n1, &n2, &n3);

printf("Ordem crescente: ");

    if (n1 <= n2 && n1 <= n3) {
        if (n2 <= n3) {
            printf("%d %d %d\n", n1, n2, n3);
    } else {
            printf("%d %d %d\n", n1, n3, n2);
    }
    } else if (n2 <= n1 && n2 <= n3) {
        if (n1 <= n3) {
            printf("%d %d %d\n", n2, n1, n3);
    } else {
            printf("%d %d %d\n", n2, n3, n1);
    }
    } else {
        if (n1 <= n2) {
            printf("%d %d %d\n", n3, n1, n2);
    } else {
            printf("%d %d %d\n", n3, n2, n1);
    }
}
return 0;
}

