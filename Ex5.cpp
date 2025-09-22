#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    int N;
    int i;

    cout << "Digite um valor inteiro nao negativo para ser o tamanho do vetor: " << endl;
    do{
        if(N < 0)
        cout << "Numero invalido, digite novamente" << endl;
        cin >> N;
    }while(N < 0);
    
    int* Vet = (int*)malloc(N * sizeof(int));

    if(Vet == nullptr){
        cout << "Erro de alocacao" << endl;
        exit(1);
    }

    cout << "OBS: O CONTEUDO PRECISA SER MAIOR OU IGUAL A 2" << endl;
    for(i = 0; i < N; i++){
       do{
        cout << "Digite o valor da posicao V[" << i << "]: ";
        cin >> Vet[i];

        if (Vet[i] < 2){
            cout << "Valor invalido, o numero deve ser >= 2" << endl;
        }
       }while(Vet[i] < 2);
    }
    
    cout << "Vetor lido: ";
    for(i = 0; i < N; i ++){
        cout << Vet[i] << " ";
    }
    cout << endl;

    free(Vet);

    return 0;
}