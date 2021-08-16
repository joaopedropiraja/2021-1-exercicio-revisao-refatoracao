#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include "Cliente.hpp" 

class Imovel {    

public:
    Imovel();
    Imovel(const int&, const int&, const int&, const double&, const double&, const Cliente&, const string&);
   // Funções para acesso aos atributos privados da classe
    int get_quartos() const;
    int get_banheiros() const;
    int get_vagas() const;
    double get_area() const;
    double get_valor_metro2() const;
    // Funções para alteração dos atributos privados da classe
    void set_quartos(const int&);
    void set_banheiros(const int&);
    void set_vagas(const int&);
    void set_area(const double&);
    void set_valor_metro2(const double&);
    void set_vendedor(const Cliente&);
    void set_corretor(const string&);
    // Função para printar o nome do cliente e corretor do imóvel
    virtual void print();
    // Funções abstratas a serem implementadas pelas classes derivadas
    virtual double valor_comissao() = 0;
    virtual double valor_imovel_sem_comissao() = 0;
    virtual double valor_total_venda() = 0;

private:
    Cliente vendedor;
    string corretor;
    double area;
    int quantidade_quartos; 
    int quantidade_banheiros; 
    int quantidade_vagas; 
    double valor_metro2;
};

#endif