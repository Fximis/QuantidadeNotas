#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main(void){
	
	int troco, n50=0, n20=0, n10=0, n5=0, n2=0, n1=0, totaltroco;
	bool verificador=true;
	
	// printf("Digite um valor inteiro para informar o troco que deve ser devolvido: \nR$ "); 
	// scanf("%d", &troco);

	while (verificador){ 
		printf("Digite um valor inteiro para informar o troco que deve ser devolvido: \nR$ ");
		scanf("%d", &troco);
		if (troco <=0){
			printf ("Valor invalido \n \n ");
			system ("cls");
		
		} else{
			verificador = false;
		}
		
	}
	
	totaltroco = troco;

	while (troco > 0){
		if (troco >= 50){
			troco -= 50; // troco = troco - 50
			n50++;
			
		} else if (troco >= 20){
			troco -= 20;
			n20++;
	
		}else if (troco >= 10){
			troco -= 10;
			n10++;
		
		}else if (troco >= 5){
			troco -= 5;
			n5++;
			
		} else if (troco >= 2){
			troco -= 2;
			n2++;
			
		} else if (troco >= 1){
			troco -= 1;
			n1++;
		} 		
	}
	
	printf ("\n O total de troco para o valor R$ %d foi composto das seguintes notas: \n %d de R$ 50 \n %d de R$ 20 \n %d de R$ 10 \n %d de R$ 5 \n %d de R$ 2  \n %d de R$ 1 ", totaltroco, n50, n20, n10, n5, n2, n1);
	
	system ("pause");
	return 0;	
}
