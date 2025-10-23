#ifndef ENTIDADES_HPP_INCLUDED
#define ENTIDADES_HPP_INCLUDED

#include "dominios.hpp"
#include <stdexcept>
#include <string>
#include <cctype>

using namespace std;

class Pessoa {
    private:
        Nome nome;
        EMAIL email;
    public:
        void setNome(const Nome& novoNome);
        void setEmail(const EMAIL& novoEmail);
        Nome getNome() const;
        EMAIL getEmail() const;
};

inline void Pessoa::setNome(const Nome& novoNome) {
    this->nome = novoNome;
}

inline Nome Pessoa::getNome() const {
    return nome;
}

inline void Pessoa::setEmail(const EMAIL& novoEmail) {
    this->email = novoEmail;
}

inline EMAIL Pessoa::getEmail() const {
    return email;
}

class Gerente : public Pessoa {
    private:
        Ramal ramal;
        Senha senha;
    public:
        void setRamal(const Ramal& novoRamal);
        void setSenha(const Senha& novaSenha);
        Ramal getRamal() const;
        Senha getSenha() const;
};

inline void Gerente::setRamal(const Ramal& novoRamal) {
    this->ramal = novoRamal;
}

inline Ramal Gerente::getRamal() const {
    return ramal;
}

inline void Gerente::setSenha(const Senha& novaSenha) {
    this->senha = novaSenha;
}

inline Senha Gerente::getSenha() const{
    return senha;
}

class Hospede : public Pessoa {
    private:
        Endereco endereco;
        Cartao cartao;
    public:
        void setEndereco(const Endereco& novoEndereco);
        void setCartao(const Cartao& novoCartao);
        Endereco getEndereco() const;
        Cartao getCartao() const;
};

inline void Hospede::setEndereco(const Endereco& novoEndereco) {
    this->endereco = novoEndereco;
}

inline Endereco Hospede::getEndereco() const {
    return endereco;
}

inline void Hospede::setCartao(const Cartao& novoCartao) {
    this->cartao = novoCartao;
}

inline Cartao Hospede::getCartao() const {
    return cartao;
}

class Hotel {
    private:
        Nome nome;
        Endereco endereco;
        Telefone telefone;
        Codigo codigo;
    public:
        void setNome(const Nome& novoNome);
        void setEndereco(const Endereco& novoEndereco);
        void setTelefone(const Telefone& novoTelefone);
        void setCodigo(const Codigo& novoCodigo);
        Nome getNome() const;
        Endereco getEndereco() const;
        Telefone getTelefone() const;
        Codigo getCodigo() const;
};

inline void Hotel::setNome(const Nome& novoNome) {
    this->nome = novoNome;
}

inline Nome Hotel::getNome() const {
    return nome;
}

inline void Hotel::setEndereco(const Endereco& novoEndereco) {
    this->endereco = novoEndereco;
}

inline Endereco Hotel::getEndereco() const {
    return endereco;
}

inline void Hotel::setTelefone(const Telefone& novoTelefone) {
    this->telefone = novoTelefone;
}

inline Telefone Hotel::getTelefone() const {
    return telefone;
}

inline void Hotel::setCodigo(const Codigo& novoCodigo) {
    this->codigo = novoCodigo;
}

inline Codigo Hotel::getCodigo() const {
    return codigo;
}

class Quarto {
    private:
        Numero numero;
        Capacidade capacidade;
        Dinheiro diaria;
        Ramal ramal;
    public:
        void setNumero(const Numero& novoNumero);
        void setCapacidade(const Capacidade& novaCapacidade);
        void setDiaria(const Dinheiro& novaDiaria);
        void setRamal(const Ramal& novoRamal);
        Numero getNumero() const;
        Capacidade getCapacidade() const;
        Dinheiro getDiaria() const;
        Ramal getRamal() const;
};

inline void Quarto::setNumero(const Numero& novoNumero) {
    this->numero = novoNumero;
}

inline Numero Quarto::getNumero() const {
    return numero;
}

inline void Quarto::setCapacidade(const Capacidade& novaCapacidade) {
    this->capacidade = novaCapacidade;
}

inline Capacidade Quarto::getCapacidade() const {
    return capacidade;
}

inline void Quarto::setDiaria(const Dinheiro& novaDiaria) {
    this->diaria = novaDiaria;
}

inline Dinheiro Quarto::getDiaria() const {
    return diaria;
}

inline void Quarto::setRamal(const Ramal& novoRamal) {
    this->ramal = novoRamal;
}

inline Ramal Quarto::getRamal() const {
    return ramal;
}

class Reserva {
    private:
        Data chegada;
        Data partida;
        Dinheiro valor;
        Codigo codigo;
    public:
        void setChegada(const Data& novaChegada);
        void setPartida(const Data& novaPartida);
        void setValor(const Dinheiro& novoValor);
        void setCodigo(const Codigo& novoCodigo);
        Data getChegada() const;
        Data getPartida() const;
        Dinheiro getValor() const;
        Codigo getCodigo() const;
};

inline void Reserva::setChegada(const Data& novaChegada) {
    this->chegada = novaChegada;
}

inline Data Reserva::getChegada() const {
    return chegada;
}

inline void Reserva::setPartida(const Data& novaPartida) {
    this->partida = novaPartida;
}

inline Data Reserva::getPartida() const {
    return partida;
}

inline void Reserva::setValor(const Dinheiro& novoValor) {
    this->valor = novoValor;
}

inline Dinheiro Reserva::getValor() const {
    return valor;
}

inline void Reserva::setCodigo(const Codigo& novoCodigo) {
    this->codigo = novoCodigo;
}

inline Codigo Reserva::getCodigo() const {
    return codigo;
}

#endif // ENTIDADES_HPP_INCLUDED
