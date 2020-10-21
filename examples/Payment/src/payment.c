/*entradas:
flot
0,01 a 99.999,00 
string
status: regular, estudante, aposentado, vip

saida:
0 - sucesso
1 - erro
2 - status incorreto

int payment(float value, char status[20]); */
#include <stdio.h>
#include <string.h>
#include <payment.h>

int payment(float value, char* status){
	int exit;
	printf("%f --- %s",value,status);
	if(value<0.01 || value> 99999.00){
		exit = 1;	//error
	}
	else if(strcmp(status,"regular")!=0 && strcmp(status,"estudante")!=0 && strcmp(status,"aposentado")!=0 && strcmp(status,"vip")!=0){
		exit = 2;	//status incomplete
	}
	else{
		exit = 0;	//success
	}
	return exit;		
}
