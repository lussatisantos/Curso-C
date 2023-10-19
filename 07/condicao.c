# include <stdio.h>

int main() {
	
	float m;
	
	printf("Insira a nota:");
	scanf("%f", &m);
	
	if(m >= 7.0){
		printf("Aprovado(a)!\n");
	} else {
		if (m > 4) {
			printf("Foste ao recurso");
		} else {
			printf("Reprovado(a)");
		}
	}
}
