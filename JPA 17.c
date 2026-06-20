#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
setlocale(LC_ALL, "portuguese");	
printf("\n******************************************************************************* ");
printf("\n* Aluno: Hiago Henrique Teixeira do Amaral - RA  0026265*                       ");
printf("\n* Programa JPA-17: O Sensor do Parque Temático*                                 ");
printf("\n******************************************************************************* ");

float alt;

printf("Qual sua altura em centímetros de acordo com o sensor?");
scanf("%f", &alt);

if(alt >= 140){
	printf("Você está liberado para curtir em nossa Montanha Russa!!!");

}else{
	printf("Infelizmente por questões de segurança, você não poderá participar desta aventura, mas curta diversas outras em nossas outras atrações!");
}
return 0;
}
