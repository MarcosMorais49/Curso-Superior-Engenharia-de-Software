#include <stdio.h>
#include <stdlib.h>

void lePeso(float *peso){
     printf("\nInforme seu peso em Kg:");
     scanf ("%f", &*peso);
}

void leAltura(float *altura){
	printf("\nInforme sua altura em m:");
    scanf ("%f",&*altura);
}

float calculaIMC(float peso2, float altura2){
	float imc2;
	imc2 = peso2 / (altura2*altura2); 
	return(imc2);  
}

void retornoIMC(float imc){
	if (imc <19 ){
	   printf("\n\t\t\t MUITO MAGRO");   
	}else{       
	   if(imc >= 19 && imc<25){
	       printf("\n\t\t  NORMAL");       
	   }else{       
	        if(imc >= 25 && imc<30){
	             printf("\n\t\t  SOBRE PESO");       
	        }else{       
	              if(imc >= 30 && imc<=40){
	                   printf("\n\t\t  NORMAL");       
	             }else{       
	                   if (imc>40){
	                          printf("\n\t\t  OBESIDADE GRAVE");
	                   }
	               }
	           }
	       } 
	   }	
	
}

int main(){   
    float peso , altura, imc;
    lePeso(&peso);
    leAltura(&altura);
    imc = calculaIMC(peso, altura);
    retornoIMC(imc);

    printf("\n\t\tSeu IMC é: %.2f",imc);
    return 0;
}
