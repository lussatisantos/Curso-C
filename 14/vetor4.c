# include <stdio.h>

int main() {
	int v[5];
	int i;
	
	for(i=0; i<5; i++){
		printf("Digite um numero: ");
		scanf("%d" , &v[i]);
	}
	
	printf("Informacoes inseridas:");
	for (i=0; i<5; i++) {
		printf(" %d", v[i]);
	}
	
}
