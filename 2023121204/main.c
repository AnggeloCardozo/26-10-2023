#include <stdio.h>
#include "listas.h"

int main() {
  Lista* l1 = criar_lista();
  Lista* l2 = criar_lista();
  Lista* l3 = criar_lista();

  inserir_aluno(l1, "Augusto", 'D');
  inserir_aluno(l1, "Barbara", 'D');
  inserir_aluno(l1, "Caroline", 'D');
  inserir_aluno(l1, "Danielle", 'D');

  inserir_aluno(l2, "Evanikdo", 'C');
  inserir_aluno(l2, "Fabricio", 'C');
  inserir_aluno(l2, "Geovanna", 'C');
  inserir_aluno(l2, "Joice", 'C');

  inserir_aluno(l3, "Livia", 'L');
  inserir_aluno(l3, "Mario", 'L');
  inserir_aluno(l3, "Nayara", 'L');
  inserir_aluno(l3, "Oracio", 'L');
  inserir_aluno(l3, "Savio", 'L');
  inserir_aluno(l3, "Wellington", 'L');
  inserir_aluno(l3, "Yohana", 'L');

  printf("Lista l1 (A-D): ");
  exibir_lista(l1, 'D');

  printf("Lista l2 (E-J): ");
  exibir_lista(l2, 'C');

  printf("Lista l3 (L-Y): ");
  exibir_lista(l3, 'L');

  liberar_lista(l1);
  liberar_lista(l2);
  liberar_lista(l3);


  return 0;
}