#include "../includes/teletransporte.hpp"
#include <iostream>

using namespace std;

TeleTransporte::TeleTransporte(/* args */)
{
}

TeleTransporte::~TeleTransporte()
{
}

void  TeleTransporte::howWillSend(string _pacote){
    cout << "Enviando " << _pacote << "..." << endl;
}