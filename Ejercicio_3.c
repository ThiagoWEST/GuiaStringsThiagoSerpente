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
   
 for (int i = 0; i<20; i++){
        if (a[i] != b[i]){
            	flag = 1; }
    }
   	 if (flag == 0){
        	printf("Son iguales");
    }
    	else{
       	 printf("Son diferentes");
    }
    return 0;
}