#include <iostream>

using namespace std;

int main()
{
    /*
        Problema 5 de la Guia Ing. Aldo Alaniz
        Alumno: Valentin Liras
        Comision: S1522
    */
    int amount, bills, total;
    total = 0;
    cout << "Ingrese el importe: ";
    cin >> amount;
    while (amount > 0){
        total += amount;
        bills++;
        cout << "Ingrese el importe: ";
        cin >> amount;
    }
    cout << "El importe total ingresado es: "<< total << endl;
    cout <<"Se emitieron "<< bills<<" facturas" << endl;
    cout << "Fin Problema 5!" << endl;
    return 0;
}
