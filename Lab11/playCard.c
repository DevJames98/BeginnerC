#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>
#include "playingCard.h"

char validValues[13] = {'2', '3','4','5','6','7','8','9','T','J','Q','K','A'};
char *validSuits[4] = {"SPADES", "DIAMONDS", "HEARTS", "CLUBS"};

//Core Problem
PlayingCard getRandomCard(){
    //modula 13 + modula 4
    PlayingCard card;
    int seed = time(NULL);
    srand(seed);
    int cardVal = rand() % 13;
    int cardSuit = rand() % 4;
    
    card.value = validValues[cardVal];
    //card.suit = validSuits[cardSuit];
    strcpy(card.suit, validSuits[cardSuit]);
    displayCard(card);
    
}



void displayCard(PlayingCard card)
{
    printf("%c of %s\n", card.value, card.suit);
}


void displayCardDeck( PlayingCard deck[] )
{
    printf("------------------\n");
    for(int i=0;i<52;i++)
        displayCard(deck[i]);
}