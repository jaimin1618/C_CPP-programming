#include<iostream>
#include<ctime>
using namespace std;
/*
INTRO
king, queen, joker - computer shuffles these card;
player has to guess positon of queen, for true he gets 3*bet_amount, for lose he loses bet bet_amount

initially, player has 100$;
*/

int CASH = 100;
void Play(int BET) {
    char card[3] = {'J', 'Q', 'K'};
    printf("shuffling...\n");
    
    // shuffling;
    srand(time(NULL));
    int i;
    for (int i = 0; i < 5; ++i) {
        int X = rand() % 3; // 0 1 2 out only
        int Y = rand() % 3; // for 0 1 2
        swap(X, Y);
    }
    int playerGuess;
    cout << "What is your guess for queen's position(1, 2, or 3): ";
    cin >> playerGuess;
    if (card[playerGuess] - 1 == 'Q') {
        CASH += 3 * BET;
        printf("You win ! result => | %c %c %c |, total cash = %d", card[0], card[1], card[2], CASH);
    }else {
        CASH -= BET;
        printf("You loose ! result => | %c %c %c | total cash = %d", card[0], card[1], card[2], CASH);
    }
    
}


// main -----------------------------------------------------------
int main(int argc, char **argv) {
    int BET;
    
    cout << "\n--------- Welcome gambling Casino ---------\n";
    cout << "Total cash = " << CASH << endl;
    while (CASH > 0)  {
        cout << "\nwhat's your bet? $: ";
        cin >> BET;
        if (BET == 0 || BET > CASH) break;
        Play(BET);
    }
    
    return 0;
}
//-----------------------------------------------------------------
