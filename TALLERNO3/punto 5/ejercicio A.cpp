#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	
	char c;
	int i, num;
	
	//inicia repira mientras para multiplicar
	
	do
		{
		
		printf("introduzca un numero entero: ");
		scanf("%d", &num);
		printf("\n la tabla de multiplicar del numero %d es: \n\n", num);
		
		//iniciamos tabla de multiplicar
		for (i = 0; i <= 10; i++)
		{
			
			printf("%d * %d = %d \n", i , num, i * num);
			
		}
		
		printf("\n desea visualizar otra tabla de multiplicar (s/n) ?: ");
		fflush (stdin);
		scanf("%c", &c);
		printf("\n");
		
	} while(c != 'n');
	
return 0;
}	
