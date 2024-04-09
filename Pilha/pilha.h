/* Definição de um novo tipo: Pilha
 */
typedef struct pilha Pilha;

/* Função que cria uma pilha
 */
Pilha *pilha_cria(void);

/* Função que armazena elementos na pilha
 */
void pilha_push(Pilha *p, float v);

/* Função que tira elementos da pilha
 */
float pilha_pop(Pilha *p);

/* Função que verifica se a pilha esta vazia
 */
int pilha_vazia(Pilha *p);

/* Função que libera memória alocada dinâmicamente para a struct Pilha
 */
void pilha_libera(Pilha *p);

/* Função que imprime os dados da pilha
 */
void imprime_pilha(Pilha *p);