#include <stdio.h>

int main()
{
    int num, dig1, dig2, i;

   printf("Ingrese un número entero de dos dígitos: ");
   scanf("%d", &num);

   dig2 = num % 10;
   dig1 = num / 10;

   printf("Los enteros comprendidos entre %d y %d son: ", dig1, dig2);
   for (i = dig1; i <= dig2; i++) {
      printf("%d ", i);
   }
   printf("\n");
    return 0;
}
