#include "logistics.hpp"

class subterreo : public logistics
{
private:
    
public:
    subterreo();
    ~subterreo();
    void howWillSend(std::string _pacote)override;
    
};

