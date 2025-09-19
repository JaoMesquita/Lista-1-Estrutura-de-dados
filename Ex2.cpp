#include <iostream>
#include <locale.h>

using namespace std;

int somatoria(int num){
    if(num == 1)
        return 1;
    else if(num > 1)
        return num + somatoria(num-1);
    else
        return 0;
}


int main(){
    setlocale(LC_ALL, "Portuguese");
    int num;

    cout << "Digite o número desejado: " << endl; 
    cin >> num;

    cout << "Resultado: " << somatoria(num);
    return 0;
}