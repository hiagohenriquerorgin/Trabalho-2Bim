#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");    
    printf("\n******************************************************************************* ");
    printf("\n* Aluno: Hiago Henrique Teixeira do Amaral - RA  0026265* ");
    printf("\n* Programa JPA-15: Quantas caixas cabem dentro do caminhão* ");
    printf("\n******************************************************************************* \n");

    float alturaC, larguraC, profundidadeC;
    float alturaCX, larguraCX, profundidadeCX; 
    float cx1, cx2, cx3;
    int altura, largura, profundidade, total;

    
    printf("Diga as medidas do caminhão em metros:\n");
    scanf("%f %f %f", &alturaC, &larguraC, &profundidadeC);

   
    printf("Diga as medidas da caixa em centímetros:\n");
    scanf("%f %f %f", &alturaCX, &larguraCX, &profundidadeCX); 

    cx1 = alturaCX / 100.0;
    cx2 = larguraCX / 100.0;
    cx3 = profundidadeCX / 100.0;
    
   altura = (int)(alturaC / cx1);
   largura = (int)(larguraC / cx2);
   profundidade = (int)(profundidadeC / cx3);

    total = altura * largura * profundidade;
    
    printf("\nCabem %d caixas no caminhão.\n", total);

    return 0;
}
