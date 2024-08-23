#include "../includes/subterreo.hpp"

#include <iostream> 

using namespace std;
subterreo::subterreo(){
    cout << "Chamei o subterreo" << endl;
}

void subterreo::howWillSend(string _produto){
    cout << "Enviando: " << _produto << "..." << endl;
}
