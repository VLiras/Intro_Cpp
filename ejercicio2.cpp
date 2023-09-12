#include <iostream>

using namespace std;

int main()
{
    /*
        Problema 2 de la Guia Ing. Aldo Alaniz
        Alumno: Valentin Liras
        Comision: S1522
    */
    int a, b, rst = 0;
    int numbers[2] = {a, b};
    for (int i = 0; i < 2; i++){
        cout << "Ingrese el numero "<<i+1<<": ";
        cin >> numbers[i];
    }
    rst = numbers[0] - numbers[1];
    if (rst < 0){
        cout << "La resta es negativa: " << rst << endl;
    }
    else if (rst > 0){
        cout << "La resta es positiva: " << rst << endl;
    }
    else{
        cout << "La resta es " << rst << " (cero)" << endl;
    }

    cout << "Fin!" << endl;
    return 0;
}
