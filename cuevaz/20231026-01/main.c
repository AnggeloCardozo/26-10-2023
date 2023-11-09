#include <stdio.h>
#include "pessoa.h"

int main() {
    Pessoa pessoa1;
    Pessoa *ponteiroPessoa = &pessoa1;

    preencherDados(ponteiroPessoa, "Anggelo Cardozo Moreira Abreu", "13/03/2004", "919.624.802-59");
    imprimirDados(ponteiroPessoa);

    return 0;
}