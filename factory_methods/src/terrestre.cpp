#include "../includes/terrestre.hpp"

#include <iostream>

using namespace std;
terrestre *terrestre::instance = nullptr;
terrestre::terrestre(){
    cout<<"Chamei a classe terrestre"<<endl;
}
void terrestre::howWillSend(string _pacote){
    cout<<"Enviando: "<< _pacote<< "..."<<endl; 
}
terrestre &terrestre::getInstance(){
    if(instance == nullptr){
        instance = new terrestre();
    }
    return (*instance);
}
