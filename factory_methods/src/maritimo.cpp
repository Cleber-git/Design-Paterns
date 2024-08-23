#include "../includes/maritimo.hpp"

#include <iostream>

using namespace std;
maritimo *maritimo::instance = nullptr;
maritimo::maritimo(){
    cout << "Chamei a classe maritimo"<<endl; 
}
void maritimo::howWillSend(string _pacote){
    cout << "Enviando: " << _pacote << "..." << endl; 
}
maritimo &maritimo::getInstance(){
    if(instance == nullptr){
        instance = new maritimo();
    }
}