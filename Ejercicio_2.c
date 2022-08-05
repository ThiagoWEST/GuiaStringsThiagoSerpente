#include <stdio.h>

int main()
{
    char a[20];
    char b;
    int x = 0;
    int z= 0;
    printf("Ingrese una palabra (20 letras maximo): "); 
    scanf("%s", a); 
    for(int i = 0; i < 20 && a[i]!='\0'; i++){
        x++; //se mide la longitud
    }
    z = (x)/2;
    x--;
    for(int i = 0; i < z; i++){ //se almacena la letra i, 
                                //i=len-i
        b = a[i];
        a[i] = a[x-i];
        a[x-i] = b; //len-i = i
    }
    printf("\n   Num de letras de letras: %d", x+1);
    
    printf("\n Letras Invertidas: %s", a);
   //se muestran resultados en pantalla
    return 0;
}