#include <stdio.h>

int main()
{
    int num;  
    printf("Multiplos de 3\n");
    
    for (int i=0; i<20; i++){
        num=num+3;
        printf("-");
        printf("%d",num);
    }
    return 0;
}
