/* 
    1) Elabore um programa que escreva na saída (prompt de comandos) a mensagem: “Ola colegas do ADS. Tudo bem com
    voces?”.
    2) Elabore um programa que leia um número inteiro da parte do usuário. Em seguida, escreva na saída o valor deste número.
    3) Elabore um programa que leia dois valores inteiros. Calcule a soma desses dois valores. Ao final, exiba na tela o valor da
    soma dos números.
    4) Elabore um programa que leia um número real da parte do usuário. Em seguida, imprima esse valor com duas casas
    decimais após a vírgula.
    5) Elabore um programa que leia um caractere. Em seguida, exiba na saída o valor deste caractere.

        Estrutura Condicional IF e IF-ELSE
    6) Escreva um programa que leia o valor de temperatura ambiente. Se a temperatura for maior que 28 graus, ligar o arcondicionado.
    7) Escreva um programa que verifique a distância entre um veículo e o da frente. Se a distância for menor que 20 m, escrever
    “Frear o veículo”.
    8) Escreva um programa que receba um valor relativo à quantidade de computadores a serem comprados por uma escola.
    Caso o número de computadores seja igual ou menor que 30, escrever a mensagem “Adquirir computadores”
    9) Escrever um programa que leia um valor de preço de uma mercadoria. Se o preço for menor ou igual a 100 reais, escrever
    a mensagem “Comprar”.
    10) Escreva um programa que leia um valor de X. Caso X seja maior que 500, escrever a mensagem: “X é maior que 500”.
    Caso contrário, escrever “X é menor ou igual a 500”.
    11) Escrever um algoritmo que leia um valor de preço de uma mercadoria. Se o preço for menor ou igual a 100 reais,
    escrever a mensagem “Comprar”. Se for maior (que 100) escrever a mensagem “Não comprar”.
    12) Escreva um algoritmo que leia o valor de temperatura de uma pessoa. Caso a temperatura seja maior que 37.5 graus,
    escrever a mensagem: “Temperatura alta – possível febre”. Caso contrário, escrever “Temperatura normal”.
*/


#include <iostream>
using namespace std;

void atividade1() {
    cout << "Ola colegas do ADS. Tudo bem com voces?" << endl;
}
void atividade2() {
    int num;
    cout << "Diga um numero: ";
    cin >> num;
    cout << "O numero digitado foi: " << num << endl;
}
void atividade3() {
    int a, b;
    cout << "\tSoma!" << endl;
    cout << "Digite o numero 1: "; cin >> a;
    cout << "Digite o numero 2: "; cin >> b;
    cout << "A soma destes numeros: " << a + b << endl;   
}
void atividade4() {
    float a;
    cout << "Digite o numero real: "; cin >> a;
    printf("O numero digitado foi: %.2f\n", a);
}
void atividade5() {
    char a;
    cout << "Digite um caractere: "; cin >> a;
    cout << "O caractere foi: " << a << endl;
}
void atividade6() {
    float temp;
    cout << "Qual a temperatura do ambiente? "; cin >> temp;
    if (temp > 28.0) {
        cout << "Ligando o ar condicionado!" << endl;
    }
}
void atividade7() {
    float distancia;
    cout << "Qual a distancia entre os carros? "; cin >> distancia;
    if (distancia < 20.0) {
        cout << "Freie!" << endl;
    }
}
void atividade8() {
    int qnt;
    cout << "Quantos computadores tem? "; cin >> qnt;
    if (qnt <= 30) {
        cout << "Adquirir computadores" << endl;
    }
}
void atividade9() {
    int preco;
    cout << "Qual o preco da mercadoria? "; cin >> preco;
    if (preco <= 100) {
        cout << "Comprar!" << endl;
    }
}
void atividade10() {
    int x;
    cout << "Diga o valor de X: "; cin >> x;
    if (x > 500) cout << "X e maior que 500" << endl;
    else cout << "X e menor ou igual a 500" << endl;
}
void atividade11() {
    int preco;
    cout << "Qual o preco da mercadoria? "; cin >> preco;
    if (preco <= 100) cout << "Comprar!" << endl;
    else cout << "Nao comprar!" << endl;
    
}

void atividade12() {
    float temp;
    cout << "Diga sua temperatura: "; cin >> temp;
    if (temp > 37.5) cout << "Temperatura alta – possível febre" << endl;
    else cout << "Temperatura normal" << endl;
}


main() 
{
    
    atividade1();
    atividade2();
    atividade3();
    atividade4();
    atividade5();
    atividade6();
    atividade7();
    atividade8();
    atividade9();
    atividade10();
    atividade11();
    atividade12();

}
