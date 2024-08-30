#pragma once

#include <iostream>
#include <string>

/**
 * Classe abstrata que vai ser produto de uma fábrica abstrata
 */
class Cadeira
{
private:
    /* data */
public:
    /**
     * Método virtual puro que vai ser implementado nas subclasses
     */
    virtual void sentar()=0; 

};
