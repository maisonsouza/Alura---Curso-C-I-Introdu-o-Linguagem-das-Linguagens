#include <stdio.h>

int main(){
  int operacao,n1,n2;
  double total=0;
  printf("Digite a operacao ");
  scanf("%d",&operacao);
  printf("Digite os numeros ");
  scanf("%d %d",&n1,&n2);
  if(operacao==1){
    total = n1 + n2;
    printf("\nTotal = %.1f",total);
  }else if(operacao==2){
    total = n1 - n2;
    printf("\nTotal = %.1f",total);
  }else if(operacao==3){
    total = n1/(double)n2;
    printf("\nTotal = %.1f",total);
  }else{
    total = n1*n2;
    printf("\nTotal = %.1f",total);
  }
  
	return 0;
}
