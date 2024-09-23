#include "../includes/maritimo.hpp"

#include <iostream>

using namespace std;
Maritimo *Maritimo::instance = nullptr;
Maritimo::Maritimo(){
    cout << "Chamei a classe Maritimo"<<endl; 
}
void Maritimo::howWillSend(string _pacote){
    cout << "Enviando: " << _pacote << "..." << endl; 
}
Maritimo &Maritimo::getInstance(){
    if(instance == nullptr){
        instance = new Maritimo();
    }
}