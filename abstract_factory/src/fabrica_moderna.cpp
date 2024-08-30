#include "../include/fabrica_moderna.hpp"
#include "../include/cadeira_moderna.hpp"
#include "../include/sofa_moderno.hpp"
#include "../include/MDC_moderna.hpp"

using namespace std;

FabricaModerna::FabricaModerna(){
    cout << "Chamei a fábrica moderna" << endl;
}

Cadeira *FabricaModerna::criarCadeira(){
    return new CadeiraModerna();
}

MesaDeCentro *FabricaModerna::criarMesa(){
    return new MDCModerna();
}

Sofa *FabricaModerna::criarSofa(){
    return new SofaModerno(); 
}
