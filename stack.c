#include "stack.h"
#include <stdlib.h>
#include <stdio.h>

void initialize(stack *s) {
    // Initialiserer stakken til at være tom
    s->head = NULL;
}

void push(int x, stack *s) {
    // Alloker hukommelse til en ny node
    node *n = (node *)malloc(sizeof(node));
    if (n == NULL) {
        // Tjek for fejlsituation hvor malloc fejler
        printf("Memory allocation failed\n");
        exit(1);
    }

    // Sæt den nye nodes data og opdater links
    n->data = x;
    n->next = s->head;
    s->head = n; // Opdater head til den nye node
}

int pop(stack *s) {
    // Tjek om stakken er tom
    if (empty(s)) {
        return -1; // Returner -1 hvis stakken er tom
    }

    // Gem dataen fra den øverste node
    int gemtvardi = s->head->data;
    
    // Fjern den øverste node fra stakken
    node *temp = s->head;
    s->head = s->head->next;
    
    // Frigør hukommelsen for den fjernede node
    free(temp);

    // Returner den gemte værdi
    return gemtvardi;
}

bool empty(stack *s) {
    // Tjek om stakken er tom ved at se om head er NULL
    return s->head == NULL;
}

bool full(stack *s) {
    // Stakken kan ikke blive fuld når vi bruger en linked list
    return false;
}
