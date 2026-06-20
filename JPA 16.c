#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
setlocale(LC_ALL, "portuguese");	
printf("\n******************************************************************************* ");
printf("\n* Aluno: Hiago Henrique Teixeira do Amaral - RA  0026265*                       ");
printf("\n* Programa JPA-16: Múltiplo de 3 e/ou 5*                                        ");
printf("\n******************************************************************************* ");

int n1;

printf("\nDiga o número do seu pedido: ");
scanf("%d", &n1);

if(n1 % 3 == 0 && n1 % 5 == 0){
	printf("Parabéns, você ganhou um refrigerante e uma sobremesa!");

}else if(n1 % 3 == 0){
	printf("Parabéns, você ganhou um refrigerante!");

}else if (n1 % 5 == 0) {
    printf("\nParabéns! Você ganhou uma Sobremesa!");

}else 
printf("Seu número de pedido não possui brindes");
    
    
}
    
    
    
    
    
    
    

