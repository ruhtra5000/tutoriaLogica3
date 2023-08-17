#include <stdio.h>
#include <math.h>

int calcularEnesimoTermo(int termoInicial, int n, int razao){
	return (termoInicial + ((n-1)*razao));
}

int main() {
	int termoInicial, termo, razao;
	//"termo" = n
	printf("Informe o primeiro termo da PA: ");
	scanf("%d", &termoInicial);
	printf("Informe a razao da PA: ");
	scanf("%d", &razao);
	printf("Informe enesimo termo desejado: ");
	scanf("%d", &termo);
    
	int termoN = calcularEnesimoTermo(termoInicial, termo, razao);
    
	printf("O %dº termo desta PA eh %d", termo, termoN);
    
	return 0;
}
