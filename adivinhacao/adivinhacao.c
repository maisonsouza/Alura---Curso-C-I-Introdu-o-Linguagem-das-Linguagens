//Maison GalvÃ£o - 05/06/2018
#include <stdio.h>
#include <time.h>

int main() {
	srand(time(NULL));
  //Imprime o cabeÃ§alho do jogo
  printf("\n********************************************************\n");
  printf("\n   *     Bem vindo ao nosso jogo de adivinhacao     *   \n");
  printf("\n********************************************************\n");
  int numerosecreto = rand()%1000;
  int chute,tentativas=0,numerodetentativas,nivel;
  double pontos=1000,pontosperdidos;
  int acertou = chute==numerosecreto;
   printf("\n********************************************************\n");
  printf("\n   *     Escolha o nível do jogo    *   \n");
  printf("\n   *     1- Fácil 2 - Médio 3 - Difícil   *   \n");
  printf("\n********************************************************\n");
  scanf("%d",&nivel);
  switch(nivel){
  	case 1:
  		numerodetentativas=20;
  		break;
  	case 2:
  		numerodetentativas=14;
  		break;
    case 3:
    	numerodetentativas=7;
    	break;
  }
 for(tentativas=1;tentativas<=numerodetentativas;tentativas++){
 	printf("********************************************************\n");
  	printf("\nTentativa %d - \n",tentativas);
  	printf("\nQual e o seu chute \n");
    scanf("%d",&chute);
    if(chute<0){
    	tentativas--;
    	printf("\nO numero nao pode ser negativo\n");
	}
    else if(chute==numerosecreto){
      printf("\nVoce acertou !! Parabens ");
      printf("\nVoce e um bom jogador \n");
      printf("\nVoce acertou na %dï¿½ tentativa \n",tentativas);
      pontos = pontos - pontosperdidos;
      printf("Pontos = %.1f",pontos);
      break;
    }else if(chute>numerosecreto){
      pontosperdidos = (chute-numerosecreto)/2.0;
      printf("\nVoce errou!! O numero e menor \n");
    }else{
      pontosperdidos = (numerosecreto-chute)/2.0;
      printf("\nVoce errou!! O numero e maior \n");
    }
    
    printf("********************************************************\n");
  }
  printf("Fim de jogo !!\n");
  printf("O número SECRETO era = %d",numerosecreto);
  return 0;
}
