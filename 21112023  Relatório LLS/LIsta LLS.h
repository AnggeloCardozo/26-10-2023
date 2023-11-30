#ifndef Lista LLS
#define Lista LLS

#define TAMANHO_MAXIMO 100

typedef struct {
    int elementos[TAMANHO_MAXIMO];
    int tamanho;
} ListaLinear;

void criar_lista(ListaLinear* lista);
void inserir_elemento(ListaLinear* lista, int elemento);
void inserir_elemento_ordenado(ListaLinear* lista, int elemento);
void eliminar_elemento(ListaLinear* lista, int chave);

#endif
