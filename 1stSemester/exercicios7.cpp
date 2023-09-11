/*
1. Inicialize um vetor com cinco valores de notas de um aluno. A seguir, exiba na saída cada
uma dessas notas.
2. Deseja-se calcular a média aritmética das notas de uma classe, em uma avaliação que foi
aplicada para uma determinada disciplina. Esta classe é composta por 20 alunos. Faça um
programa para facilitar este cálculo.
3. Faça um programa que leia os valores de temperatura, uma vez ao dia, durante sete dias
(uma semana). Por fim, calcule a média de temperatura ao longo da semana e imprima este
valor na saída.
4. O gerente de R.H. de uma empresa deseja calcular o total financeiro necessário para pagar
seus 10 funcionários em um determinado mês. Faça um programa que receba 10 valores de
salários de empregados e calcule a sua soma. Ao final, exiba o montante necessário para o
pagamento desses valores.
5. Faça um programa que receba o preço de cinco produtos de uma loja. Em seguida,
verifique:
• Qual é o produto mais barato?
• Quantos desses produtos tem o valor abaixo de R$50,00?
• Qual é a média de preços desses produtos?
Exiba na saída a resposta a essas perguntas.
6. Faça um programa que leia dez valores de preços de orçamento de um determinado
serviço. Em seguida, verifique qual é o valor mais barato, e qual é o mais caro
*/

#include <iostream>
using namespace std;

void exercicio1()
{
    int nota[5];
    for (int i = 1; i <= 5; i++)
    {
        cout << "Digite a nota " << i << ": "; cin >> nota[i];
    }
    cout << "As notas foram: ";
    for (int i = 0; i <= 5; i++)
        cout << "\t" << nota[i] << endl;
}
void exercicio2()
{
    int qntNotas = 20;
    float nota[qntNotas], total;
    for (int i = 1; i <= qntNotas; i++)
    {
        cout << "Digite a nota " << i << ": "; cin >> nota[i];
        total += nota[i];
    }
    cout << "A media de suas notas foi: " << total / qntNotas << endl;
}
void exercicio3()
{
    int qnt = 7;
    float temp[qnt], total;
    for (int i = 1; i <= qnt; i++)
    {
        cout << "Digite a temperatura do dia " << i << ": "; cin >> temp[i];
        total += temp[i];
    }
    cout << "A media da temperatura essa semana foi: " << total / qnt << endl;
}
void exercicio4()
{
    int qnt = 10;
    float salario[qnt], total;
    for (int i = 1; i <= qnt; i++)
    {
        cout << "Digite o salario do funcionario " << i << ": "; cin >> salario[i];
        total += salario[i];
    }
    cout << "O total a ser pago para os funcionarios sera: " << total << endl;
}
void exercicio5()
{
    int qnt = 5;
    float preco[qnt], total, abaixoDe50[qnt], maisBarato=0;
    for (int i = 1; i <= qnt; i++)
    {
        cout << "Digite o preco do produto " << i << ": "; cin >> preco[i];
        if (preco[i] <= 50) abaixoDe50[i] = preco[i];
        if (maisBarato == 0) maisBarato = preco[i];
        if (preco[i] < maisBarato) maisBarato = preco[i];
        total += preco[i];
    }
    cout << "Media de precos: " << total/qnt << endl << "Precos abaixo de 50: ";
    for (int i = 0; i <= qnt; i++) cout << abaixoDe50[i] << endl;
    cout << "\nProduto mais barato: " << maisBarato << endl;
}
void exercicio6()
{
    int qnt = 5;
    float preco[qnt], maisBarato=0, maisCaro=0;
    for (int i = 1; i <= qnt; i++)
    {
        cout << "Digite o preco do produto " << i << ": "; cin >> preco[i];
        if (maisBarato == 0) maisBarato = preco[i];
        if (maisCaro == 0) maisCaro = preco[i];
        if (preco[i] < maisBarato) maisBarato = preco[i];
        if (preco[i] > maisCaro) maisCaro = preco[i];
    }
    cout << "\nProduto mais barato: " << maisBarato << endl;
    cout << "\nProduto mais caro: " << maisCaro << endl;
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
