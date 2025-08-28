#include <stdio.h>
#define l 10

int main(){

int x,y,z;

printf("digite um numero para descobrir sua tabuada: ");
scanf("%d",&x);

y = 1;

printf("A tabuada de %d \202: \n", x);
while (y <= l){
        z = x * y;
        printf(" %d x %d = %d \n",x,y,z);
        y ++;
    }

return 0;
}

