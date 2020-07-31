/******************************************************************************

Name: main.cpp
Author: Henry Letton
Purpose: Hangman guessing game

*******************************************************************************/

#include <iostream>
#include "header.hpp"
#include <vector>

int main() {
    
    //Define variables
	int word_length = 6;
	std::string word = "bubble";
	std::string word_guess = "______";
	int incorrect_guesses = 0;
	std::vector<char> guessed_letters;
	//bool incorrect_guess = false;
	
	
	welcome();
	
	while (incorrect_guesses < 6 and word != word_guess) {
	    guess(word, guessed_letters);
	}
}
