#include <stdio.h>
#include <locale.h>
#include <iostream>

/*
	%d - int
	%f - float 
	%c - char
	%s - string
int main(){
	//Declaração da variavel
	float a1, a2, media, af, maior;
	
	//Professor precisa digitar nota entre 0 e 5
	do{
		printf("Digite A1:");
		scanf("%f", &a1);
} while(a1 < 0 || a1 > 5);

	do{
		printf("Digite A2:");
		scanf("%f", &a2);
} while(a2 < 0 || a2 > 5 );
	
	
	//Calculo da media é a1 + a2
	media = a1 + a2;
		printf("Valor da Media: %0.2f", media);
	
	//Verifica se o aluno foi aprovado ou não	
	if (media >= 6){
		printf("\nAprovado");
	}else {
		printf("\nAluno em AF");
		
		do{
		printf("\nDigite AF:");
		scanf("%f", &af);
	} while(af < 0 || af > 5);
	
	maior = a1;
	
	if (a1 <= a2){
		maior = a2;
	}
	media = maior + af;
	if (media >= 6) {
		printf("\nAluno aprovado com media: %0.2f", media);
	 } else {
	 	printf("\nAluno reprovado com media: %0.2f", media);
	}
}

	return 0;
}
