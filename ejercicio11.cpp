#include <iostream>

using namespace std;
int bill, amount, maxMount = 0, maxBill = 0, sales = 0, total = 0, prom = 0;
void inData(){
    cout << "Ingrese el numero de factura: ";
    cin >> bill;
    cout << "Ingrese el importe: ";
    cin >> amount;
}

int main()
{
    /*
        Problema 11 de la Guia Ing. Aldo Alaniz
        Alumno: Valentin Liras
        Comision: S1522
    */
    inData();
    while (amount > 0){
        sales++;
        total += amount;
        if(amount > maxMount){
            maxMount = amount;
            maxBill = bill;
        }
        prom = total / sales;
        inData();
    }
    cout << "Ventas realizadas: "<< sales << endl;
    cout << "Importe Total: "<< total << endl;
    cout << "Factura con mayor importe: " << maxBill << endl;
    cout << "Importe promedio: " << prom << endl;

    cout << "Fin Problema 11!" << endl;

    return 0;
}
