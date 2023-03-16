#ifndef CARD
#define CARD

#include <stdio.h>

/**********************************************************/

typedef struct card {
    char* name;
    char* content;
} Card;

/*********************************************************/

Card* createCard(char* pName, char* pContent) {
    Card* karte;
    karte->name = pName;
    karte->content = pContent;

    return karte;
}

/*********************************************************/

void deleteCard(Card* card) {
    card->name = NULL;
    card->content = NULL;
    card = NULL;
}

/*********************************************************/

void printCard(Card* card) {
    printf("Name: \n");
    printf("\t %s \n", card->name);
    printf("Content: \n");
    printf("\t %s \n", card->content);
}

/*********************************************************/

#endif
