#include "dominios.hpp"
#include <stdexcept>
#include <string>
#include <cctype>

using namespace std;

void Numero::validar(int valor) {
    if(valor < 1 || valor > 999) {
        throw invalid_argument("Numero invalido. O valor deve estar entre 001 e 999.");
    }
}

void Numero::setValor(int novoValor) {
    validar(novoValor);
    this->valor = novoValor;
}

void Senha::validar(string valor) {
    const int TAMANHO = 5;

    if(valor.length() != TAMANHO) {
        throw invalid_argument("Senha deve conter 5 caracteres.");
    }

    int temDigito = 0;
    int temMaiuscula = 0;
    int temMinuscula = 0;
    int temEspecial = 0;

    const string CARACTERES_ESPECIAIS = "!\"#$%&?";

    for(int i = 0; i < TAMANHO; i++) {
        char c = valor[i];

        if (isdigit(c)) {
            temDigito = 1;
        }
        else if (isupper(c)) {
            temMaiuscula = 1;
        }
        else if (islower(c)) {
            temMinuscula = 1;
        }
        else if (CARACTERES_ESPECIAIS.find(c) != string::npos) {
            temEspecial = 1;
        }
        else {
            throw invalid_argument("Caracter invalido. Use letra (a-z, A-Z), digito (0-9) ou especial (!\"#$%&?).");
        }
    }

    if(temDigito == 0 || temMaiuscula == 0 || temMinuscula == 0 || temEspecial == 0) {
        throw invalid_argument("Senha deve conter pelo menos uma letra minuscula, uma maiuscula, um digito e um caracter especial.");
    }

    for(int i = 0; i < TAMANHO - 1; i++) {
        char atual = valor[i];
        char proximo = valor[i+1];

        if(isalpha(atual) && isalpha(proximo)) {
            throw invalid_argument("Letra nao pode ser seguida por letra.");
        }
        if(isdigit(atual) && isdigit(proximo)) {
            throw invalid_argument("Digito nao pode ser seguido por digito.");
        }
    }
}

void Senha::setValor(string novoValor) {
    validar(novoValor);
    this->valor = novoValor;
}

void Endereco::validar(string valor) {
    const int TAMANHO_MIN = 5;
    const int TAMANHO_MAX = 30;
    const string CARACTERES_ESPECIAIS = ",. ";

    if(valor.length() < TAMANHO_MIN || valor.length() > TAMANHO_MAX) {
        throw invalid_argument("Endereço deve conter entre 5 e 30 caracteres.");
    }

    for(int i = 0; i < valor.length(); i++) {
        char c = valor[i];

        if (!(isalnum(c) || CARACTERES_ESPECIAIS.find(c) != string::npos)) {
            throw invalid_argument("Caracter invalido. Use letra (a-z, A-Z), digito (0-9) ou especial (., ).");
        }

        if((i == 0 || i == valor.length()-1) && CARACTERES_ESPECIAIS.find(c) != string::npos) {
            throw invalid_argument("Primeiro e último caracter não pode ser vírgula, ponto ou espaço em branco.");
        }
    }

    for(int i = 0; i < valor.length() - 1; i++) {
        char atual = valor[i];
        char proximo = valor[i+1];

        if(atual == ',' && (proximo == ',' || proximo == '.')) {
            throw invalid_argument("Vírgula não pode ser seguida por vírgula ou ponto.");
        }
        if(atual == '.' && (proximo == ',' || proximo == '.')) {
            throw invalid_argument("Ponto não pode ser seguido por vírgula ou ponto.");
        }
        if(atual == ' ' && !isalnum(proximo)) {
            throw invalid_argument("Espaco em branco deve ser seguido por letra ou digito.");
        }
    }
}

void Endereco::setValor(string novoValor) {
    validar(novoValor);
    this->valor = novoValor;
}
