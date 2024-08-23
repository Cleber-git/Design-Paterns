#pragma once
#include "logistics.hpp"

class aereo:public logistics
{
private:
    aereo(/* args */);
    static aereo *instance;
    aereo(const aereo&) = delete;
public:
    ~aereo();
    void howWillSend(std::string _pacote) override;
    static aereo &getInstance();
};

