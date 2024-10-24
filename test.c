#include <assert.h>
#include "stack.h"  // Eller queue.h afhængig af opgaven

int main() {
    // Opret en ny stack
    stack s;
    initialize(&s);

    // Test 1: Tjek om stack er tom efter initialization
    assert(empty(&s) == 1);

    // Test 2: Pushe et element og tjek om det kan poppes tilbage
    int x = 10;
    push(x, &s);
    int y = pop(&s);
    assert(x == y);  // De to værdier bør være ens
    assert(empty(&s) == 1);  // Stacken bør være tom igen

    // Test 3: Pushe to elementer og tjekke rækkefølgen
    int x0 = 20, x1 = 30;
    push(x0, &s);
    push(x1, &s);
    int y0 = pop(&s);
    int y1 = pop(&s);
    assert(x1 == y0);  // Stacken er LIFO, så x1 bør komme ud først
    assert(x0 == y1);  // Derefter x0
    assert(empty(&s) == 1);  // Stacken bør igen være tom

    // Print en succesmeddelelse
    printf("Alle tests er bestået!\n");

    return 0;
}
