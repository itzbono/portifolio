#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	//Declara��o de variavel
	int cont = 1;
		do {
		printf("%d\n", cont);
	
		//cont = cont + 1
		//cont += 2 = cont + 2
		cont++;
} while (cont <= 5);
	
return 0;
}
