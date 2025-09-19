#include <iostream>

using namespace std;

int* alocaVetor(int N){    
    if(N <= 0){
        return nullptr;
    }

    int *ptrVet = new int [N];
    return ptrVet;
}

int main (){
    int N;
    int *meuVetor;

    cout << "Digite o tamanho do vetor: " << endl;
    cin >> N;

    meuVetor = alocaVetor(N);

    if(meuVetor == nullptr){
        cout << "Vetor nulo" << endl;
    } else {
        cout << "Valor alocado na memoria: " << meuVetor << endl;
    }

    delete[] meuVetor;

    return 0;
}