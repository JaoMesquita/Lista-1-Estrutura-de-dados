#include <iostream>
#include <cstdlib>

using namespace std;

int* receba(int* A, int* B, int N){

    int* PtrC= (int*)malloc(N * sizeof(int));
    
    if(PtrC == nullptr){
        cout << "Erro de alocacao" << endl;
        exit(1);
    }
    
    for(int i = 0; i < N; i++){
        PtrC[i] = A[i] + B[i];
    }

    return PtrC;
}


int main(){
    int N;

    cout << "Digite o tamanho dos vetores: " << endl;
    cin >> N;

    int* PtrA =(int*)malloc(N * sizeof(int));
    int* PtrB =(int*)malloc(N * sizeof(int));
    
    if(PtrA == nullptr || PtrB == nullptr){
        cout << "Alocação falhou!" << endl;
        exit(1);
    }

    for(int i = 0; i < N; i++){
        PtrA[i] = i;
        PtrB[i] = i;
    }


    int* PtrC = receba(PtrA, PtrB, N);
    
    cout << "Resultado: ";
    for(int i = 0; i < N; i++){
        cout << PtrC[i] << " ";
    }
    
    free(PtrA);
    free(PtrB);
    free(PtrC);

    return 0;
}