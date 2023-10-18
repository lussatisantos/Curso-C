# include <stdio.h>

int main() {
	int A, B, soma, subtr, mult, divis;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &A);
	
	printf("Digite o segundo valor: ");
	scanf("%d", &B);
	
	soma = A + B;
	subtr = A - B;
	mult = A * B;
	divis = A / B;
	
	printf("____________________________________\n");
	printf("Resultados:\n");
	printf("A soma sera igual: %d\n", soma);
	printf("A subtracao sera igual: %d\n", subtr);
	printf("A multiplicacao sera igual: %d\n", mult);
	printf("A divisao sera igual: %d", divis);
}
