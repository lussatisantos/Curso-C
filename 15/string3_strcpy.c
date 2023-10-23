# include <stdio.h>
# include <string.h>
# include <locale.h>

# define N 20

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	char origem[N] = {"Olá, Mundo!"};
	char destino[N];
	
	printf("Antes do STRCPY: \n");
	puts(origem);
	puts(destino);
	
	printf("Depois do STRCPY: \n");
	strcpy(destino, origem);
	puts(origem);
	puts(destino);
}
