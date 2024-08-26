#include "../includes/subterreo.hpp"

#include <iostream> 

using namespace std;
Subterreo::Subterreo(){
    cout << "Chamei o Subterreo" << endl;
}

void Subterreo::howWillSend(string _produto){
    cout << "Enviando: " << _produto << "..." << endl;
}
