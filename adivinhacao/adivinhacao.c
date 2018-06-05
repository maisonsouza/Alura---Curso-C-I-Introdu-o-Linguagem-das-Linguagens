//Maison Galvão - 05/06/2018
#include <stdio.h>

int main() {
  //Imprime o cabeçalho do jogo
  printf("\n********************************************************\n");
  printf("\n   *     Bem vindo ao nosso jogo de adivinhacao     *   \n");
  printf("\n********************************************************\n");
  int numerosecreto = 42;
  int chute;
  printf("Qual é o seu chute ");
  scanf("%d",&chute);
  printf("\nSeu chute foi = %d\n",chute);
  printf("%d %d",numerosecreto,chute);
  return 0;
}
