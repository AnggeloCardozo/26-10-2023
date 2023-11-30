#ifndef lista.h
#define lista.h

#define MAX 100

typedef struct {
    int matricula[MAX];
    int qtd;
} Lista;

void inicializarLista(Lista* l);
void liberarLista(Lista* l);
int quantidadeElementos(Lista* l);
int listaCheia(Lista* l);
int listaVazia(Lista* l);
void exibirLista(Lista* l);
int inserirOrdenado(Lista* l, int mat);
int excluirElemento(Lista* l, int mat);
int alterarMatricula(Lista* l, int mat, int nova_mat);

#endif // lista.h
