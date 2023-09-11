/*
1. Fazer um programa que receba 4 notas e calcule a média. Apresenta o resultado final: Se a média for maior ou igual a 7
“Aprovado”; se a média for menor que 7 apresentar “Exame”.
2. Fazer um programa que receba 2 valores inteiros do usuário e mostre o maior deles.
3. Fazer um programa que receba um número de operação do usuário (1 Soma, 2 Subtração, 3 Multiplicação ou 4 Divisão) e
dois números reais. O programa deverá retornar o resultado da operação recebida sobre estes dois números. Por exemplo,
se escolher 1 e digitar 2 e 3, então deverá mostrar a soma que é 5.
4. Ler um número e apresentar se é par ou ímpar.
5. Ler um número e apresentar se é múltiplo de 5.
6. Ler um número inteiro. Verificar se o mesmo é maior que 50. Caso contrário, verificar se o número é maior que 40. Por fim,
escrever “Número á menor ou igual a 40”.
*/

#include <iostream>
using namespace std;

void exercicio1(){
    int n1, n2, n3, n4, media;
    cout << "Insira a nota 1: "; cin >> n1;
    cout << "Insira a nota 2: "; cin >> n2;
    cout << "Insira a nota 3: "; cin >> n3;
    cout << "Insira a nota 4: "; cin >> n4;
    
    media = (n1, n2, n3, n4)/4;
    if (media >= 7) cout << "Aprovado" << endl;
    else cout << "Reprovado, Exame" << endl;
}

void exercicio2(){
    int n1, n2;
    cout << "Insira o numero 1: "; cin >> n1;
    cout << "Insira o numero 2: "; cin >> n2;
    
    if (n1 == n2) cout << "Eles sao iguais" << endl;
    else if (n1 > n2) cout << "O numero maior e: " << n1;
    else cout << "O numero maior e: " << n2;
}

void exercicio3(){
    int escolha;
    float n1, n2, resultado;

    cout << "\tCalculadora" << endl;
    cout << "1. Somar\n2. Subtrair\n3. Multiplicar\n4. Dividir\nO que voce quer fazer? "; cin >> escolha;
    cout << "Diga o numero 1: "; cin >> n1;
    cout << "Diga o numero 2: "; cin >> n2;


    switch (escolha)
    {
    case 1: resultado = n1 + n2; break;
    case 2: resultado = n1 - n2; break;
    case 3: resultado = n1 * n2; break;
    case 4: resultado = n1 / n2; break;
    }
    cout << "O resultado: " << resultado << endl;
}

void exercicio4(){
    int n1;
    cout << "Digite um numero: "; cin >> n1;
    if (n1 % 2 == 0) cout << "Este numero e par" << endl;
    else cout << "Este numero e impar" << endl;
    
}

void exercicio5(){
    int n1;
    cout << "Digite um numero: "; cin >> n1;
    if (n1 % 5 == 0) cout << "Este numero e multiplo de 5" << endl;
    else cout << "Este numero nao e multiplo de 5" << endl;
}
void exercicio6(){
    int n1;
    cout << "Digite um numero: "; cin >> n1;

    if (n1 > 50) cout << "Seu numero e maior que 50" << endl;
    else if (n1 > 40) cout << "Seu numero e maior que 40" << endl;
    else cout << "Seu numero e menor que 40" << endl;

}



main()
{
    exercicio1();
    exercicio2();
    exercicio3();
    exercicio4();
    exercicio5();
    exercicio6();
}
