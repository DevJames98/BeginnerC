#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "playingCard.h"


int main( int argc, char *argv[] )
{
     
   //TODO: CORE PROBLEM
   //Your core problem should implement the getRandomCard function
   // Uncomment the two lines below and implement your the getRandomCard function
   
    PlayingCard card = getRandomCard();
    displayCard(card);


   //TODO: ADDITIONAL CHALLENGE PROBLEM
   // The challenge problem implements the shuffle deck function
   // Uncomment the three lines below and implement the shuffleDeck function
      
    //PlayingCard shuffled_deck[52];
    //shuffleDeck( shuffled_deck );
    //displayCardDeck(shuffled_deck);
    
    return 0;
}