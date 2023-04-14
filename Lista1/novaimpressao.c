#include <stdio.h>
#include <stdlib.h>

typedef struct celula 
{
    int dado;
    struct celula *prox;
} celula;

// void imprime (celula *le)
// {
//     celula *aux;
//     for (aux = le->prox; aux != NULL; aux = aux->prox)
//     {
//         printf("%d -> ", aux->dado);
//     }
//     printf("NULL");
// }

// void imprime_rec (celula *le)
// {
//     if ((le->prox)==NULL)
//     {
//         printf("NULL");
//     }
//     else
//     {
//         printf("%d -> ", le->prox->dado);
//         imprime_rec(le->prox);
//     }
// }

void imprime_rec(celula *le)
{
    if (le->prox!=NULL)
    {
        printf("%d -> ", le->prox->dado);
        imprime_rec(le->prox);
    }
    else
    {
        printf("NULL\n");
    }
}

void imprime(celula *le)
{
    celula *cel;
    for (cel = le->prox; cel != NULL; cel = cel->prox)
    {
        printf("%d -> ", cel->dado);
    }
    printf("NULL\n");
}