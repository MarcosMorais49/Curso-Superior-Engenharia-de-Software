#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
	
	int aval, idadeSatisf, cliInsatisf, idade, cliSatisf;
	float mediaIdade;
	
	cliInsatisf = 0;
	cliSatisf = 0;  
	idadeSatisf = 0;
	
	do {
			printf("Informe sua idade: \n");
			scanf("%d", &idade);
		if (idade > 0){
			do {
				printf("Avalia��o do Produto: \n");
				printf("1-Satisfat�rio, 2-Indiferente, 3-Insatisfat�rio \n");
				scanf("%d", &aval);
			} while ((aval != 1) && (aval != 2) && (aval != 3));
			if (aval == 1) {
				cliSatisf++;
				idadeSatisf = idadeSatisf + idade;
			}
			if (aval == 3) {
				cliInsatisf++;
			}			
		}
	} while (idade != 0);
	mediaIdade =  idadeSatisf / cliSatisf;  //mediaIdade : float ////  idadeSatisf, cliSatisf : int /// m�diaIdade s� recebe float se eu definir cliSatisf ou idadeSatisf tambem como float!
	printf("%d clientes opinaram como satisfat�rio! \n", cliSatisf);
	printf("A m�dia de idade dos clientes que responderam a pesquisa como SATISFAT�RIO �: %.2f \n", mediaIdade);
	printf("%d clientes opinaram como insatisfat�rio! \n", cliInsatisf);
	return 0;
}
