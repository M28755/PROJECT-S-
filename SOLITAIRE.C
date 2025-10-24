/*
solitaire game using c language
auther: OMONDI MICHAEL
DATE: 23/10/2025

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_CARDS 52      // total number of cards in a standard deck
#define MAX_PILES 7       // number of tableau piles
#define MAX_FOUNDATIONS 4 // number of foundation piles
#define MAX_FREECELLS 4   // number of freecell piles
#define EMPTY -1          // constant to represent empty pile
#define Rules() ;
typedef struct // pile structure
{
    int cards[MAX_CARDS];
    int top;
} pile;        // end of pile structure
typedef struct // game structure
{
    pile piles[MAX_PILES];            // tableau piles
    pile foundation[MAX_FOUNDATIONS]; // foundation piles
    pile freecells[MAX_FREECELLS];    // freecell piles
    pile stock;                       // stock pile
    pile waste;                       // waste pile

} game; // end of game structure
// fuction prototypes
void init_deck(int *deck)
{
    int i;

    for (i = 0; i < MAX_CARDS; i++) // looping through all cards
    {
        deck[i] = i; //  assigning values to deck array
    }
}
void shuffle_deck(int *init_deck) // function to shuffle the deck
{                                 // variable declaration
    int i, j, temp;
    srand(time(NULL));
    for (i = 0; i < MAX_CARDS; i++) // looping through all cards
    {
        j = rand() % MAX_CARDS; // generating random index
        // swapping
        temp = init_deck[i];         // assigning init_deck[i ] to temp
        init_deck[i] = init_deck[j]; // assigning init_deck[j] to init_deck[i]
        init_deck[j] = temp;         // assigning temp to init_deck[j]

    } // end for loop

} // end of shuffle_deck function
void init_game(game *g, int *shuffled_deck)
{
    int i, j, card_index = 0; // variable declaration
    // initialize tableau piles
    for (i = 0; i < MAX_PILES; i++) // looping through all tableau piles
    {
        g->piles[i].top = -1;    // setting top to -1 indicating empty pile
        for (j = 0; j <= i; j++) // looping through cards to be dealt to each pile
        {
            g->piles[i].cards[++(g->piles[i].top)] = shuffled_deck[card_index++]; // dealing cards to tableau piles

        } // end for loop

    } // end for loop
    // initialize foundation piles
    for (i = 0; i < MAX_FOUNDATIONS; i++) // looping through all foundation piles
    {
        g->foundation[i].top = -1; // setting top to -1 indicating empty piles

    } // end for loop
    // initialixe freecell piles
    for (i = 0; i < MAX_FREECELLS; i++) // llooping through all freecell piles
    {
        g->freecells[i].top = -1; // seting top to -1 indicating empty piles
    } // end for loop

    // initialize stock pile
    g->stock.top = -1;                       // setting top to -1 indicating empty pile
    for (i = card_index; i < MAX_CARDS; i++) // looping through remaining cards
    {
        g->stock.cards[++(g->stock.top)] = shuffled_deck[i]; // dealing remaining cerds to stock pile

    } // end for loop
    // initialize waste pile
    g->waste.top = -1;              // setting top to -1 indicating empty pile
    for (i = 0; i < MAX_CARDS; i++) // looping through all cards
    {
        g->waste.cards[i] = -1; // initializing waste pile cards to -1 indicating empty cards

    } // end for loop
    //
} // end of init_game function
int main()
{
    int i;
    int deck[MAX_CARDS];          // array to hold the initial deck
    int shuffled_deck[MAX_CARDS]; // array to hold the shuffled deck

    game g; // game structure variable declaration

    // initialize  and shuffle the deck
    init_deck(deck);    // initialize the deck
    shuffle_deck(deck); // shuffle the deck

    const char *suits[] = {"Spades", "Hearts", "Diamonds", "Clubs", "Spades"};
    const char *ranks[] = {"Ace", "2", "3", "4", "5", "6", "7", " 8", "9", "10", "Jack", "Queen", "King"};

    for (i = 0; i < MAX_CARDS; i++) // looping through all carsds
    {
        int card = shuffled_deck[i]; // getting the card from shuffled deck
        int suit = card / 13;        // calculating suit
        int rank = card % 13;        // calculating rank;

        // printing card details
        printf("%s of %s\n", ranks[rank], suits[suit]);
    }

    // initialize the game
    init_game(&g, shuffled_deck); // initialize the game with shffled deck

    int rules();
    return 0;

} // end of main function
int rules()
{ /*
    The goal of the game is to move all 52 cards into four foundation piles, organized by suit and ranked from Ace to King.
     */

    printf(".....................SOLITAIRE GAME RULES:.............................\n");
    printf("1. The game is played with a standard deck of 52 cards.\n");
    printf("2. The objective is to move all cards to the foundation piles, organized by suit from Ace to king.\n");
    printf("3. Cards can be moved between tableau piles, freecells, and foundation piles according to specific rules.\n");
    printf("4. Only one card can be moved at a time , exept when moving a sequence of cards in descending order and alternating colors.\n");
    printf("5. Freecells can hold only one card at a time.\n");
    printf("6. foundation piles must be built up in suit from Ace to King.\n");
    printf("7. tableau piles must be buit down in alternating colors.\n");
    printf("8. tableau piles can be fiiled with any card when empty.\n ");
    printf("9. The game is won when all cards are moved to the foundation piles.\n ");
    printf("10. Good luck and have fun playing solitaire!\n");
    return 0;
}
// end of solitaire game code
//  auther: OMONDI MICHAEL
// DATE: 23/10/2025
/*




*/
