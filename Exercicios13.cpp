/*
1. Introdução
    A presente atividade corresponde a um sistema de Cadastro de Clientes em
    Linguagem C e usando o acesso a arquivos.
    O sistema deverá coletar os dados cadastrais de um cliente (nome, endereço,
    telefone e e-mail), e armazenar em um arquivo denominado
    “dadosCadastrais.txt”.
    Em caso de nova execução do programa, os novos dados coletados deverão
    ser acrescentados ao final do arquivo “dadosCadastrais.txt”.
    O programa principal pode ser denominado “cadastro.c”.
    Recomenda-se, quando possível e adequado, o uso de funções no programa principal.
2. Requisitos
    O sistema deverá coletar os seguintes dados de Clientes:
    • Nome
    • E-mail
    • Telefone
    Criar um laço de repetição de forma a prosseguir com a coleta dos dados enquanto o usuário do programa
    estiver cadastrando novos clientes.
    O menu a ser apresentado ao usuário poderá conter as opções:
    1. Cadastrar Cliente;
    2. Listar Clientes;
    3. Sair.
    O arquivo que será utilizado para a gravação dos dados é: “dadosCadastrais.txt”.
    A opção Cadastrar Cliente permitirá o cadastro de um novo cliente, acrescentando os dados coletados ao
    final do arquivo “dadosCadastrais.txt”.
    A opção Listar Clientes deverá fazer a leitura e exibição em tela dos conteúdos do arquivo
    “dadosCadastrais.txt”.
    A opção Sair permitirá a saída do programa.
    Observação: a fim de se escrever ao final do arquivo, usar a opção de modo de escrita “a” (append).
*/

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;
FILE *file;


struct cliente {
    char nome[50];
    char email[50];
    char telefone[20];
};

void registrarCliente(cliente dadosCliente) {
    file = fopen("dadosCadastrais.txt", "a");
    char info[100];
    char space[4] = " - ";
    strcat(info, dadosCliente.nome);  strcat(info, space);
    strcat(info, dadosCliente.email); strcat(info, space);
    strcat(info, dadosCliente.telefone);

    cout << info << endl;
    fprintf(file, info);
    fclose(file);
}

void CadastrarCliente() {
    struct cliente dadosCliente;

    cout << "\t- Cadastro de Cliente -" << endl;
    cout << "Digite o nome do cliente: "; cin >> dadosCliente.nome;
    cout << "Digite o email do cliente: "; cin >> dadosCliente.email;
    cout << "Digite o numero de telefone do cliente: "; cin >> dadosCliente.telefone;

    
    registrarCliente(dadosCliente);
    cout << "\nCliente registrado!" << endl;
}

void listarCliente() {
    file = fopen("dadosCadastrais.txt", "r");
    char ch;
    while((ch = getc(file)) != EOF) cout << ch;
    fclose(file);
}
 
main(){
    int decisao = 0;
    while (decisao < 1 || decisao > 3) {
        cout << "\tCadastro de Clientes" << endl;
        cout << "1. Cadastrar Cliente" << endl << "2. Listar Clientes" << endl << "3. Sair." << endl << "Escolha: "; cin >> decisao;
        if (decisao == 1) CadastrarCliente();
        else if (decisao == 2) listarCliente();
    }
}