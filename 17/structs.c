# include <stdio.h>
# include <string.h>
# include <locale.h>

# define TAM 50

struct tipo_pessoa{
	int idade;
	float peso;
	char nome[TAM];
};

typedef struct tipo_pessoa tipo_pessoa;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	// Criando a inicializacao
	tipo_pessoa pes = {0, 0.0, "Teste"};
	
	printf("Inicio\n");
	printf("pes.idade: %d\n", pes.idade);
	printf("pes.pesoL %.2f\n", pes.peso);
	printf("pes.nome: %s\n", pes.nome);
	
	// Atribuindo valores aos campos
	pes.idade = 10;
	pes.peso = 99.99;
	strcpy(pes.nome, "Texto");
	
	printf("\nAlterando os campos via codigo\n");
	printf("pes.idade: %d\n", pes.idade);
	printf("pes.peso: %.2f\n", pes.peso);
	printf("pes.nome: %s\n", pes.nome);
	
	// Solicitando insercoes via teclado
	
	printf("\nInsira um numero inteiro: ");
	scanf("%d", &pes.idade);
	printf("Insira um nunero real: ");
	scanf("%f", &pes.peso);
	fflush(stdin);
	printf("Insira um palavra: ");
	scanf("%s", &pes.nome);
	
	printf("\nAlterando com dados do usuario\n");
	printf("pes.idade: %d\n", pes.idade);
	printf("pes.peso: %.2f\n", pes.peso);
	printf("pes.nome: %s\n", pes.nome);
}
