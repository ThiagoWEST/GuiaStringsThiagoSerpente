#include <stdio.h>

int main()
{
    char a[20];
       
         int t = 0;
             printf("Ingrese una palabra(max 20): ");
    
    
    scanf("%s", a);
    
    for(int x = 0;
 x< 20 && a[x]!='\0'; x++){t++;}
    
    //
    printf("\nNumero de lertas: %d", t);
    
    
    return 0;
}
