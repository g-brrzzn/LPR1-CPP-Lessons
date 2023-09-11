#include <iostream>
using namespace std;

void VerificarCodigo(int codigo[10]) {
    bool aprovacao[3] = {true, true, true};
    // Regra 1
    int total = 0;
    for(int i=0; i<=9; i++) total += codigo[i];
    if ((total % 2) == 0)   aprovacao[0] = false;
    // Regra 2
    int primeiros_digitos = codigo[0] + codigo[1] + codigo[2] + codigo[3];
    int ultimos_digitos   = codigo[8] + codigo[9];
    if (!(primeiros_digitos <= ultimos_digitos)) aprovacao[1] = false;
    // Regra 3
    total = 0;
    for(int i=1; i<=9; i+=2) total += codigo[i];
    if (!(total % 2) == 0)   aprovacao[2] = false;

    // Resultado
    if (aprovacao[0] == 0) cout << "Reprovado na Regra 1." << endl;
    if (aprovacao[1] == 0) cout << "Reprovado na Regra 2." << endl;
    if (aprovacao[2] == 0) cout << "Reprovado na Regra 3." << endl;
    if (aprovacao[0] == 1 && aprovacao[1] == 1 && aprovacao[2] == 1) cout << "O codigo foi aprovado!" << endl;

}
void imprimir_molde(char molde[6][6], int altura, int largura) {
    for(int i=0; i<=altura-1; i++) {
        for(int j=0; j<=largura-1; j++) {
            cout << molde[j][i] << " ";
        } cout << endl;
    }
}
void criar_molde(char molde[6][6], int altura, int largura, char c) {
    for(int i=0; i<=altura-1; i++) {
        for(int j=0; j<=largura-1; j++) molde[j][i] = ' ';
    }
    for(int i=0; i<=altura-1; i++) {
        if ((i % 2) == 0) for(int j=1; j<=largura-1; j+=2) molde[i][j] = c;
        else              for(int j=0; j<=largura-1; j+=2) molde[i][j] = c;
        
        
    }
    imprimir_molde(molde, 6, 6);
}

void alternar_estampa(char molde[6][6], int altura, int largura, char c) {
    for(int i=0; i<=altura-1; i++) {
        for(int j=0; j<=largura-1; j++) {
            if (molde[j][i] == c)   molde[j][i] = ' ';
            else                    molde[j][i] = c;
        }
    }
    cout << endl;
    imprimir_molde(molde, 6, 6);
}


int minimo(int n, int v[]) {
    if (!n < 1) {
        int elem = v[n];
        int op = minimo(n-1, v);
        if (op < elem) elem = op;
        else return elem;
    }    
}


main() { 
    /*
    int cod1[10] = {3, 6, 4, 1, 5, 2, 0, 4, 5, 9};
    int cod2[10] = {3, 6, 4, 1, 5, 2, 4, 0, 5, 9};
    int cod3[10] = {3, 6, 4, 1, 5, 2, 4, 1, 5, 9};
    VerificarCodigo(cod1);
    VerificarCodigo(cod2);
    VerificarCodigo(cod3);

    char molde[6][6];
    char c = '#';
    criar_molde(molde, 6, 6, c);
    alternar_estampa(molde, 6, 6, c);

    int v[5] = {100, 85, 8, 12, 102};
    int r =  minimo(5, v);
    cout << "minimo: " << r << endl;

    */


    
}