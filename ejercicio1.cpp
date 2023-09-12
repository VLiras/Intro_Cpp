#include <iostream>

using namespace std;


int main()
{
    /*
        Problema 1 de la Guia Ing. Aldo Alaniz
        Alumno: Valentin Liras
        Comision: S1522
    */
    int a, b, c, d, e;
    int myList[5] = {a, b, c, d, e};
    for(int i = 0; i < 5;i++){
        cout << "Ingrese el numero "<<i + 1<<": ";
        cin >> myList[i];
    }
    cout << "Los numeros mayores al primero son: " << " ";
    for (int i = 0; i < 5; i++) {
        if (myList[i] > myList[0]){
            cout << myList[i] << " ";
        }
    }
    cout << endl; // => "cout" vacio para mejorar la concatenacion
    cout << "Fin Problema 1!" << endl;
    return 0;
}
