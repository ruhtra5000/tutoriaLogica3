#include <stdio.h>
#include <math.h>

int calcularSomatorio(int numero){
	if(numero == 1){
    	return 1;
	}
	else {
    	return ((2*numero)-1) + calcularSomatorio(numero-1);
	}
}

int main() {
	int numero;
	printf("Informe um N maior que 0: ");
	scanf("%d", &numero);
    
	int resultadoSomatorio = calcularSomatorio(numero);
	int numeroQuadrado = pow(numero, 2);
    
	printf("Somatorio: %d\n", resultadoSomatorio);
	printf("N^2 = %d", numeroQuadrado);
    
	return 0;
}
