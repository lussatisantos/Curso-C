#include <stdio.h>

int main() {
	
	int dado = 10;
	printf("Dados antes do incremento: %d.\n", dado);
	
	dado++;
	print("Depois do incremento: %d.\n", dado);
	
	dado--;
	printf("Depois do decremento: %d.\n", dado);
	
	dado += 3;
	printf("Depois do incremento en 3 unidades: %d.\n", dado);
	
	dado -= 2;
	printf("Depois de decremento de 2 unidades: %d.\n", dado);
	
	dado *= 10;
	printf("Depois de multiplicar por 10: %d.\n", dado);
}
