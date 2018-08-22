#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	int s;
	int suma = 0;
	do
		
		{
			
			printf ("ingrese un numero\n");
			scanf ("%d", &s);
			suma += s;
			
		}while (s != 0); 
	printf ("la suma total de los numeros enteros es de : %d\n", suma);
	    
	return 0;
}

