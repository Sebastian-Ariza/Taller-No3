/*
* programa: numeros pares entre el 1 y el 1000
* fecha: 21 de agosto de 2018
* elaborado por: sebastian ariza R.
*/

#include <stdio.h>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	
	int i, num = 1;
	
	
	for (i = 1; i <= 10; i++)
	{
		printf("%d\n", num * num);
		num = num + 1;
	}
	
	return 0;
}

