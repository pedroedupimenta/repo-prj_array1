#include <stdlib.h>
#include <stdio.h>

int main (void) {
	int numeros[5];
	int soma = 0;

	printf("Digite 5 números inteiros: \n");

	for (int i = 0; i < 5; i++) {
		printf("Número %d: ", i + 1);
		fflush(stdout);
		scanf("%d", &numeros[i]);
		soma = soma + numeros[i];
	}

	double media = (double) soma / 5;

	printf("Soma: %d\n", soma);
	printf("Média: %.2lf\n", media);
	return 0;
}
