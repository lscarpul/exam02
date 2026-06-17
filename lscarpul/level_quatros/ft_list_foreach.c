#include "ft_list_foreach.h"
#include <stdio.h>
void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_list *start = begin_list;
    if(!begin_list || !f)
        return;
    while(start != 0)
    {
        (*f)(start->data);
        start = start->next;
    }

}

void stampa(void *dato)
{
    printf("%s\n", (char *)dato);
}

// 3. IL MAIN SUPER SEMPLICE
int main(void)
{
    // Creiamo 3 nodi come semplici variabili (senza malloc)
    t_list nodo1, nodo2, nodo3;

    // Riempiamo i nodi con del testo
    nodo1.data = "Primo";
    nodo2.data = "Secondo";
    nodo3.data = "Terzo";

    // Li agganciamo l'uno all'altro usando la '&' (indirizzo di memoria)
    nodo1.next = &nodo2;
    nodo2.next = &nodo3;
    nodo3.next = 0; // L'ultimo punta a NULL per fermare il ciclo

    // Chiamiamo la tua funzione passandole l'indirizzo del primo nodo e l'azione
    ft_list_foreach(&nodo1, stampa);

    return (0);
}