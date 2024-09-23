#include "../includes/terrestre.hpp"

#include <iostream>

using namespace std;
Terrestre *Terrestre::instance = nullptr;
Terrestre::Terrestre(){
    cout<<"Chamei a classe Terrestre"<<endl;
}
void Terrestre::howWillSend(string _pacote){
    cout<<"Enviando: "<< _pacote<< "..."<<endl; 
}
Terrestre &Terrestre::getInstance(){
    if(instance == nullptr){
        instance = new Terrestre();
    }
    return (*instance);
}
