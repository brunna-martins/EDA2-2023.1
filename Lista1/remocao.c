#include <stdio.h>
#include <stdlib.h>

typedef struct celula 
{
    int dado;
    struct celula *prox;
} celula;

int remove_depois (celula *p)
{
    celula *remover;
    remover = p->prox;
    if (remover == NULL)
    {
        return 1;
    }
    else
    {
        p->prox = remover->prox;
        free(remover);
        return 0;
    }
}

void remove_elemento(celula *le, int x)
{
   celula *aux1, *aux2;
   aux1 = le;
   aux2 = le->prox;
   while (aux2 != NULL && aux2->dado != x) 
   {
      aux1 = aux2;
      aux2 = aux2->prox;
   }
   if (aux2 != NULL) 
   {
      aux1->prox = aux2->prox;
      free (aux2);
   }
}

void remove_todos_elementos (celula *le, int x)
{
    celula *aux1, *aux2, *remover;
    aux1 = le;
    aux2 = le->prox;
    while (aux2 != NULL) 
    {
        aux1 = aux2;
        aux2 = aux2->prox;
        if (aux2->dado == x && aux2 != NULL) 
        {
            remover = aux2;
            aux2 = aux2->prox;
            aux1->prox = aux2;
            free(remover);
        }
    }
}