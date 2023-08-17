#include <stdio.h>
#include <math.h>

int fatorial(int num){
	if(num == 1){
    	return 1;
	}
	else {
    	return num * fatorial(num-1);
	}
}

int main() {
	int num;
	printf("Informe um N maior que 0: ");
	scanf("%d", &num);
    
	int resultado = fatorial(num);
    
	printf("%d! = %d", num, resultado);
    
	return 0;
}
