 
#include <iostream>

using namespace std;


int main()
{
	int shoe[13] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 10 ,10, 10, 11 };
	int startOption;

	cout << "Welcome to blackjack!\n";
	cout << "Press 1 to start game : ";
	cin >> startOption;

	while (startOption == 1) {

		cout << "The game has started!" << endl;


		int dealerHand[10];
		int playerHand[10];

		for (int i = 0; i < 3; i++) {

			int Random = rand() % 13;
	
			if (i == 0) {
				dealerHand[0] = shoe[Random];

			}
			else if (i == 1) {
				playerHand[0] = shoe[Random];
			}
			else if (i == 2) {
				playerHand[1] = shoe[Random];
			}
				
		}

		cout << "The dealers first card is: " << dealerHand[0] << endl << "Your first two cards are: " << playerHand[0] << " & " << playerHand[1] << endl;

		int playerCardSum = playerHand[0] + playerHand[1];
		int stayOrHit;
		int Random = rand() % 13;
		int dealerCardSum = dealerHand[0];

		cout << "The sum of your cards is: " << playerCardSum << endl;

		cout << endl << "Would you like to stay or hit? Press 1 to stay or 0 to hit: ";
		
		cin >> stayOrHit;

		while (stayOrHit != 3) {

			if (stayOrHit == 1) {
				cout << "You have chose to stay" << endl;

				while (dealerCardSum < 21 && dealerCardSum < playerCardSum) {
					int i = 1;
					int Random = rand() % 13;
					dealerHand[i] = shoe[Random];
					dealerCardSum = dealerCardSum + dealerHand[i];


					cout << "The dealer's next card is: " << dealerHand[i] << endl;
					cout << "The sum of the dealers cards is " << dealerCardSum << endl;
				}

				if (dealerCardSum == 21) {
					cout << "You lose!" << endl;
					stayOrHit = 3;
				}
				else if (dealerCardSum > 21) {
					cout << "You win!" << endl;
					stayOrHit = 3;
				}
				else if (dealerCardSum > playerCardSum) {
					cout << "You lose!" << endl;
					stayOrHit = 3;
				}

			}
			else while (stayOrHit == 0) {
				cout << "You have chose to hit" << endl;
				int Random = rand() % 13;

				playerHand[2] = shoe[Random];
				playerCardSum = playerCardSum + playerHand[2];

				cout << "The card you have drawn is a : " << playerHand[2] << endl << "The sum of your cards is: " << playerCardSum << endl;

				if (playerCardSum == 21) {
					cout << "You win!" << endl;
					stayOrHit = 3;
				}
				else if (playerCardSum > 21) {
					cout << "You lose!" << endl;
					stayOrHit = 3;
				}
				else {
					cout << "Would you like to stay or hit? Press 1 to stay or 0 to hit: " << endl;
					cin >> stayOrHit;
				}
			}
		}

		cout << "Press 1 to play again: ";
		cin >> startOption;

	}


	cout << "Goodbye!";






















































}
