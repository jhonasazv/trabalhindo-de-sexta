#include <stdio.h>
void carroEstrutura();
int main(){
	int opcao;
		printf("-----Boa Tarde-----\n");
	printf("\n[1]Carro\n");
	printf("\n[2]Moto\n");
	printf("\n[3]Caminhao\n");
	printf("\n Qual tipo de veiculo gostaria de registrar: ");
	scanf("%d", &opcao);
	switch(opcao){
		case 1:
            carroEstrutura();
			break;	
		case 2:
		
			break;		
		case 3:
			
		break;				
	}
	
return 0;}
void carroEstrutura(){
	int i;
	struct carro {
		char marca[30];
		char modelo[30];
		int codigoDeVeiculo;
		int anoDeFabricacao;
	};
for(i = 1; i < 11; i++){
struct carro carro1;
printf("Marca do veiculo: ");
scanf("%s", &carro1.marca);


printf("Modelo do veiculo: ");
scanf("%s", &carro1.modelo);

printf("codigo do veiculo: ");
scanf("%d", &carro1.codigoDeVeiculo);
 
 int opcaoCarro;
 printf("[1] proximo carro");
 printf("[2] gerar relatorio");
 switch(opcaoCarro){
 case 1:
 	i = 1;
 	break;
 case 2:
 	i++;
 	struct carro carro[i];
 	break;
	}
}


FILE *eita;
    eita = fopen("C:/users/joaomarcelo.santos/Desktop/texto do trabas/eita.txt", "w");
	
	fprintf(eita, "marca do veiculo = %s modelo do veiculo = %s codigo do veiculo = %d", carro1.marca, carro1.modelo, carro1.codigoDeVeiculo);
	
    fclose(eita);
//printf("marca = %s modelo = %s codigo = %d", carro1.marca, carro1.modelo, carro1.codigoDeVeiculo);
	}