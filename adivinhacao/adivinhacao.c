//Maison Galvão - 05/06/2018
#include <stdio.h>
#include <time.h>

int main() {
  srand(time(NULL));
  int numerosecreto = rand()%1000;
  int chute,tentativas=0,numerodetentativas,nivel;
  double pontos=1000,pontosperdidos;
  int acertou = chute==numerosecreto;
  //Imprime o cabeçalho do jogo
  printf("\n********************************************************\n");
  printf("\n   *     Bem vindo ao nosso jogo de adivinhacao     *   \n");
  printf("\n********************************************************\n");
  printf("          P  /_\\  P                            \n");
  printf("         /_\\_|_|_/_\\                            \n");
  printf("     n_n | ||. .|| | n_n                          \n");
  printf("     |_|_|nnnn nnnn|_|_|                          \n");
  printf("    |" "  |  |_|  |"  " |                         \n");
  printf("    |_____| ' _ ' |_____|                         \n");
  printf("          \\__|_|__/                              \n");
  printf("\n\n");
  printf("\n********************************************************\n");
  printf("\n   *     Escolha o n�vel do jogo    *   \n");
  printf("\n   *     1- F�cil 2 - M�dio 3 - Dif�cil   *   \n");
  printf("\n********************************************************\n");
  scanf("%d",&nivel);
  switch(nivel){
  	case 1:
  		numerodetentativas=20;
  		break;
  	case 2:
  		numerodetentativas=14;
  		break;
    default:
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
		}else if(chute==numerosecreto){
	        printf("\nVoce acertou !! Parabens \n\n");
	        printf("             OOOOOOOOOOO               \n");
		    printf("         OOOOOOOOOOOOOOOOOOO           \n");
		    printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
		    printf("    OOOOOO      OOOOO      OOOOOO      \n");
		    printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
		    printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
		    printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
		    printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
		    printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
		    printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
		    printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
		    printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
		    printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
		    printf("         OOOOOO         OOOOOO         \n");
		    printf("             OOOOOOOOOOOO              \n");
		    printf("\n\n");
	      	printf("\nVoce e um bom jogador \n");
	     	printf("\nVoce acertou na %d� tentativa \n",tentativas);
	     	printf("Fim de jogo !!\n\n");
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
	   if(tentativas >= numerodetentativas && acertou==0){
	   	printf("Fim de jogo !!\n\n");
	   	printf("       \\|/ ____ \\|/    \n");
	    printf("        @~/ ,. \\~@      \n");
	    printf("       /_( \\__/ )_\\    \n");
	    printf("          \\__U_/        \n");
	    printf("\n\n\n");
	   }

    printf("********************************************************\n");
  }
    printf("O numero SECRETO era = %d",numerosecreto);

  return 0;
}
