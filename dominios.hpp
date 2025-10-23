#ifndef DOMINIOS_HPP_INCLUDED
#define DOMINIOS_HPP_INCLUDED

#include <stdexcept>
#include <string>
#include <cctype>

using namespace std;

class Numero{
    private:
        int valor;
        void validar(int valor);
    public:
        void setValor(int novoValor);
        int getValor() const;
};

inline int Numero::getValor() const {
    return valor;
}

class Senha{
    private:
        string valor;
        void validar(string valor);
    public:
        void setValor(string novoValor);
        string getValor() const;
};

inline string Senha::getValor() const {
    return valor;
}

class Endereco {
    private:
        string valor;
        void validar(string valor);
    public:
        void setValor(string novoValor);
        string getValor() const;
};

inline string Endereco::getValor() const {
    return valor;
}

#endif // DOMINIOS_HPP_INCLUDED
