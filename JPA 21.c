#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");    
    
printf("\n******************************************************************************* ");
printf("\n* Aluno: Hiago Henrique Teixeira do Amaral - RA  0026265*                       ");
printf("\n* Programa JPA-21: Número positivo ou negativo*                                 ");
printf("\n******************************************************************************\n");

double n1;

printf("\nDigite qualquer número para verificação: \n");
scanf("%f", &n1);

if(n1 > 0){
	printf("O núemro é positivo!");
}else if(n1 < 0){
    printf("O número é negativo!");
}else{
	printf("O número é zero!");
}
return 0;
}
