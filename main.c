#include <stdio.h>
#include <stdlib.h>

#include "card.h"

int main(void) {
    printf("Hello World! \n");

    Card* karte = createCard("ein name", "text");

    printCard(karte);

    deleteCard(karte);

    return 0;
}
