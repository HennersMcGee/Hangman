//Testing functions file

// Any libraries required
#include <iostream>
#include <vector>

// This function welcomes the player and will lead to a game whether the player wants to or not
void welcome() {
	std::cout << "Welcome! Would you like to play a game of hangman?\n";
	std::string play;
	std::cin >> play;
	if(play == "YES" or play == "Yes" or play == "yes" or play == "Y" or play == "y") {
	    std::cout << "\nGreat!\n";
	} else {
	    std::cout << "\nThen I do not understand why you would run this program. Starting game anyway.\n";
	}
}

// Function for user to guess letter
void guess(std::string word, std::vector<char> guessed_letters) {
    std::cout << "Guess a letter: ";
    std::string letter;
    std::cin >> letter;
    bool incorrect = true;
    
    // Check if letter has already been guessed
    for (int i = 0; i < guessed_letters.size(); i++) {
        if (guessed_letters[i] == letter) {
            std::cout << "\nYou have already guessed that letter, pick another.\n";
            return;
        }
    }
    
    // Check if letter is in word
    for (int i = 0; i < word.size(); i++) {
        if (word[i] == letter) {
            std::cout << "\nGood guess.\n";
            incorrect = true;
        }
    }
    
    if (incorrect) {
        incorrect_guesses++;
    }
    
}

