#include <stdio.h>
#include <stdlib.h>


void main(){

		//Variaveis
	int n,a,numeros[7];



	//Pegar o Numero do Usuario//
	
	for(n=0;n<7;n++){
	
		printf("Digite um Numero para Vetor %d\n=>", n);
		scanf("%d", &numeros[n]);
		printf("O Numero foi Salvo com Sucesso no Vetor %d \n\n", n);
	}
	system("clear");

	printf("\t \t============================NUMEROS ANTES DE SER ORDENADOS======================================\n");


	//IMPRIMIR O NUMERO ANTES DE ORDENA-LOS\\
	
	for(n=0;n<7;n++){
		printf("Vetor %d:%d\n", n, numeros[n]);
	}





	printf("\t \t ================================================NUMEROS APOS SER ORDENADOS========================\n");

	//ORDENA-LOS\\
	
	for(n=0;n<7;n++){
		//Comparar Entre os Vetores//

		for(a = n + 1; a < 7; a++){
			if(numeros[n] > numeros [a]){       // Comparar o Vetor N(0) Vetor A (1);
			int guardarOsValores;
			guardarOsValores = numeros[n]; //Guardar o Valor Antigo antes de Atribuir um Novo
			numeros[n] = numeros[a]; // Atribuir o Valor Novo
			numeros[a] = guardarOsValores; // Atribuir Valor Novo no Indice [A]
}
}

	printf("Vetor %d:%d\n", n, numeros[n]);

}
}

