#include "logistics.hpp"

class Subterreo : public Logistics
{
private:
    
public:
    Subterreo();
    ~Subterreo();
    void howWillSend(std::string _pacote)override;
    
};

