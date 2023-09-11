#include <iostream>
#include <string.h>
using namespace std;

/*
1. Faça um programa que leia três palavras do teclado e imprime as três palavras na ordem
inversa.
2. Faça um programa que leia duas palavras do teclado e diga se elas são iguais ou
diferentes.
3. Faça um programa que leia cinco palavras do teclado e verifique se alguma delas é igual à
palavra “verde”.
4. Crie um pequeno cadastro de Clientes, que armazene os nomes e telefones de cinco
clientes. Dica: pode-se utilizar dois vetores bidimensionais para esta tarefa, de mesmo
tamanho.
5. Faça um programa que leia cinco números inteiros do teclado, e os armazene em um vetor.
Ao final, imprima os valores do vetor em ordem inversa.
6. Faça um programa que leia quatro valores inteiros do teclado e os armazene em uma
matriz 2x2.
7. Faça um programa que leia nove valores inteiros do teclado e os armazene em uma matriz
3x3.
Dica: Para os exercícios 6 e 7, utilize dois vetores “for” aninhados, como no exemplo a seguir.

*/

void atividade1(){
    char palavra[3][50];
    for (int i=0; i<=2; i++){
        cout << "Digite a palavra " << i+1 << ": "; cin >> palavra[i];
    }
    for(int i=2; i>=0; i--)
        cout << palavra[i] << endl;
}

void atividade2(){
    char palavra[1][50];
    cout << "Digite a palavra 1: "; cin >> palavra[0];
    cout << "Digite a palavra 2: "; cin >> palavra[1];

    if (strcmp(palavra[0], palavra[1]) == 0) 
        cout << "As palavras sao iguais!" << endl;
    else
        cout << "As palavras sao diferentes!" << endl;     
}
void atividade3(){
    char palavra[5][50];
    for (int i=0; i<=4;i++){
        cout << "Digite a palavra " << i+1 << ": "; cin >> palavra[i];
        if (strcmp(palavra[i], "verde") == 0 || strcmp(palavra[i], "Verde") == 0) 
        cout << "A palavra digitada foi \"verde\"" << endl;
        else
        cout << "A palavra digitada foi diferente de \"verde\"" << endl;
    }
         
}
void atividade4(){
    char nome[5][50];
    int num[5];
    for (int i=0; i<=4;i++){
        cout << "Digite o nome do cliente " << i+1 << ": "; cin >> nome[i];
        cout << "Digite o numero do cliente " << i+1 << ": "; cin >> num[i];
    }
    cout << "\tDados dos Clientes" << endl;
    for (int i=0; i<=4;i++)
        cout << "Cliente: " << nome[i] << " - Numero: " << num[i] << endl;
    
}

void atividade5(){
    int num[3];
    for (int i=0; i<=2; i++){
        cout << "Digite o numero " << i+1 << ": "; cin >> num[i];
    }
    for(int i=2; i>=0; i--)
        cout << num[i] << endl;
}

void atividade6(){
    int num[2][2];
    for (int i=0; i<=1; i++)
        for (int j=0; j<=1; j++){
            cout << "Digite o numero " << i+1 << " da lista " << j+1 << " "; cin >> num[i][j];
        }
    for (int i=0; i<=1; i++){
        for (int j=0; j<=1; j++)
            cout << num[i][j];
    cout << endl;
    }
}
void atividade7() {
    int num[3][3];
    for (int i=0; i<=2; i++)
        for (int j=0; j<=2; j++){
            cout << "Digite o numero " << i+1 << " da lista " << j+1 << " "; cin >> num[i][j];
        }
    for (int i=0; i<=2; i++){
        for (int j=0; j<=2; j++)
            cout << num[i][j];
    cout << endl;

    }
        

}


main(){
    atividade1();
    atividade2();
    atividade3();
    atividade4();
    atividade5();
    atividade6();
    atividade7();
}
