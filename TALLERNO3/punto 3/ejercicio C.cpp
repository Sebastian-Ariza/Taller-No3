/*
* programa: numeros pares entre el 1 y el 1000
* fecha: 21 de agosto de 2018
* elaborado por: sebastian ariza R.
*/

#include <stdio.h>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	
	int num;
	
	
	for (num = 2; num <= 1000; num += 2)
	{
		printf("%d\n", num);
		
	}
	
	return 0;
}

