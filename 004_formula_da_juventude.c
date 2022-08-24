#include <stdio.h>

int main(){
	float peso, altura, idade, ano, dia;
	
	scanf("%f %f %f %f %f", &peso, &altura, &idade, &ano, &dia);
	
	printf("%f", (((peso + altura)/idade) + ano) * dia);
}
