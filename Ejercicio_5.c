#include <stdio.h>

int main()
{
    char a[20] = {0};
    int flag = 0;
    int flag2 = 0;
    printf("Ingrese una palabra de hasta 20 letras: ");
    scanf("%s", a);
    for (int i = 0; i<20; i++){
        if (a[i] == 97 || a[i] == 101|| a[i] == 105|| a[i] == 111|| a[i] == 117){
            flag++;
        }
        else if (a[i] ==  65|| a[i] ==   69|| a[i] ==  73|| a[i] ==  79|| a[i] ==  85){
            flag2++;
        }
    }
    printf("\nCantidad de vocales minúsculas: %d", flag);
    printf("\nCantidad de vocales mayúsculas: %d", flag2);
    return 0;
}