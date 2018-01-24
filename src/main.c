#include <stdio.h>
 
 void dialogo();

 int main() { 
	int x;
	printf("Olá Mundo!\n\n");
	
	printf("Digite 1 para iniciar um diálogo com Bi72, ou 0 pra finalizar!\n");
	scanf("%d", &x);
	
	while ((x != 1) && (x != 0)) {
		printf("Desculpe, comando não reconhecido, tente novamente :( \n");
		scanf("%d", &x);
    }
	switch(x){
		case 1:
			dialogo();
			break;
		case 0:
			return 0;
	}
 }
 
 void dialogo(){
	int opcao;
	printf("Inicie um diálogo com Bi72, de acordo com as opções abaixo\n");
	printf("1 - Olá Bi72, como vai?\n2 - Bi72, conte-me alguma novidade!\n3 - Bi72, quem são seus criadores?\n4 - Não quero conversar, foi apenas um teste!\n\n");
	scanf("%d", &opcao);
	switch(opcao){
		case 1:
		printf("Bi72: Estou bem, e você como está?\n");
		break;
		
		case 2:
		printf("Bi72: Bom, está chovendo, pra variar...\n");
		break;
		
		case 3:
		printf("Bi72: Meus criadores são:\n- Jeferson Lins; \n- Duayne Santos;\n- Mauricio Specht e\n- Gustavo S. de Lima.\n:)\n");
		break;
		
		case 4:
		printf("Bi72: Não desperdice meu tempo, humano!\n\n");
		break;
	}
 }
