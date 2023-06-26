/*
1. Faça um programa que peça o número de um mês (no intervalo de 1 a 12) e indique
quantos dias esse mês possui.
2. Faça um programa que leia quatro números, e calcule a soma dos três maiores.
3. Faça um programa que leia o nome e o curso de 10 estudantes. Ao final, exiba os valores
de nome e curso armazenados.
4. Faça um programa que calcule o reajuste de salário de funcionários, com base na seguinte
regra:
• Aumento de 50% para salários de até R$1600,00.
• Aumento de 30% para salários a partir de R$1600,00.
Após coletar o salário de cinco funcionários, calcular o aumento de cada um e exibir na saída
o novo valor de salário.
5. Faça um programa que leia os valores de altura e peso de uma pessoa. Em seguida,
calcule seu IMC (índice de massa corporal) que é dado pela seguinte fórmula:
IMC = p/altura2
*/

#include <iostream>
#include <math.h>
using namespace std;

void exercicio1(){
    short mes, dias;

    cout << "Digite o numero do mes: "; cin >> mes;

    switch (mes)
    {
    case 1:
        dias = 31;
        break;
    case 2:
        dias = 28;
        break;
    case 3:
        dias = 31;
        break;
    case 4:
        dias = 30;
        break;
    case 5:
        dias = 31;
        break;
    case 6:
        dias = 30;
        break;
    case 7:
        dias = 31;
        break;
    case 8:
        dias = 31;
        break;
    case 9:
        dias = 30;
        break;
    case 10:
        dias = 31;
        break;
    case 11:
        dias = 30;
        break;
    case 12:
        dias = 31;
        break;

    default:
        break;
    }

    cout << "O mes " << mes << " tem " << dias << " dias!" << endl;

}
void exercicio2(){
    int lista[4], soma=0, menor=9999999;

    for (int i=0; i<=3; i++){
        cout << "Digite o numero " << i+1 << " da lista: "; cin >> lista[i];
        if (lista[i] < menor) menor = lista[i];
    }
    for (int i=0; i<=3; i++){
        if (lista[i] != menor) soma += lista[i];
    }

    cout << "A soma dos 3 maiores numeros de sua lista foi: " << soma << endl;

}

void exercicio3(){
    char nome[50][10], curso[50][10];

    for (int i=0; i<=11; i++) {
        cout << "Seu nome: "; cin >> nome[i]; 
        cout << "Seu curso: "; cin >> curso[i];
    }
    cout << "\tAlunos - Cursos" << endl;

    for (int i=0; i<=11; i++) {
        cout << nome[i] << " - " << curso[i] << endl;
    }
}

void exercicio4(){
    int salario[5];

    cout << "\tFarm de Promocoes 100% automatica" << endl;
    /*
    • Aumento de 50% para salários de até R$1600,00.
    • Aumento de 30% para salários a partir de R$1600,00.
    */

    for (int i=0; i<=4; i++){
        cout << "Digite seu salario: "; cin >> salario[i];
        if (salario[i] > 1600) salario[i] += salario[i] * 0.5;
        else salario[i] += salario[i] * 0.3;
    }
    for (int i=0; i<=4; i++) cout << "Salarios reajustados: " << salario[i] << endl;

}

void exercicio5(){
    float imc, altura, peso;

    cout << "\tCalculador IMC" << endl;
    cout << "Diga a sua altura em metros: "; cin >> altura;
    cout << "Diga o seu peso em kilos: "; cin >> peso;
    cout << "Seu IMC: " << peso/pow(altura, 2) << endl;
    cout << "\tTabela" << endl << "Menor que 18,5 - Magreza" << endl << "Entre 18,5 e 24,9 - Normal" << endl << "Entre 25,0 e 29,9 - Sobrepeso" << endl;
}


main(){
/*
exercicio1();
exercicio2();
exercicio3();
exercicio4();
exercicio5();
*/





}