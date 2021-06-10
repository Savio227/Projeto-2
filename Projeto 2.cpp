/* Nome:Sávio Fernandes Viiera
   Matrícula:UC21106911
   Curso:Engenharia de Software */
/*Ta muito básico esse projeto, professora*/
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<ctype.h>
#include<strings.h>
#include<math.h>
#include<conio.h>//biblioteca de cores

int main(){
setlocale(LC_ALL, "Portuguese_Brazil");	
char destino[40];
int quantAcentos, quantPassadulto/*quantidade de passagens para adultos*/,  menu[4]/*um vetor para cada vez que o menu for utilizado*/, quantPasscria, i, numrRes/*número de reserva*/, j, quantPasstotal;
float passagem;
printf("\n----------------------------------------------------\n");	
printf("	Bem Vindo à Salimar linhas Aéreas!");	
printf("\n----------------------------------------------------");	
printf("\nOBS:Cada passagem custa 600R$, e há um desconto de 50%% caso o passageiro tenha até 5 anos."); 


do{
	printf("\n");
	printf("\nPara efetuar a reserva por favor, informe o destino para ao qual deseja ir:");	
	fgets(destino, 40, stdin);	
	fflush(stdin);	
	if(strlen(destino)<=2)
	printf("\nDestino inválido! Digite novamente.");
		}
	while(strlen(destino)<=2);
do{
	printf("\nInforme a quantidade de acentos no avião que irá pegar(podem existir de 90 a 200 acentos dependendo do avião ):");
	scanf("%i", &quantAcentos);	
	if(quantAcentos<90 || quantAcentos>200)	
		printf("\nQuantidade de acentos inválida!");
		}
	while(quantAcentos<90 || quantAcentos>200);

printf("\nMENU");
printf("\n[1] -> Realizar reserva .");
printf("\n[2] -> Confirmar reserva.");
printf("\n[3] -> Relatório.");
printf("\n[4] -> Cancelar reserva.\n");
scanf("%i", &menu[1]);
printf("\n");

switch(menu[1])
case 1:		
	  printf("\nHá 10 acentos disponíveis.\n");
	  printf("\nInforme quantos adultos irão viajar:");
	  scanf("%i", &quantPassadulto);
	  printf("\nInforme quantas crianças irão viajar(OBS:Se a criançar possuir mais de 5 anos, digite 0):");
	  scanf("%i", &quantPasscria);
		 system("cls"); 
		  for(i=0; i<5; i++){//5, pra dar 10 lugares certinho e ficar como se estivesse dos dois lados do avião //essefor mostra o número de poltronas disponíveis na tela
			system("color 02");//definiçaõ da cor verde
			printf("D  \tD");    	
		  	printf("\n");
		  	}  
			system("pause");
			system("cls");
			system("color 07");
			printf("\nPara realizar a reserva destes acentos, digite qualquer tecla.\n");
		  	system("pause");
		  	printf("\nAcentos Reservados:");
		  	system("cls");
			for(i=0; i<5; i++){//mostra o número de poltronas reservadas na tela
			system("color 04");//defenição da cor vermelha
			printf("\nR  \tR");
			printf("\n");
			}
			system("pause");
			system("cls");
			system("color 07");
			printf("\n Os números de reserva são:");
			quantPasstotal=quantPasscria + quantPassadulto;
			for(j=0; j<quantPasstotal; j++){
			printf("\n%i", j);
			}
			
			printf("\nPara realizar a confirmação da compra, retorne ao menu apertando qualquer tecla.\n");
system("pause");
system("cls");

printf("\nMENU");
printf("\n[1] -> Realizar reserva .");
printf("\n[2] -> Confirmar reserva.");
printf("\n[3] -> Relatório.");
printf("\n[4] -> Cancelar reserva.\n");
scanf("%i", &menu[2]);
printf("\n");
system("cls");
switch(menu[2])
case 2:
	  printf("Reserva confirmada!");	 
	  for(i=0; i<5; i++){//mostra o número de poltronas que foram confiarmadas as compras
	  	system("color 01");//definição da cor azul
		printf("\nC \tC");	
		printf("\n");	
			}		
	  system("pause");
	  system("cls");
	  system("color 07");
	  	printf("\n Os números de reserva são:");
		quantPasstotal=quantPasscria + quantPassadulto;
		for(j=0; j<quantPasstotal; j++){
			printf("\n%i", j);
			}
	  printf("\nCaso queira o relatório, ou cancelar as passagens digite qualquer tecla.\n");
system("pause");
system("cls");

printf("\nMENU");
printf("\n[1] -> Realizar reserva .");
printf("\n[2] -> Confirmar reserva.");
printf("\n[3] -> Relatório.");
printf("\n[4] -> Cancelar reserva.\n");
scanf("%i", &menu[3]);
fflush(stdin);
printf("\n");
switch(menu[3])
case 3: 
	  printf("Há %i acentos confirmados, %i acentos reservados e %i disponíveis", quantPasscria + quantPassadulto, quantPasscria + quantPassadulto, 10-(quantPasscria + quantPassadulto) );	
	  passagem=(quantPasscria/2 * 600) + (quantPassadulto * 600);
	  printf("\nO preço das passagens será %.2fR$.", passagem);	
	  printf("\nCaso deseje cancelar as passagens, retorne ao menu apertando qualquer tecla.\n");
system("pause");
system("cls");
printf("\nMENU");
printf("\n[1] -> Realizar reserva .");
printf("\n[2] -> Confirmar reserva.");
printf("\n[3] -> Relatório.");
printf("\n[4] -> Cancelar reserva.\n");
scanf("%i", &menu[4]);
fflush(stdin);
printf("\n");	  	
switch(menu[4])
case 4:
	  printf("\nAs seguintes reservas foram canceladas:\n");
	   	for(j=0; j<quantPasstotal; j++){
			printf("\n%i", j);
			}
	  
return 0;
}
