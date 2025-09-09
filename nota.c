#include <stdio.h>
#include <ctype.h>
#include <windows.h>
#include <locale.h>

float nota, media;
int incremento = 0;
char escolha;

void calculo() {
    printf("Deseja acrescentar mais alguma nota? s/n: ");
    scanf(" %c", &escolha); 

    escolha = tolower(escolha);

    while (escolha != 's' && escolha != 'n') {
        printf("Opção inválida, Digite apenas 's' ou 'n'.\n");
        printf("Deseja acrescentar mais alguma nota? s/n: ");
        scanf(" %c", &escolha);
    }
    media += nota;  
    incremento++;   

}

int main() {
    SetConsoleOutputCP(65001);  
    SetConsoleCP(65001);

    printf("__________MEDIA__________ \n");
    printf("Qual foi sua primeira nota? ");
    scanf("%f", &nota);

    printf("Qual foi sua segunda nota? ");
    scanf("%f", &media);
    incremento ++;
    printf("--------------------------- \n");  
    calculo(); 

    while (escolha == 's') {
        printf("--------------------------- \n");  
        printf("Qual é a sua próxima nota? "); 
        scanf("%f", &nota);
        printf("--------------------------- \n");  
        calculo();           
    }
    printf("--------------------------- \n");  
    printf("Sua média é %.2f\n",media / incremento);  
    printf("A quantidade de notas adcionadas foi de %d\n", incremento);

    return 0;
}