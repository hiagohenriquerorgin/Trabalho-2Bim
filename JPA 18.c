
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h> 

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    printf("\n*******************************************************************************");
    printf("\n* Aluno: Hiago Henrique Teixeira do Amaral - RA  0026265                      *");
    printf("\n* Programa JPA-18: Login simples                                              *");
    printf("\n*****************************************************************************\n");
   
    char usuarioc[100];
    char senhac[100];
    
    char usuario[] = "admin";
    char senha[] = "123456";
    
    printf("Usuário: ");
    scanf("%s", usuario);
    
    printf("Senha: ");
    scanf("%s", senha);
    
    if (strcmp(usuario, usuarioc) == 0 && strcmp(senha, senhac) == 0) {
        printf("Acesso permitido!\n"); 
    } else {
        printf("Acesso negado!\n"); 
    }
    
    return 0;
}
