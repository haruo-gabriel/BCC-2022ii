typedef struct cel {
  char *chave;
  struct cel *esq;
  struct cel *dir; 
} node;

typedef node *item;

typedef struct {
  item *v; 
  int ini; 
  int fim; 
  int max; 
} fila;

fila *criaFila ();
void destroiFila (fila *f);
int filaVazia (fila *f);
item primeiroFila (fila *f);
void insereFila (fila *f, item x);
item removeFila (fila *f);
void aumentaFila (fila *f);
 