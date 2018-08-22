/*
* programa: numeros multiplos de 4 entre 64 y 4
* fecha: 21 de agosto de 2018
* elaborado por: sebastian ariza R.
*/

#include <stdio.h>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int num;
	//ciclo para tomar multiplos de 4
	for (num = 64; num >= 4; num += -4)
	{
		
		printf("%d\n", num);
		
	}
return 0;
}

