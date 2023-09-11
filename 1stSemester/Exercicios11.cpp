/*
1. Faça um programa que leia dois números inteiros da parte do usuário. Em seguida, crie
uma função que calcule a soma desses números e exiba este valor de soma na saída.
2. Faça um programa que leia cinco números inteiros da parte do usuário. Em seguida, crie
uma função que calcule a média desses números e exiba este valor de média na saída.
3. Faça um programa que leia três nomes de usuário e os armazene em um vetor. Em
seguida, criar uma função que exiba o conteúdo desse vetor na saída.
4. Faça um programa simule uma calculadora, contendo quatro funções: adicao(), subtracao(),
multiplicacao() e divisao(). Cada função deverá receber dois parâmetros inteiros. Em seguida,
ler dois valores do teclado, bem como o número de operação a ser realizada, sendo: 1-adicao;
2-subtracao; 3-multiplicacao e 4-divisao. Por fim, chame a operação adequada e exiba ao final
o resultado dessa operação na saída.
5. Faça um programa que declare uma função para realizar a leitura do nome de um usuário.
Em seguida, crie uma segunda função para a escrita de uma mensagem a este usuário
*/

#include <iostream>
using namespace std;

int soma(int n1, int n2){
    return n1 + n2;
}
float media(int notas[5]){
    int soma=0;
    for (int i=0; i<=4; i++) soma += notas[i];
    return soma/5;
}
void imprimirNomes(char nomes[3][50]){
    cout << "\tLista de nomes" << endl;
    for (int i=0; i<=2; i++) cout << "Nome " << i+1 << " : " << nomes[i] << endl;    
}
float nsoma(float n1, float n2){
    return n1 + n2;
}
float sub(float n1, float n2){
    return n1 - n2;
}
float mult(float n1, float n2){
    return n1 * n2;
}
float div(float n1, float n2){
    return n1 / n2;
}
char getStr(){
    char str;
    cout << "Digite sua string: "; cin >> str;
    return str;
}
void printStr(char str){
    cout << "Sua string: " << str << endl;
}




void atividade1(){
    int n1, n2;
    cout << "Digite o primeiro numero: "; cin >> n1;
    cout << "Digite o segundo numero: "; cin >> n2;
    cout << "A soma de " << n1 << " + " << n2 << " = " << soma(n1, n2) << endl;
}

void atividade2(){


    int notas[5];
    for (int i=0; i<=4; i++) {
        cout << "Digite a nota " << i+1 << ": "; cin >> notas[i];
    }

    cout << "A media de suas notas: " << media(notas) << endl;
}

void atividade3(){


    char nomes[3][50];
    for (int i=0; i<=2; i++) {
        cout << "Digite o nome nome " << i+1 << " : "; cin >> nomes[i];
    }
    cout << "\tNomes armazenados!" << endl;
    imprimirNomes(nomes);
    
}
void atividade4(){

    int escolha=0;
    float n1, n2;

    while (escolha < 1 || escolha > 4){
        cout << "\tCalculadora" << endl;
        cout << "Digite o n1: "; cin >> n1;
        cout << "Digite o n2: "; cin >> n2;
        cout << "1. Somar\n2. Subtrair\n3. Multiplicar\n4. Dividir" << endl;
        cout << "Operacao desejada: "; cin >> escolha;
        switch (escolha)
        {
        case 1:
            n1 = nsoma(n1, n2);
            break;
        case 2:
            n1 = sub(n1, n2);
            break;
        case 3:
            n1 = mult(n1, n2);
            break;
        case 4:
            n1 = div(n1, n2);
            break;
        default:
            break;
        }
    }
    cout << "\nResultado: " << n1 << endl;
}

void atividade5(){


    char str = getStr();
    printStr(str);


}



main(){
    /*
    atividade1();
    atividade2();
    atividade3();
    atividade4();
    */
  
   atividade5();


}
