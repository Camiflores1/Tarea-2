#include <stdio.h>

int main()
{
    int num,cont;
    do{
    printf("Ingrese un número (entero): ");
    scanf ("%d",&num);
    if (num<1){
        printf ("El número no es entero.\n");
    }  
    }while(num<1);   
    for(int i=1; i<=num; i++){
        cont++;
        printf("%d\n",cont);
    }
    return 0;
}
