#include <stdio.h>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	
	int i, num = 1;
	
	printf("cuadrado de los 10 primeros numeros naturales\n");
	
	for (i = 1; i <= 10; i++)
	{
		printf("%d\n", num * num);
		num = num + 1;
	}
	
	return 0;
}

