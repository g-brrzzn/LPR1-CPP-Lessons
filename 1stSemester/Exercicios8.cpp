/*
1. Faça um programa que leia dez números da parte do usuário. Verifique quantos desses
números são maiores que 10 e menores que 20 (ou seja, que estejam no intervalo entre 10 e
20).
2. Faça um programa que leia números inteiros da parte do usuário. Enquanto o número for
menor que 20, prosseguir solicitando números ao usuário.
3. Faça um programa que leia cinco caracteres e armazene em um vetor. Ao final, exiba os
caracteres que foram armazenados.
4. Crie um menu de opções, usando o comando switch, que permita ao usuário escolher uma
dentre cinco opções. Exiba na saída qual foi a opção escolhida pelo usuário.
5. Crie um sistema que leia dois números do tipo int. Em seguida, criar um menu de opções
de uma calculadora, usando o comando switch, e fazendo as seguintes operações:
1 – Soma;
2 – Subtração;
3 – Multiplicação;
4 – Divisão.
Após o usuário escolher a opção, realizar a operação correspondente e exibir na saída o
resultado.
6. Crie um sistema, de livre escolha, que utilize pelo menos:
• Um laço de repetição;
• If-else ou switch
• Vetor
*/

#include <iostream>
using namespace std;

void exercicio1(){
    int entre10e20=0, num;
    for(int i=1; i<=5;i++){
        cout << "Digite o numero " << i << ": "; cin >> num;
        if (num > 10 && num < 20) entre10e20++;
    }
    cout << entre10e20 << " numeros digitados estao entre 10 e 20" << endl;
}

void exercicio2(){
    int num;
    cout << "Digite um numero: "; cin >> num;
    while(num !=20){
        cout << "Digite outro numero: "; cin >> num;
    }
    cout << "Numero 20 digitado! Saindo do loop." << endl;
}

void exercicio3(){
    int num[5];
    for(int i=0;i<=4;i++){
        cout << "Digite o numero " << i+1 << ": "; cin >> num[i];
    }
    cout << "\tOs numeros digitados foram:" << endl;
    for(int i=0;i<=4;i++) cout << "\t" << num[i];
}

void exercicio4(){
    int escolha=0;
    while (escolha < 1 || escolha > 5){
        cout << "\tMenu" << endl;
        for (int i=1; i<=5; i++) cout << i << ". Opcao" << endl;
        cout << "Opcao escolhida: "; cin >> escolha;
        switch (escolha)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        
        default:
            break;
        }
    }
    cout << "Voce escolheu a opcao " << escolha << "!" << endl;
}

void exercicio5(){
    int escolha=0, n1, n2;
    while (escolha < 1 || escolha > 4){
        cout << "\tCalculadora" << endl;
        cout << "Digite o n1: "; cin >> n1;
        cout << "Digite o n2: "; cin >> n2;
        cout << "1. Somar\n2. Subtrair\n3. Multiplicar\n4. Dividir" << endl;
        cout << "Operacao desejada: "; cin >> escolha;
        switch (escolha)
        {
        case 1:
            n1 += n2;
            break;
        case 2:
            n1 -= n2;
            break;
        case 3:
            n1 *= n2;
            break;
        case 4:
            n1 /= n2;
            break;
        default:
            break;
        }
    }
    cout << "\nResultado: " << n1 << endl;
}

void exercicio6(){
    int escolha=0, qnt=0, resultado=0;

    cout << "Quantos numeros tera sua lista de numeros inteiros? "; cin >> qnt;
    int n[qnt];

    while (escolha < 1 || escolha > 4){
        cout << "\tCalculadora de lista" << endl;
        for (int i=0; i<=qnt-1; i++) {
            cout << "Digite o numero " << i+1 << " da lista: "; cin >> n[i];
        }
        cout << "1. Somar\n2. Subtrair\n3. Multiplicar\n4. Dividir" << endl;
        cout << "Operacao desejada: "; cin >> escolha;
        switch (escolha)
        {
        case 1:
            resultado = n[0];
            for (int i=0; i<=qnt-2; i++) resultado += n[i+1];
            break;
        case 2:
            resultado = n[0];
            for (int i=0; i<=qnt-2; i++) resultado -= n[i+1];
            break;
        case 3:
            resultado = n[0];
            for (int i=0; i<=qnt-2; i++) resultado *= n[i+1];
            break;
        case 4:
            resultado = n[0];
            for (int i=0; i<=qnt-2; i++) resultado /= n[i+1];
            break;
        default:
            break;
        }
    }
    cout << "\nResultado: " << resultado << endl;
}


main() {
    
    exercicio1();
    exercicio2();
    exercicio3();
    exercicio4();
    exercicio5();
    exercicio6();
   
   
   
    
}
