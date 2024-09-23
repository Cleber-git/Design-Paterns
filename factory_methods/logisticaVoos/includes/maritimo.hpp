#pragma once
#include "logistics.hpp"

class Maritimo: public Logistics
{
private:
    Maritimo(/* args */);
    static Maritimo *instance;
    Maritimo(const Maritimo&) = delete;
public:
    ~Maritimo();
    void howWillSend(std::string _pacote) override;
    static Maritimo &getInstance();

};
