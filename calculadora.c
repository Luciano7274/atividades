#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
void main(){
setlocale(LC_ALL, "portuguese");

	int n1, n2, n3;
	int resultado;

	printf("digite uma operação\n");
	scanf("%d",&n3);

	if(n3==1){
	printf("digite o primeiro numero\n");
	scanf("%d",&n1);
	printf("digite o segundo numero\n");
	scanf("%d",&n2);
	resultado = n1+n2;
	printf("\n\nResultado da soma de %d + %d:%d\n",n1,n2,resultado);
	}

	if(n3==2){
	printf("digite o primeiro numero\n");
	scanf("%d",&n1);
	printf("digite o segundo numero\n");
	scanf("%d",&n2);
	resultado = n1-n2;
	printf("\n\nResultado da subtração de %d - %d:%d\n",n1,n2,resultado);
	}

	if(n3==3){
	printf("digite o primeiro numero\n");
	scanf("%d",&n1);
	printf("digite o segundo numero\n");
	scanf("%d",&n2);
	resultado = n1*n2;
	printf("\n\nResultado da multiplicação de %d * %d:%d\n",n1,n2,resultado);
	}

	if(n3==4){
	printf("digite o primeiro numero\n");
	scanf("%d",&n1);
	printf("digite o segundo numero\n");
	scanf("%d",n2);
	resultado = n1/n2;
	printf("\n\nResultado da divisão de %d / %d:%d\n",n1,n2,resultado);
	}else{
	printf("voce e um boboca");
	}
}
