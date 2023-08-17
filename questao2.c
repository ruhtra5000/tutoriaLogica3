#include <stdio.h>
#include <math.h>

int main() {
	int num, quadrado;
	printf("Informe um número: ");
	scanf("%d", &num);
    
	quadrado = pow(num, 2);
    
	if(quadrado%2 == 1){//"Se o quadrado for impar, então [codigo]"
    	printf("O numero digitado eh IMPAR\n");
    	printf("%d = 2.%d + 1, logo eh impar", num, (num-1)/2);
	}
  else {
	    printf("O numero digitado eh PAR\n");
    	printf("%d = 2.%d, logo eh par", num, num/2);
	}
    
	return 0;
}
