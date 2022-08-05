#include <stdio.h>

int main()
{
    char a[20] = {0};
    char b[20] = {0};
    int flag = 0;
    printf("Ingrese una palabra de hasta (Max 20): ");
   
		 scanf("%s", a);
    		 
 printf("Ingresar segunda palabra (Max 20): ");
    	 
scanf("%s", b);
   
 for (int i = 0; i<20; i++){ //se recorren los dos strings, se comparan letra por letra 
        if (a[i] != b[i]){   //si string a no es igual al b flag=1
            	flag = 1; }
    }
   	 if (flag == 0){ //si no cambia (flag) son identics
        	printf("Son iguales");
    }
    	else{
       	 printf("Son diferentes"); //lo opuesto
    }
    return 0;
}