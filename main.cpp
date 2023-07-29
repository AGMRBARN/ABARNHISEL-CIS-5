/* 
 * File:   x
 * Author: Alma Barnhisel
 * Created on July 20, 2023 
 * Purpose:  Sorry! Board Game Version 1
 */
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <string>
#include <ctime>

using namespace std;
// Function to get a random card value (1 to 6)
int getRandom() {
    return rand() % 6 + 1;
}

// Function to display the board
void displayBoard(int player1Pos, int player2Pos) {
    cout << "--------------------------------------" << endl;
    for (int i = 0; i <= 20; ++i) {
        if (i == player1Pos && i == player2Pos) {
            cout << "P1P2 ";
        } else if (i == player1Pos) {
            cout << " P1  ";
        } else if (i == player2Pos) {
            cout << " P2  ";
        } else {
            cout << "  " << i << "  ";
        }
    }
   
    return 0;
}
