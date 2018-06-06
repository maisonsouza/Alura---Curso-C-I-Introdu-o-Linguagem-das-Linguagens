#include <stdio.h>

int main(){
  int total,tabuada,i;
 scanf("%d",&tabuada);
  for(i=1;i<=10;i++){
  	printf("%d * %d = ",tabuada,i);
  	total = tabuada * i;
  	printf("%d \n",total);
  }
  
	return 0;
}
