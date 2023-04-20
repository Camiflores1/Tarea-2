#include<stdio.h>
#include<math.h>

int main(){
    int tope=32768, primo, debajo;
    for(int i=tope; i>1; i--){
        primo=1;
        /*sqrt calcula la raiz cuadrada */
        for(int j=2; j<=sqrt(i); j++){
            if (i % j == 0){
                primo=0;
                break;
            }
        }
        if(primo){
            debajo=i;
            break;
        }
    }
    printf("El número primo más cercano por debajo de 32768 es: %d\n", debajo);
    return 0;
}
