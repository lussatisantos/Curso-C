# include <stdio.h>

#define texto "Entrada e saida e dados"

int main() {
	printf("%s\n", texto);
	
	int idade = 0;
	float altura = 0.0;
	char nome[50] = "";
	
	printf("Digite a idade: ");
	scanf("%d", &idade);
	
	printf("Digite a altura: ");
	scanf("%f", &altura);
	
	printf("Digite o nome:");
	scanf("%s", &nome);
	
	printf("%s voce tem %d anos de idades, com uma altura a rondar a %.2f metros", nome, idade, altura);
	
}
