#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	//Declaração de variavel
	int cont = 1;

	while (cont <= 5) {
		printf("%d\n", cont);
	
		//cont = cont + 1
		//cont += 2 = cont + 2
		cont++;
}
return 0;
}
