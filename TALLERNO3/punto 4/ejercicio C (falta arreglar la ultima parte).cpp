#include <stdio.h>

int main() {
	int a, n, d;
	int c;
	printf("numeros primos del 1 al 50\n");
	scanf("%d", &a);
	n = 1;
	
	while (a > 0 && a <= 50) {
		
		c = 1;
		for (d = 2; d < n; ++d) {
			if (n % d == 0) {
				c = 0;
				break;
			}
		}
		
		if (c) 
			
		{
			printf("%d ", n);
			a--;
		}
		n++;
	}
	
	printf("\n");
	return 0;
}
