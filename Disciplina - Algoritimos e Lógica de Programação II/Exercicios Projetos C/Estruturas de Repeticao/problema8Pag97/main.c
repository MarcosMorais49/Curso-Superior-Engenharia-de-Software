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
				printf("Avaliação do Produto: \n");
				printf("1-Satisfatório, 2-Indiferente, 3-Insatisfatório \n");
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
	mediaIdade =  idadeSatisf / cliSatisf;  //mediaIdade : float ////  idadeSatisf, cliSatisf : int /// médiaIdade só recebe float se eu definir cliSatisf ou idadeSatisf tambem como float!
	printf("%d clientes opinaram como satisfatório! \n", cliSatisf);
	printf("A média de idade dos clientes que responderam a pesquisa como SATISFATÓRIO é: %.2f \n", mediaIdade);
	printf("%d clientes opinaram como insatisfatório! \n", cliInsatisf);
	return 0;
}
