/*
1. Faça um programa que abra um file para leitura e apresente os caracteres do mesmo
na saída (prompt de comandos).
2. Faça um programa que abra um file para escrita e armazene duas frases (mensagens)
de livre escolha em seu conteúdo.
3. Abra um file no modo “append”. Escreva cinco strings, separadas pelo caractere de
nova linha, sendo que para cada escrita de string abra e feche o file. Como sugestão,
utilizar uma função para a escrita de dados no file.
4. Faça um programa que abra um file para escrita e armazene uma string em seu
conteúdo. Em seguida, abra o file para leitura, leia a string armazenada e compare-a com
uma string previamente armazenada em uma variável. Observação: essa situação pode ser
adaptada para o armazenamento de uma senha, por exemplo.
5. Faça um programa que leia informações de um file 1 e as copie em um file 2
*/

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

using namespace std;
FILE *file;
FILE *file2;
char ch;
void printtxt(FILE *file) {
    while((ch = getc(file)) != EOF) printf("%c", ch);
    fclose(file);
}

void atividade1() {
    file = fopen("atividade1.txt", "r");
    printtxt(file);
}
void atividade2() {
    file = fopen("atividade2.txt", "w");
    file = fopen("atividade2.txt", "a");

    cout << "Digite a primeira linha e pressione CTRL+Z seguido de ENTER para terminar: ";
    while((ch = getchar()) != EOF) 
        putc(ch, file);

    cout << "Digite a segunda linha e pressione CTRL+Z seguido de ENTER para terminar: ";
    while((ch = getchar()) != EOF) 
        putc(ch, file);

    fclose(file);
    cout << "\n\t- Arquivo final -" << endl;
    file = fopen("atividade2.txt", "r");
    printtxt(file);
}

void atividade3() {
    file = fopen("atividade3.txt", "w");
    for(int i=0; i<=4; i++) {
        file = fopen("atividade3.txt", "a");
        cout << "Digite a string " << i+1 << "e pressione CTRL+Z seguido de ENTER para terminar: ";
        while((ch = getchar()) != EOF) 
            putc(ch, file);
        fclose(file);
    }
    cout << "\n\t- Arquivo final -" << endl;
    file = fopen("atividade3.txt", "r");
    printtxt(file);
}
void atividade4() {
    char input[30];
    char senha[30];

    file = fopen("atividade4.txt", "w");
    cout << "Digite a senha, entao pressione CTRL+Z seguido de ENTER para terminar: ";
    while((ch = getchar()) != EOF) 
        putc(ch, file);
    fclose(file);

    cout << "Digite a senha: "; cin >> input;

    file = fopen("atividade4.txt", "r");
    fscanf(file, senha);
    fclose(file);

    if(strcmp(input, senha) == 0) cout << "Senha correta!" << endl;
    else cout << "Senha incorreta" << endl;
}
void atividade5() {
    file = fopen("atividade5.txt", "w");
    file = fopen("atividade5.txt", "a");
    file2 = fopen("atividade2.txt", "r");

    cout << "Copiando Arquivos..." << endl;
    ch = fgetc(file2);
    while (ch != EOF) {
        fputc(ch, file);
        ch = fgetc(file2);
    }
    cout << "Texto copiado com sucesso!" << endl;
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


