#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");    
    
printf("\n******************************************************************************* ");
printf("\n* Aluno: Hiago Henrique Teixeira do Amaral - RA  0026265*                       ");
printf("\n* Programa JPA-20: Ano bissexto*                                                ");
printf("\n******************************************************************************\n");

int ano;

printf("Digite o ano que você quer verificar: ");
scanf("%d", &ano);

if((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0){
	printf("O ano %d, é um ano bissexto", ano);
}else{
	printf("O ano %d, não é um ano bissexto", ano);
}

return 0;

}
