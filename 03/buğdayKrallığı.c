//
//  main.c
// buğday krallığı
//
//  Created by SILANUR ÇANDIR on 10.11.2024.
//

#include <stdio.h>
/*
 According to legend, when chess was first discovered years ago, the king
 of that country liked this game very much and wanted to give kilos of
 gold to the person who discovered the game.
 The person who discovered the game was a scholar, and instead of taking
 the gold, he made an offer to the king: The scholar asked the king to pay
 1 wheat for the first square of the chessboard, 2 wheat for the second
 square, 8 wheat for the 3 square, and so on, 2 times the previous one
 for all other squares. he wanted wheat.
 The king thought it was a good deal and accepted the offer.
 Let's write a program that calculates how many grains of wheat the king should give

 */
int main(void) {
    int i;
    double wheat=1,sumWheat=0;
    // there is 64 square
   
    for (i=1;i<=64;i++) {
        printf("%d. square:%lf wheat\n",i,wheat);
        sumWheat+=wheat;
        wheat*=2;
    }
    printf("sum wheat:%lf\n",sumWheat);
    return 0;
}
