//Maison Galvão - 05/06/2018
#include <stdio.h>

int main() {
  //Imprime o cabeçalho do jogo
  printf("\n********************************************************\n");
  printf("\n   *     Bem vindo ao nosso jogo de adivinhacao     *   \n");
  printf("\n********************************************************\n");
  int numerosecreto = 42;
  int chute,tentativas;

  for(tentativas=1;tentativas<=3;tentativas++){
    printf("Qual e o seu chute ");
    scanf("%d",&chute);
    printf("\nSeu chute foi = %d\n",chute);
    if(chute==numerosecreto){
      printf("\nVoce acertou !! Parabens");
      printf("\nVoce e um bom jogador\n");
    }else if(chute>numerosecreto){
      printf("\nVoce errou!!\n O numero e menor\n");
    }else{
      printf("\nVoce errou!!\n O numero e maior\n");
    }
  }

  return 0;
}
