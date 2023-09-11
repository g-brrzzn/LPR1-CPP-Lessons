/*
1. Repetir 20 vezes um bloco de instruções. Dentro desse bloco, imprimir a mensagem “Esta é a repetição de número “
seguida do valor do contador.
2. Faça um programa que leia três palavras, e a cada leitura, imprima o seu valor na saída.
3. Faça um programa que leia cinco números e, ao final, exiba o valor da soma dos mesmos.
4. Apresentar na tela os números pares de 0 até 50.
5. Ler 10 números e apresentar quantos são pares e quantos são ímpares.
6. Solicitar ao usuário os valores inicial e final para gerar um processo de repetição. Dentro do processo, apresentar o valor
do contador que está dentro do laço.
7. Faça um programa que imprima os valores de 1 a 10.
8. Faça um programa que solicite ao usuário a entrada de um caractere. Enquanto o caractere entrado não for igual a “ z”,
exiba a mensagem: “Caractere digitado foi: “ seguido do caractere digitado pelo usuário.
9. Faça um programa que solicite ao usuário a entrada de um valor inteiro. Enquanto o valor entrado não for igual a 10, exiba
a mensagem: “Valor digitado foi: “ seguido do valor digitado pelo usuário.
10. Faça um programa que leia o primeiro nome de uma pessoa. Enquanto o nome não for igual a “Jonas”, permaneça no
laço de repetição.
*/

#include <iostream>
#include <string.h>
using namespace std;

void exercicio1(){
    for (int i=1; i<=20; i++) cout << "Esta e a repeticao de numero " << i << endl;
}

void exercicio2(){
    char palavra[30];
    for(int i=1; i<=3; i++) {
        cout << "Digite uma palavra: "; scanf("%s", &palavra); cout << "Sua palavra foi: "; cout << palavra << endl;
    }
    
    
}


void exercicio3(){
	int n, soma;
	for(int i=1;i<=5; i++) {
        cout << "Digite o numero: "; cin >> n; soma += n;
    }
    
	cout << "Soma dos numeros: " << soma;
}

void exercicio4() {
    cout << "\tNumeros pares ate 50:" << endl;
    for (int i=2; i<=50; i+=2) cout << "\t" << i << endl;

}

void exercicio5(){
    int pares=0, impares=0, n;
    for(int i=1; i<=10; i++) {
        cout << "Digite um numero: "; cin >> n;
        if (n%2==0) pares++;
        else impares++;
    }
    cout << "Foram " << pares << " numeros pares e " << impares << " numeros impares" << endl;
}

void exercicio6(){
    int inicio, fim;
    cout << "Digite numero inicial: "; cin >> inicio; cout << "Digite o numero final: "; cin >> fim;
    for(int i=inicio; i<=fim; i++) cout << "\t" << i << endl;
}

void exercicio7(){
    for(int i=1;i<=10;i++) cout << "\t" << i << endl;
}

void exercicio8(){
    char a;
    while(a != 'z') {
        cout << "Digite a letra: "; cin >> a;
        cout << "Caratere digitado foi: " << a << endl;
    }
    cout << "Sucesso, a letra correta foi digitada!" << endl;
}

void exercicio9(){
    int a;
    while(a != 10) {
        cout << "Digite a senha: "; cin >> a;
        cout << "Numero digitado foi: " << a << endl;
    }
    cout << "Sucesso, o numero correto foi digitada!" << endl;
}

void exercicio10(){
    char a[30] = "gabriel";
    char b[6] = "jonas";
    while(strcmp(a, b) != 0) {
        cout << "Digite o nome: "; scanf("%s", &a);
        cout << "O nome digitado foi: " << a << endl;
    }
    cout << "Sucesso, o nome correto foi digitado!" << endl;
}


main()
{
    exercicio1();
    exercicio2();
    exercicio3();
    exercicio4();
    exercicio5();
    exercicio6();
    exercicio7();
    exercicio8();
    exercicio9();
    exercicio10();
}
