#include <stdio.h>

int main(){
float peso, altura, cont;
printf("------IMC-----\n");
printf("qual seria o seu peso em Kg? ");
scanf("%f", &peso);

printf("qual e sua altura em metros? ");
scanf("%f", &altura);

cont = peso / (altura * altura);

if (cont < 17) {
printf("muito abaixo do peso");
}
    else if (cont >= 17 && cont < 18.49){
    printf("abaixo do peso");
    }
        else if (cont >= 18.5 && cont < 24.99){
        printf("peso normal");
        }
            else if (cont >= 25 && cont < 29.99){
            printf("acima do peso");
            }
                else if (cont >= 30 && cont < 34.99){
                printf("obesidade I");
                }
                    else if (cont >= 35 && cont < 39.99){
                    printf("obesidade II (severa)");
                    }
                        else{
                        printf("obesidade III(morbida)");
                        }
return 0;
}