#include <iostream>

using namespace std;

float potencia(float base, float expoente){
    if (expoente == 0){
        return 1;
    }else if(expoente > 0){
        return base * potencia(base, expoente-1);
    }else{
    return 1 / potencia(base, -expoente);
    }
}

int main (){
    float a, b, resultado;

    cout << "Digite o valor da base: " << endl;
    cin >> a;

    cout << "Digite o valor do expoente" <<endl;

    cin >> b;

    resultado = potencia(a,b);

    cout << "O resultado foi de: " << resultado << endl;
    return 0;
}