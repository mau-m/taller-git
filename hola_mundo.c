#include <stdlib.h>
#include <stdio.h>

int suma(int n) {
	if(n == 1) { return 1; }
	return n + suma(n - 1);
}

int main() {
	printf("Hola, Mundo\n");
	printf("Luis Estuvo aquí xd\n");
}

int factorial(int n){
	if(n == 1) { return 1; }
	return n * factorial(n - 1);
}
