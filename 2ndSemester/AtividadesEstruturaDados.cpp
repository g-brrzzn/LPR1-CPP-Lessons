#include <iostream>
using namespace std;
#include <cstring>
#define SIZE 44


void zerarVetor(int vetor[SIZE][SIZE]) {
    for (int i=0; i<=SIZE; i++) {
        for (int j=0; j<=SIZE; j++) vetor[i][j] = 0;
    }
    for (int i=0; i<=SIZE; i++) {
        for (int j=0; j<=SIZE; j++) cout << vetor[i][j] << " ";
        cout << endl;
    }
}

void trocarCaractere(char c, char vetor[]) {
    for(int i=0; i<=sizeof(vetor)/sizeof(*vetor); i++) {
        if(vetor[i] == c) cout << "*";
        else cout << vetor[i];
    }
}
void copiarVetor(char vetor1[], char vetor2[], char vetorResultado[]) {
    //size1 = vetor1.length; size2 = vetor2.length;
    //char vetorResultado[size1 + size2];
    int j=0;
    for (int i=0; i<=strlen(vetor1); i++) {
        vetorResultado[i] = vetor1[i];
        j=i;
    } 
    //vetorResultado[j] = " "; j+=1;
    for (int i=0; i<=sizeof(vetor2)/sizeof(char); i++) {
        vetorResultado[j+i] = vetor2[i];
    }  
}

void imprimirConsoantes(char palavra[]) {
    for(int i=0; i<=strlen(palavra); i++) {
        if(palavra[i] != 'a' && palavra[i] != 'e' && palavra[i] != 'i' && palavra[i] != 'o' && palavra[i] != 'u') {
            cout << palavra[i];
        }
    }
}

void imprimirSoletrando(char palavra[]){
    int i = 0;
    while(palavra[i] != '\0'){
        if (palavra[i+1] == '\0') printf("%c", palavra[i]);
        else printf("%c-", palavra[i]);
        i++;
    }
}

void imprimirVogais(char palavra[]) {
    for(int i=0; i<=strlen(palavra); i++) {
        if(palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u') 
            cout << palavra[i];
    }
}

void contarVogais(char palavra[]) {
    int vogais = 0;
    for(int i=0; i<=strlen(palavra); i++) {
        if(palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u') 
            vogais++;
    }
    cout << "Esta palavra tem " << vogais << " vogais";
}

void imprimirSoletrandoFor(char palavra[]){
    for(int i=0; i<=strlen(palavra); i++){
        if (palavra[i+1] == '\0') printf("%c", palavra[i]);
        else printf("%c-", palavra[i]);
    }
}
void imprimirLista(int vetor[], int quantidade) {
    printf("\nOs numeros no vetor sao: ");
    for(int i = 0; i < quantidade; i++) 
        printf("%d ", vetor[i]);

}
void somarNumero(int numero, int vetor2[], int tamanho) {
    for (int i=0;i<=tamanho;i++) vetor2[i] += numero; 
}




main(){
    /*
    zerarVetor(vetor);

    char c = 'i';
    char vetor[] = "instituto";
    trocarCaractere(c, vetor);

    char v1[] = "rosa", v2[] = "linda", v3 [50];
    copiarVetor(v1, v2, v3);
    printf("%s", v3);

    imprimirConsoantes("palavra");

    imprimirSoletrando("palavra");

    imprimirVogais("palavra");

    contarVogais("palavra");

    imprimirSoletrandoFor("palavra");

    int t = 5, n = 10;
    int x[] = {1, 2, 3, 4, 5};
    imprimir(x, t);
    somarNumero(n, x, t);
    imprimirLista(x, t);

    Questão 10 - Resposta: b) {1, 2, 3, 4, 0}. 


    */

    
}