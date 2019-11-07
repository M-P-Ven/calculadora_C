#include <stdlib.h>
#include <stdio.h>

int main(void){
	int v1, v2, r;
	char m;
    printf("valor 1: \n");
    scanf("%d", &v1);
    printf("qual sera a operacao:\n");
    scanf("%s", &m);
	printf("valor 2: \n");
    scanf("%d", &v2);
    switch(m){
    	case '+':
    		r = (v1 + v2);
    		printf("resposta soma: %d", r);
    		break;
    	case '-':
    		r = (v1-v2);
    		printf("resposta sub: %d", r);
    		break;
    	case '*':
    		r = (v1*v2);
    		printf("resposta mul: %d", r);
    		break;
    	case '/':
    		r = (v1/v2);
    		printf("resposta div: %d", r);
    		break;
    	default:
    		printf("opcao invalida");
    		break;
	}
	   
    return 0;
}

