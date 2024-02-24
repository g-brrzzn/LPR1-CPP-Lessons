#include <iostream>
using namespace std;

#define MAX 5

typedef struct _pilha{
    int vet[MAX];
    int final;
} Pilha;

Pilha p;

void inicializar();
int isFull();
int isEmpty();
void push(int num);
int pop();

void inicializar() {
    p.final = -1;
}

int isFull() {
    return (p.final == MAX - 1);
}

int isEmpty() {
    return (p.final == -1);
}

void push(int num) {
    if (!isFull()) p.vet[++p.final] = num;
    else cout << "A pilha esta cheia" << endl;
}

int pop() {
    if(!isEmpty()) {
        int aux = p.vet[p.final];
        p.final--;
        return aux;
    } else cout << "A pilha esta vazia" << endl;
}

void printPilha() {
    for (int i = 0; i <= p.final; i++) cout << p.vet[i] << " ";
    cout << endl;
}

main() {
    inicializar();
    for (int i = 0; i <= MAX - 1; i++) push(i);
    printPilha();
    cout << "FIM DO PRINT 1" << endl;
    for (int i = 0; i < 2; i++) pop();
    printPilha();
    cout << "FIM DO PRINT 2" << endl;

    return 0;
}