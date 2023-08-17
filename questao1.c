#include <stdio.h>
#include <math.h>

int somatorio(int base, int ultimoExpoente){
  if(ultimoExpoente == 0){
    	return 1;
	}
	else {
    	return pow(base, ultimoExpoente) + somatorio(base, ultimoExpoente-1);
	}
}

int equacaoDeProva(int base, int expoente){
	return ( (pow(base, expoente+1) - 1) / (base-1) );
}

int main() {
	int base, ultimoExpoente;
	printf("Informe a base: ");
	scanf("%d", &base);
	printf("Informe o enesimo expoente: ");
	scanf("%d", &ultimoExpoente);
    
	int resultadoSomatorio = somatorio(base, ultimoExpoente);
	int resultadoEquacao = equacaoDeProva(base, ultimoExpoente);
    
	printf("Somatorio: %d\n", resultadoSomatorio);
	printf("Equacao de prova: %d", resultadoEquacao);
    
	return 0;
}
