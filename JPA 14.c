#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
setlocale(LC_ALL, "portuguese");	
printf("\n******************************************************************************* ");
printf("\n* Aluno: Hiago Henrique Teixeira do Amaral - RA  0026265*                       ");
printf("\n* Programa JPA-14: Tipo de Triângulo*                                           ");
printf("\n******************************************************************************* ");
	
	
float l1, l2, l3;

printf("\nDigite o tamanho do primeiro lado do triângulo: ");
scanf("%f", &l1);

printf("\nDigite o tamanho do segundo lado do triângulo: ");
scanf("%f", &l2);

printf("\nDigite o tamanho do terceiro lado do triângulo: ");
scanf("%f", &l3);	

if (l1 == l2 && l2 == l3) {
	
printf("O triângulo é equilátero!");	

}else if (l1 == l2 || l1 == l3 || l2 == l3){
	
printf("O triângulo é isóceles!");

}else{

printf("O triângulo é escaleno!");
}
	
return 0;
	
	
}
