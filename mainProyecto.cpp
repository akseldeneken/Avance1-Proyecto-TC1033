/*
    Proyecto Avance 1
    Aksel Deneken Maldonado
    A01711966
    9/11/2023


    Este es el primer avance del proyecto de Pensamiento computacional 
    orientado a objetos. 
*/

#include <iostream>
#include "clasesProyecto.h"

using namespace std;



void menu(){
    cout << "Productos disponibles: " << endl;
    cout << "1. Laptops" << endl;
    cout << "2. Smartphones" << endl;
    cout << "3. Cargadores" << endl;
    
}

int main(){
   
    char continua; continua = 's';

    while (continua == 's'){

        menu();

        int opcion;

        cout << "Que productos desea ver?: "; cin >> opcion;
        if (opcion == 1){
            Laptops laptop_1("Asus", 24999.90, "RTX 4090--intel core i7--Pantalla de 1080p", "Disponible", 24);
            cout << laptop_1.get_modelo() << " de precio " <<laptop_1.get_precio() << " pesos. \nCuenta con: " << laptop_1.get_componentes() 
            << ". \nEstatus: " << laptop_1.get_status() << ". \nOpciones de pago: " << laptop_1.get_meses()
            << " meses sin intereses."  << endl;
            laptop_1.interes();
        }
        else if (opcion == 2){
            Smartphones smart_1("Iphone 15 Pro", 22500, "IOS 17--Pantalla 460ppi", "Disponible en Tienda", 12, "4k");
            cout << smart_1.get_modelo() << " de precio " << smart_1.get_precio() << " pesos. \nCuenta con: " << smart_1.get_componentes()
            << ". \nEstatus: " << smart_1.get_status() << ". \nOpciones de pago: " << smart_1.get_meses() << " meses sin intereses."
            << "\nCon camara " << smart_1.get_camara() << "\nHay seguro en los celulares el cual vale el 20% del precio total" << endl;
            smart_1.seguro();
            smart_1.interes();
        }
        else if (opcion == 3){
            Cargadores car_1("USB-C", 500, "Sin Inventario", 130);
            cout << "Cargador " << car_1.get_modelo() << " de precio de " << car_1.get_precio() << " pesos. "
            << "\nEstatus: " << car_1.get_status() << ". Capacidad de " << car_1.get_capacidad() << "W." << endl;
        }else{
            cout << "Opcion invalida" << endl;
        }
    
        cout << "Desea continuar?(s/n): "; cin >> continua; 
    }
    system("pause");
    return 0;
}