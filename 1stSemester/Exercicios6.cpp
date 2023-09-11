/*
2. Faça um programa que leia dois valores numéricos da parte do usuário (numero1 e
numero2). Enquanto o numero1 for menor que o numero2, exiba a mensagem: “Numero 1
menor que Numero 2”. Caso o número 1 for maior que o número 2, encerrar o laço de
repetição.
4. Ler um valor numérico por parte do usuário. Enquanto o número for diferente de 5, solicite a
entrada de um novo número.
5. Faça um programa que leia cinco valores por parte do usuário, correspondentes a cinco
notas de um aluno. Realize a soma dessas notas e, ao final, exiba o valor da média aritmética
do aluno.
*/

#include <iostream>
using namespace std;

void exercicio2(){
    int n1=0, n2=1;
    while(n1<n2){
        cout << "Insira o n1: "; cin >> n1;
        cout << "Insira o n2: "; cin >> n2;
        if (n1<n2) cout << "Numero 1 menor que Numero 2" << endl;
    }
    cout << "Numero 1 maior que Numero 2" << endl;
}
void exercicio4(){
    int n1;
    cout << "Digite um numero: "; cin >> n1;
    while(n1!=5) {cout << "Digite outro numero: "; cin >> n1;}

}
void exercicio5(){
    int nota[5], total=0;
    for (int i=1; i<=5; i++) {
        cout << "Digite a nota " << i << ": "; cin >> nota[i];
        total += nota[i];
        }
    cout << "Sua media foi: " << total/5 << endl;

}


main(){
    exercicio2();
    exercicio4();
    exercicio5();
}
