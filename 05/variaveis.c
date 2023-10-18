# include <stdio.h>

#define texto "Entrada e saida de dados"

int main() {
	printf("###############################\n");
	printf("%s\n", texto);
	printf("###############################\n");
	
	int idade = 0;
	float altura = 0.0;
	char nome[50] = "";
	
	printf("Digite a idade: ");
	scanf("%d", &idade);
	
	printf("Digite a altura: ");
	scanf("%f", &altura);
	
	printf("Digite o nome:");
	scanf("%s", &nome);
	
	printf("###############################\n");
	printf("Dados informados:\n");
	printf("Nome: %s\n", nome);
	printf("Idade: %d\n", idade);
	printf("Altura: %.2f\n", altura);
	printf("###############################\n");
	// printf("%s voce tem %d anos de idades, com uma altura a rondar a %.2f metros", nome, idade, altura);
	
}
