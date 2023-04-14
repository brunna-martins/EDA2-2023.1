#include <stdio.h>
#include <stdlib.h>

typedef struct celula 
{
    int dado;
    struct celula *prox;
} celula;

void insere_antes(celula *le, int x, int y)
{
   celula *aux1, *aux2, *nova_celula;
   nova_celula = malloc (sizeof (celula));
   nova_celula->dado = x;
   aux1 = le;
   aux2 = le->prox;
   while (aux2 != NULL && aux2->dado != y) {
      aux1 = aux2;
      aux2 = aux2->prox;
   }
   nova_celula->prox = aux2;
   aux1->prox = nova_celula;
}

void insere_inicio(celula *le, int x)
{
   celula *nova_celula;
   nova_celula = malloc(sizeof (celula));
   nova_celula->dado = x;
   nova_celula->prox = le->prox;
   le->prox = nova_celula;
}

// int main (void) 
// {
//     celula *le; // cabeça
//     le = malloc (sizeof (celula));
//     le->prox = NULL;
// }