#include "../includes/aereo.hpp"

#include <iostream>

aereo *aereo::instance = nullptr;
using namespace std;
aereo::aereo(){
    cout << "chamei a classe aereo" << endl;
}

void aereo::howWillSend(string _pacote){
    cout << "Enviando: " << _pacote << "..."<<endl; 
}
aereo &aereo::getInstance(){
    if(instance == nullptr){
        instance = new aereo();
    }
    return (*instance);
}