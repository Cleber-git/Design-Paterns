#include "../includes/aereo.hpp"

#include <iostream>

Aereo *Aereo::instance = nullptr;
using namespace std;
Aereo::Aereo(){
    cout << "chamei a classe Aereo" << endl;
}

void Aereo::howWillSend(string _pacote){
    cout << "Enviando: " << _pacote << "..."<<endl; 
}
Aereo &Aereo::getInstance(){
    if(instance == nullptr){
        instance = new Aereo();
    }
    return (*instance);
}