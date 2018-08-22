#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
int main() {
	
	int a, n, d;
	int c;
	bool primo;
	printf("ingrese la cantidad de numeros que desea ver en pantalla\n");
	scanf("%d", &d);
	printf("1: 2\n");
	n = 1;
	c = 3;
	while (n < d) {
		
		primo = true;
		for (a = 3; a <= sqrt(c); a += 2) {
			if (c % a == 0) {
				primo = false;
				
			}
		}
		
		if (primo) {
			n = n + 1;
			printf("%d: %d\n", n, c);
		}
		c = c + 2;
	}
	return 0;
}

	
