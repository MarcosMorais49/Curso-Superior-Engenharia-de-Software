#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	int i;
	setlocale(LC_ALL,"Portuguese");
	printf("Os numeros divisiveis por 3 e menores que 100 são: \n");
	for (i =1; i<=100; i++){
		if (i % 3 == 0){
			printf("%d \n", i);
		}
	}

	return 0;
}
