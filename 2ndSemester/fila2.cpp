#include <iostream>
using namespace std;

#define MAX 5

typedef struct _fila{
    int vet[MAX];
    int final;
} Fila;

Fila f;

void inicializar();
int isFull();
int isEmpty();
void push(int num);
int pop();

void inicializar() {
    f.final = -1;
}

int isFull() {
    return (f.final == MAX - 1);
}

int isEmpty() {
    return (f.final == -1);
}

void push(int num) {
    if (!isFull()) f.vet[++f.final] = num;
    else cout << "A fila esta cheia" << endl;
}

int pop() {
    if(!isEmpty()) {
        int aux = f.vet[0];
        for (int i=0; i < f.final; i++) f.vet[i] = f.vet[i + 1];
        f.final--;
        return aux;
    } else cout << "A pilha esta vazia" << endl;
}

void printFila() {
    for (int i = 0; i <= f.final; i++) cout << f.vet[i] << " ";
    cout << endl;
}

main() {
    inicializar();
    for (int i = 0; i <= MAX - 1; i++) push(i);
    printFila();
    cout << "FIM DO PRINT 1" << endl;
    for (int i = 0; i < 2; i++) pop();
    printFila();
    cout << "FIM DO PRINT 2" << endl;

    return 0;
}