#include <stdio.h>
#include <stdlib.h>


#define TAM 100

int *criaPilha(){
    int *pilha;
    pilha = (int*) malloc(sizeof(int)*TAM);
    return pilha;
}

void insereElemento(int *pilha, int valor, int *topo){
    if (*topo < TAM) {
        *topo = *topo + 1;
        pilha[*topo] = valor;
        
    }
    else{
        printf("A pilha nao suporta mais elemento, coloque mais espaco\n");
    }
}

void mostrarPilhaTopo(int *pilha, int topo){
	int i;
    if (topo == -1) {
        printf("Pilha vazia; \n");
        exit(0);
    }
    printf("Topo da pilha: %d\n", pilha[topo]);
}

int removeElemento(int *pilha, int *topo){
    if (*topo == -1) {
        printf("Pilha vazia \n");
        return -1;
    }
    else{
        *topo = *topo - 1;//decrementando
        return *topo+1;
    }
}


int main(){
    
    int *pilha, topo = -1, aux, elemento;
    
    pilha = criaPilha();
    
    do {
    	printf ("Digite elemento para pilha: ");
    	scanf ("%d", &elemento);
    	if (elemento<0){
    		mostrarPilhaTopo (pilha, topo);
		}
		insereElemento (pilha, elemento, &topo);
		if (elemento ==-1){
			printf ("Foi digitado -1. Condicao nao permitida: \n Saindo do programa . . .");
			break;
		}
	}while(elemento>0);

    return 0;
    
}
