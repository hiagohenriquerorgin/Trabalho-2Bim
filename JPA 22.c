#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");    
    
printf("\n******************************************************************************* ");
printf("\n* Aluno: Hiago Henrique Teixeira do Amaral - RA  0026265*                       ");
printf("\n* Programa JPA-22: Par ou ímpar*                                                ");
printf("\n******************************************************************************\n");

int n1;

printf("\nDigite um número para verificação: \n");
scanf("%d", &n1);

if(n1 == 0){
	printf("O número é ZERO!");
	
}else if (n1 % 2 == 0){
	printf("O número é PAR!");
	
}else{
	printf("O número é ÍMPAR!");
}
return 0;
}
