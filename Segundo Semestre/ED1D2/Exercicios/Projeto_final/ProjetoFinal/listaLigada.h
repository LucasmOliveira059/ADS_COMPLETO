typedef struct funcionario{
    int id;
    char nome[41];
    char endereco[41];
    int idade;
    char cargo[31];
    float salario;
}FUNCIONARIO;

struct elemento{
    FUNCIONARIO dados;
    struct elemento *prox;
};

typedef struct elemento* Lista;

Lista *criaLista();

int menuInit(menu);

FUNCIONARIO coletaDados();

int insere_lista_ordenada(Lista *li, FUNCIONARIO dados_func);

int listaVazia(Lista *li);

int tamLista(Lista *li);

int remove_lista(Lista *li, int id);

void apagaLista(Lista *li);

int consulta_lista_id(Lista *li, int identificador, FUNCIONARIO *dados_func);

aloca(int n);
realoca(FUNCIONARIO *cad, int n);
