#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	char c;
	int num;
	int suma = 0;
	int s;
	
	do
		{
			
			printf("introduzca un numero entero: ");
			scanf("%d", &num);
			printf("numero * numero - numero = resultado");
			
			printf("\n desea introducir otro numero o no (s/n) ?: ");
			fflush (stdin);
			scanf("%c", &c);
			printf("\n");
			suma += num;
			
		} while(c != 'n');
	printf ("la cantidad de numeros introducidos por el usuario es de: %d\n", s);
	printf ("la suma total de los numeros enteros es de : %d\n", suma);
	
	return 0;
}

