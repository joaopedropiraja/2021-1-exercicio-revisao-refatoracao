#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"

class Casa : public Imovel {

public:
    Casa();
    Casa(const int&, const int&, const int&, const double&, const double&, const Cliente&, const string&);
    // Função para printar informações essenciais a respeito do imóvel, como o valor total a ser pago, número de cômodos e etc
    void print() const override;
};

#endif