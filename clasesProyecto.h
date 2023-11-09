#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Laptops{

    private:
        float precio;
        string modelo;
        string componentes;
        string status;
        int meses;
    public:
        Laptops(): precio(0), modelo(""), componentes(""), status(""), meses(0){};
        Laptops( string mod, float pre, string comp, string sta, int mes): modelo(mod), precio(pre),  
        componentes(comp), status(sta), meses(mes){};
        float get_precio();
        string get_modelo();
        string get_componentes();
        string get_status();
        int get_meses();
        void set_meses(int);
        void set_precio(float);
        void set_modelo(string);
        void set_componentes(string);
        void set_status(string);
        void interes();


};

float Laptops::get_precio(){
    return precio;
}

string Laptops::get_modelo(){
    return modelo;
}

string Laptops::get_componentes(){
    return componentes;
}

string Laptops::get_status(){
    return status;
}

int Laptops::get_meses(){
    return meses;
}

void Laptops::set_meses(int mes){
    meses = mes;
}

void Laptops::set_precio(float pre){
    precio = pre;
}

void Laptops::set_modelo(string mod){
    modelo = mod;
}

void Laptops::set_componentes(string comp){
    componentes = comp;
}

void Laptops::set_status(string sta){
    status = sta;
}

void Laptops::interes(){
    float inter;
    inter = precio / meses;
    cout << "El precio a pagar cada mes es de " << inter << " pesos." << endl;
}



class Smartphones{
    private:
        float precio;
        string modelo;
        string componentes;
        string status;
        int meses;
        string camara;
    public:
    Smartphones( string mod, float pre, string comp, string sta, int mes, string cam): modelo(mod), precio(pre),  
        componentes(comp), status(sta), meses(mes), camara(cam){};
        float get_precio();
        string get_modelo();
        string get_componentes();
        string get_status();
        int get_meses();
        string get_camara();
        void set_camara(string);
        void set_meses(int);
        void set_precio(float);
        void set_modelo(string);
        void set_componentes(string);
        void set_status(string);
        void meses_sin_i();
        void seguro();
        void interes();
};

float Smartphones::get_precio(){
    return precio;
}

string Smartphones::get_modelo(){
    return modelo;
}

string Smartphones::get_componentes(){
    return componentes;
}

string Smartphones::get_status(){
    return status;
}

int Smartphones::get_meses(){
    return meses;
}

string Smartphones::get_camara(){
    return camara;
}

void Smartphones::set_camara(string cam){
    camara = cam;
}

void Smartphones::set_meses(int mes){
    meses = mes;
}

void Smartphones::set_precio(float pre){
    precio = pre;
}

void Smartphones::set_modelo(string mod){
    modelo = mod;
}

void Smartphones::set_componentes(string comp){
    componentes = comp;
}

void Smartphones::set_status(string sta){
    status = sta;
}

void Smartphones::interes(){
    float inter;
    inter = precio / meses;
    cout << "El precio a pagar cada mes es de " << inter << " pesos." << endl;
}

void Smartphones::seguro(){
    float seg;
    seg = precio * .2;
    cout << "El seguro en este modelo costaria " << seg << endl; 
}


class Cargadores{
    private:
        float precio;
        string modelo;
        string status;
        int capacidad;
     public:
    Cargadores( string mod, float pre, string sta, int cap ): modelo(mod), precio(pre),
    status(sta), capacidad(cap){};
        float get_precio();
        string get_modelo();
        string get_status();
        int get_capacidad();
        void set_precio(float);
        void set_modelo(string);
        void set_status(string);
        void set_capacidad(int);
        string toString();

};

float Cargadores::get_precio(){
    return precio;
}

string Cargadores::get_modelo(){
    return modelo;
}

string Cargadores::get_status(){
    return status;
}

int Cargadores::get_capacidad(){
    return capacidad;
}

void Cargadores::set_precio(float pre){
    precio = pre;
}

void Cargadores::set_status(string sta){
    status = sta;
}

void Cargadores::set_modelo(string mod){
    modelo = mod;
}

void Cargadores::set_capacidad(int cap){
    capacidad = cap;
}

