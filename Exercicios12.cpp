/*
O sistema inicialmente deverá definir quais serão os produtos da Loja, e quais são os seus
preços.
Isso pode ser feito usando-se uma primeira função, denominada atribuirPrecos().
Em seguida, criar uma função que leia qual é a época comemorativa do ano (Dia das Mães,
Natal etc.). Sugestão de nome de função: lerDataPromocional().
Aplicar o desconto correspondente a esta época sobre os produtos. Pode-se usar para isso
uma função denominada aplicarDesconto(data).
Por fim, apresentar ao Cliente os diversos produtos e seus respectivos preços promocionais.
Pode ser feita uma função para isso, por exemplo, com o nome apresentarProdutos().
Solicitar ao usuário qual o produto que se interessou (ou quais), e armazenar essa lista de
produtos. A função pode ser denominada lerProdutos().
Por fim, calcular e apresentar o valor final da compra. Para isso, pode ser criada a função
calcularValorTotal().
Todas essas funções podem ser chamadas em sequência dentro do método main() do
programa principal do sistema.
*/

#include <iostream>
#include <string.h>
using namespace std;

#define qnt 5

char nomesProdutos[qnt][50] = {"Camisa amarela", "Camisa verde", "Calca azul", "Dinossauro de estimacao", "Calca preta"};
float precosProdutos[qnt] = {30, 60, 79.99, 120, 320}; 
float precosProdutosDesc[qnt];


void apresentarProdutos() {
    for (int i=0;i<qnt;i++) 
        cout << "Produto " << i+1 << ": " << nomesProdutos[i] << " - R$" << precosProdutosDesc[i] << endl;
    cout << endl;
}

void atribuirPrecos(){
    int decisao = 0;
    while (decisao != 1 && decisao != 2) {
        cout << "Deseja reatribuir valores para os produtos?" << endl << "1. Sim" << endl << "2. Nao" << endl << "Escolha: "; cin >> decisao;
    }
    if (decisao == 1) {
        cout << "\tReatribuir precos" << endl;
        for (int i=0; i<qnt;i++) {
            float NovoValor;
            cout << "Produto " << i+1 << " " << nomesProdutos[i] << " - Valor: "; cin >> NovoValor;
            precosProdutos[i] = NovoValor;
        }
    } else {
        cout << "Tudo bem. Utilizando precos originais..." << endl;
        apresentarProdutos();
    }

}
int lerDataPromocional(){
    cout << "\tDatas promocionais" << endl;
    int decisao = 0;
    float desc;
    cout << "1. Dia das maes" << endl;
    cout << "2. Pascoa" << endl;
    cout << "3. Dia dos namorados" << endl;
    cout << "4. Natal" << endl;
    cout << "5. Ano novo" << endl;
    while (decisao < 1 || decisao > 5) {
        cout << "-- Qual data: "; cin >> decisao;
    }
    
    switch (decisao) {
        case 1: 
            desc = 5;
            cout << "Dia das maes selecionado. " << desc << "% de desconto aplicado!" << endl;
            break;
        case 2: 
            desc = 10;
            cout << "Pascoa selecionada. " << desc << "% de desconto aplicado!" << endl;
            break;
        case 3: 
            desc = 15;
            cout << "Dia dos namorados selecionado. " << desc << "% de desconto aplicado!" << endl;
            break;
        case 4:
            desc = 20;
            cout << "Natal selecionado. " << desc << "% de desconto aplicado!" << endl;
            break;
        case 5:
            desc = 25;
            cout << "Ano novo selecionado. " << desc << "% de desconto aplicado!" << endl;
            break;
        default:
            desc = 0;
            cout << "Nada selecionado. Nenhum desconto aplicado!" << endl;
    }
    return desc;
}

void aplicarDesconto(float desc) {
    for (int i=0;i<=qnt;i++) {
        if (desc != 0) precosProdutosDesc[i] = precosProdutos[i] - (precosProdutos[i] * (desc/100));
        else precosProdutosDesc[i] = precosProdutos[i];
    }
}

float lerProdutos() {
    int decisao=0, decisao2=0;
    float total;

    while (decisao2 != 1) {
        while (decisao < 1 || decisao > 5) {
            cout << "\n\n---------------------------" << endl;
            apresentarProdutos();
            cout << "Escolha um produto: "; cin >> decisao;
            total+= precosProdutosDesc[decisao-1];
        }
        cout << "Mais alguma coisa?" << endl << "1. Terminar Compra" << endl << "2. Continuar Comprando" << endl << "Escolha: "; cin >> decisao2;
        if (decisao2 == 2) decisao = 0;
    }
    return total;
}

void calcularValorTotal(float total) {
    cout << "Total a pagar: R$" << total << endl;
}



main() {
    atribuirPrecos();
    float desc = lerDataPromocional();
    aplicarDesconto(desc);
    apresentarProdutos();
    float total = lerProdutos();
    calcularValorTotal(total);
}