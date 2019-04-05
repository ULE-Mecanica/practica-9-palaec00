#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (){
  	int tam;
	char cadena[100];
	printf("Introduzca una cadena: ");
	fgets (cadena,10,stdin);
        tam = strlen(cadena);
	printf("La longitud de %s insertada es %d\n",cadena,tam-1);	
        	if (strcmp(cadena,"cadena añadida\n") == 0)
		printf("\nLas cadenas comparadas son idénticas\n");
	      else
                printf("\nLas cadenas comparadas son distintas\n");
	strcat(cadena,"cadena añadida");
	printf("La cadena concatenada es %s\n", cadena);
return 0;
}
