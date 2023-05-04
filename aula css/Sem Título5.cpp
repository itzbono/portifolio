#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	for (int cont = 1; cont <= 5; cont ++){
	
		printf("%d\n", cont);
}
return 0;
}
