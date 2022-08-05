#include <stdio.h>

int main()
{
    char a[20];
    char b;
    int x = 0;
    int z= 0;
    printf("Ingrese una palabra de hasta 20 letras maximo: "); 
    scanf("%s", a); 
    for(int i = 0; i < 20 && a[i]!='\0'; i++){
        x++;
    }
    z = (x)/2;
    x--;
    for(int i = 0; i < z; i++){
        b = a[i];
        a[i] = a[x-i];
        a[x-i] = b;
    }
    printf("\n   Num de letras de letras: %d", x+1);
    
    printf("\n Letras Invertidas: %s", a);
   
    return 0;
}