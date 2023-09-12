#include <iostream>

using namespace std;

int main()
{
    /*
        Problema 6 de la Guia Ing. Aldo Alaniz
        Alumno: Valentin Liras
        Comision: S1522
    */
    int bill, amount, maxMount = 0, minMount = 0, maxBill = 0, minBill = 0, counter = 1;

    cout << "Ingrese el numero de Factura: ";
    cin >> bill;
    while (bill > 0){
        cout << "Ingrese el importe: ";
        cin >> amount;
        if(counter == 1){
            maxMount = amount;
            maxBill = bill;
            minMount = amount;
            minBill = bill;
        }
        else{
            if(amount > maxMount){
                maxMount = amount;
                maxBill = bill;
            }
            else if(amount < minMount){
                minMount = amount;
                minBill = bill;
            }
        }
        cout << "Ingrese el numero de Factura: ";
        cin >> bill;
        counter++;
    }
    cout << "Monto maximo registrado: "<< maxMount <<" en la factura " << maxBill << endl;
    cout << "Monto minimo registrado: "<< minMount <<" en la factura " << minBill << endl;


    cout << "Fin problema 6!" << endl;
    return 0;
}
