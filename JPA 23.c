#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");    
    
printf("\n******************************************************************************* ");
printf("\n* Aluno: Hiago Henrique Teixeira do Amaral - RA  0026265*                       ");
printf("\n* Programa JPA-23: Maior de dois números*                                       ");
printf("\n******************************************************************************\n");

float n1, n2;

printf("Digite a pontuação dos atletas: ");
scanf("%f, %f", n1, n2);

if(n1 < n2){
    printf("Essa %f é a maior pontuação", n1);
   
}else if(n1 > n2){
	printf("Essa %f é a maior pontuação", n2);
}else(n1 == n2){
	printf("EMPATE!");

}
return 0;
}
