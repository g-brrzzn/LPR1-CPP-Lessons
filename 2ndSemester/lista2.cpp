#include <iostream>
using namespace std;

#define MAX 5

typedef struct _lista{
    int vet[MAX];
    int final;
} Lista;

Lista l;

void inicializar();
int isFull();
int isEmpty();
void push(int pos, int num);
int pop(int pos);

void inicializar() {
    l.final = -1;
}

int isFull() {
    return (l.final == MAX - 1);
}

int isEmpty() {
    return (l.final == -1);
}

void push(int pos, int num) {
    if (!isFull()) {
        if (pos >= 0 && pos <=l.final+1) {
            l.final++;
            for (int i=l.final; i >= pos; i--) l.vet[i] = l.vet[i-1];
            l.vet[pos] = num;
        } cout << "Posicao invalida" << endl;
    } else cout << "A lista esta cheia" << endl;
}

int pop(int pos) {
    if(!isEmpty()) {
        if(pos >= 0 && pos <=l.final) {
            int aux = l.vet[pos];
            for (int i=pos; i < l.final; i++) l.vet[i] = l.vet[i + 1];
            l.final--;
            return aux;
        } cout << "Posicao invalida" << endl;
    } else cout << "A pilha esta vazia" << endl;
}

void printLista() {
    for (int i = 0; i <= l.final; i++) cout << l.vet[i] << " ";
    cout << endl;
}

main() {
    inicializar();
    push(0, 4);
    push(0, 5);
    push(1, 8);
    printLista();
    cout << "FIM DO PRINT 1" << endl;
    pop(1);
    printLista();
    cout << "FIM DO PRINT 2" << endl;


    return 0;
}