#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	int *pont;
	pont = (int *) malloc(sizeof(int));
	*pont = 42;
	printf("O endere�o do ponteiro criado �: %ld\n", pont);
	printf("O valor contido no ponteiro �: %d\n", *pont);
	return 0;
}
