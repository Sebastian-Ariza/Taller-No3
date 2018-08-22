#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	 
	char c;
	int num;
	int suma = 0;
	int s = 0;
	int resultado;
	
	do
		{
			
			printf("introduzca un numero entero: ");
			scanf("%d", &num);
			printf("%d", resultado = num * num - num);
			suma += num;
			s++;
			printf("\n desea introducir otro numero o no (s/n) ?: ");
			fflush (stdin);
			scanf("%c", &c);
			printf("\n");
			
			
		} while(c != 'n');
	
	
	printf( "el usuraio ha ingresado un total de %d numeros\n", s);
	printf ("la suma total de los numeros enteros es de %d\n", suma);
	
	return 0;
}

