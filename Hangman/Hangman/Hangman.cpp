#include <iostream>
#include <vector>

void GameEnd(bool& game) {                                                                                          // Prompt the user for another game or exit
    std::string userIn;                                                                                             
    std::cout << "Would you like to play again? Y/N" << std::endl;
    std::cin >> userIn;
    if (userIn == "Y") {
        game = 1;
    }
    else if (userIn == "N") {
        game = 0;
    }
    else {
        std::cout << "hmm.. I'm not sure what you said there." << std::endl;
        GameEnd(game);
    }
}

void printState(int state) {                                                                                        // Simple way to print the boardstate each round
    if (state == 0) {                                                                                                   
        std::cout << "______________________________________________________________________" << std::endl;
        std::cout << "|                                                                    |" << std::endl;
        std::cout << "|                                                                    |" << std::endl;
        std::cout << "|                                                                    |" << std::endl;
        std::cout << "|                                                        _____       |" << std::endl;
        std::cout << "|                                                        |   |       |" << std::endl;
        std::cout << "|                                                            |       |" << std::endl;
        std::cout << "|                                                            |       |" << std::endl;
        std::cout << "|                                                            |       |" << std::endl;
        std::cout << "|                                                            |       |" << std::endl;
        std::cout << "|                                                            |       |" << std::endl;
        std::cout << "|                                             -------------------    |" << std::endl;
        std::cout << "|                                             |                 |    |" << std::endl;
        std::cout << "\\____________________________________________________________________/" << std::endl;
    }
    else if (state == 1) {
        std::cout << "______________________________________________________________________" << std::endl;
        std::cout << "|                                                                    |" << std::endl;
        std::cout << "|                                                                    |" << std::endl;
        std::cout << "|                                                                    |" << std::endl;
        std::cout << "|                                                        _____       |" << std::endl;
        std::cout << "|                                                        |   |       |" << std::endl;
        std::cout << "|                                                        o   |       |" << std::endl;
        std::cout << "|                                                            |       |" << std::endl;
        std::cout << "|                                                            |       |" << std::endl;
        std::cout << "|                                                            |       |" << std::endl;
        std::cout << "|                                                            |       |" << std::endl;
        std::cout << "|                                             -------------------    |" << std::endl;
        std::cout << "|                                             |                 |    |" << std::endl;
        std::cout << "\\____________________________________________________________________/" << std::endl;
    }
    else if (state == 2) {
        std::cout << "______________________________________________________________________" << std::endl;
        std::cout << "|                                                                    |" << std::endl;
        std::cout << "|                                                                    |" << std::endl;
        std::cout << "|                                                                    |" << std::endl;
        std::cout << "|                                                        _____       |" << std::endl;
        std::cout << "|                                                        |   |       |" << std::endl;
        std::cout << "|                                                        o   |       |" << std::endl;
        std::cout << "|                                                        |   |       |" << std::endl;
        std::cout << "|                                                            |       |" << std::endl;
        std::cout << "|                                                            |       |" << std::endl;
        std::cout << "|                                                            |       |" << std::endl;
        std::cout << "|                                             -------------------    |" << std::endl;
        std::cout << "|                                             |                 |    |" << std::endl;
        std::cout << "\\____________________________________________________________________/" << std::endl;
    }
    else if (state == 3) {
        std::cout << "______________________________________________________________________" << std::endl;
        std::cout << "|                                                                    |" << std::endl;
        std::cout << "|                                                                    |" << std::endl;
        std::cout << "|                                                                    |" << std::endl;
        std::cout << "|                                                        _____       |" << std::endl;
        std::cout << "|                                                        |   |       |" << std::endl;
        std::cout << "|                                                        o   |       |" << std::endl;
        std::cout << "|                                                        |\\  |       |" << std::endl;
        std::cout << "|                                                            |       |" << std::endl;
        std::cout << "|                                                            |       |" << std::endl;
        std::cout << "|                                                            |       |" << std::endl;
        std::cout << "|                                             -------------------    |" << std::endl;
        std::cout << "|                                             |                 |    |" << std::endl;
        std::cout << "\\____________________________________________________________________/" << std::endl;
    }
    else if (state == 4) {
        std::cout << "______________________________________________________________________" << std::endl;
        std::cout << "|                                                                    |" << std::endl;
        std::cout << "|                                                                    |" << std::endl;
        std::cout << "|                                                                    |" << std::endl;
        std::cout << "|                                                        _____       |" << std::endl;
        std::cout << "|                                                        |   |       |" << std::endl;
        std::cout << "|                                                        o   |       |" << std::endl;
        std::cout << "|                                                       /|\\  |       |" << std::endl;
        std::cout << "|                                                            |       |" << std::endl;
        std::cout << "|                                                            |       |" << std::endl;
        std::cout << "|                                                            |       |" << std::endl;
        std::cout << "|                                             -------------------    |" << std::endl;
        std::cout << "|                                             |                 |    |" << std::endl;
        std::cout << "\\____________________________________________________________________/" << std::endl;
    }
    else if (state == 5) {
        std::cout << "______________________________________________________________________" << std::endl;
        std::cout << "|                                                                    |" << std::endl;
        std::cout << "|                                                                    |" << std::endl;
        std::cout << "|                                                                    |" << std::endl;
        std::cout << "|                                                        _____       |" << std::endl;
        std::cout << "|                                                        |   |       |" << std::endl;
        std::cout << "|                                                        o   |       |" << std::endl;
        std::cout << "|                                                       /|\\  |       |" << std::endl;
        std::cout << "|                                                         \\  |       |" << std::endl;
        std::cout << "|                                                            |       |" << std::endl;
        std::cout << "|                                                            |       |" << std::endl;
        std::cout << "|                                             -------------------    |" << std::endl;
        std::cout << "|                                             |                 |    |" << std::endl;
        std::cout << "\\____________________________________________________________________/" << std::endl;
    }
    else if (state == 6) {
        std::cout << "______________________________________________________________________" << std::endl;
        std::cout << "|                                                                    |" << std::endl;
        std::cout << "|                                                                    |" << std::endl;
        std::cout << "|                                                                    |" << std::endl;
        std::cout << "|                                                        _____       |" << std::endl;
        std::cout << "|                                                        |   |       |" << std::endl;
        std::cout << "|                                                        o   |       |" << std::endl;
        std::cout << "|                                                       /|\\  |       |" << std::endl;
        std::cout << "|                                                       / \\  |       |" << std::endl;
        std::cout << "|                                                            |       |" << std::endl;
        std::cout << "|                                                            |       |" << std::endl;
        std::cout << "|                                             -------------------    |" << std::endl;
        std::cout << "|                                             |                 |    |" << std::endl;
        std::cout << "\\____________________________________________________________________/" << std::endl;
    }
    return;
}

void Round(std::string& knownLetters, std::string word, int& state, std::string& missedLetters, int& numGuessesW, int& numGuessesR) {
    
    printState(state);                                                                                              // Output the board state, number of guesses, and missed letters
    std::cout << "Missed letters: ";
    if (missedLetters.size() > 0) {
        for (int i = 0; i < missedLetters.size(); ++i) {
            std::cout << missedLetters.at(i) << " ";
        }
    }
    std::cout << std::endl;
    std::cout << "The word so far: " << knownLetters << std::endl;
    std::cout << "Number of correct guesses: " << numGuessesR << "   " << "Number of incorrect guesses: " << numGuessesW << std::endl;
    std::cout << "Total guesses: " << numGuessesR + numGuessesW << std::endl;

    std::cout << "Enter your guess: ";
    std::string userGuess;
    std::cin >> userGuess;
    if (userGuess.size() == 1) {                                                                                    // Did they enter one character?
        if (isalpha(userGuess.at(0))) {                                                                             // Did they enter a letter?
            int numMatches = 0;
            for (int i = 0; i < word.size(); ++i) {
                if (userGuess.at(0) == word.at(i) && word.at(i) != knownLetters.at(i)) {                            // Checking for a matching letter that has not already been guessed
                    knownLetters.at(i) = userGuess.at(0);
                    ++numMatches;
                }
                else if ((userGuess.at(0) == word.at(i) && word.at(i) == knownLetters.at(i)) || (missedLetters.find(userGuess.at(0)) != std::string::npos)) {    
                    std::cout << "Looks like you've already guessed that." << std::endl;                            // Check if letter has already been guessed and notify player
                    return;
                }
            }
            if (numMatches == 0) {                                                                                  // If the player guesses incorrectly let them know and increment state
                missedLetters.push_back(userGuess.at(0));                                                           // this is how we know what pieces of the man to draw
                std::cout << "No match!" << std::endl;  
                ++state;
                ++numGuessesW;
            }
            else {
                std::cout << "Looks like you got " << numMatches << ", great job!" << std::endl;                    // Let the player know how many matches they got
                ++numGuessesR;
            }
            numMatches = 0;
        }
        else {
            std::cout << "invalid input, try again." << std::endl;                                                  
        }
    }
    else {
        std::cout << "invalid input, try again." << std::endl;
    }
}

void StartGame(std::vector<std::string>& wordList, std::string& word, std::string& knownLetters) {                  // Creating wordlist and selecting a word
    wordList.push_back("reactor");                                                           
    wordList.push_back("opposition");
    wordList.push_back("industry");
    wordList.push_back("character");
    wordList.push_back("therapist");
    wordList.push_back("diameter");
    wordList.push_back("conservation");
    wordList.push_back("theater");
    wordList.push_back("triangle");
    wordList.push_back("introduction");
    srand(time(0));
    int wordPick = rand() % 10;
    word = wordList.at(wordPick);
    for (int i = 0; i < word.size(); ++i) {
        knownLetters.push_back('_');
    }
    std::cout << "Word selected! There are " << word.size() << " letters. Let's begin!" << std::endl;
}

void ReadInput(std::string userIn, bool& game) {
    std::cin >> userIn;
    if (userIn == "start") {
        
    }
    else if (userIn == "exit") {
        game = 0;
    }
    else {
        std::cout << "Looks like you input something I can't understand. Let's try again: " << std::endl;
        ReadInput(userIn, game);
    }
}

int main()
{
    bool game = 1;
    std::string userIn;                                                                         
    while (game == 1) {
        std::cout << "     __  __                                         " << std::endl <<         
            "    / / / /___ _____  ____ _____ ___  ____ _____    " << std::endl <<
            "   / /_/ / __ `/ __ \\/ __ `/ __ `__ \\/ __ `/ __ \\" << std::endl <<
            "  / __  / /_/ / / / / /_/ / / / / / / /_/ / / / /   " << std::endl <<
            " /_/ /_/\\__,_/_/ /_/\\__, /_/ /_/ /_/\\__,_/_/ /_/ " << std::endl <<
            "                   /____/                           " << std::endl;
        std::cout << "Welcome! Type \"start\" to begin or \"exit\" to quit!" << std::endl;
        ReadInput(userIn, game);                                                                                    // Get input from player and prepare game
        if (game == 0) {
            std::cout << "Thanks for playing!";
            return 0;
        }

        std::vector<std::string> wordList;                                                                          // All available words
        std::string word;                                                                                           // The word being guessed
        std::string knownLetters;                                                                                   // Once this matches word the game ends
        std::string missedLetters;                                                                                  // Keeping track of missed guesses

        int state = 0;                                                                                              // Tells us how to print our boardstate and draw the man
        int numGuessesW = 0;                                                                                        // Number of incorrect guesses
        int numGuessesR = 0;                                                                                        // Number of correct guesses
        if (game == 1) {
            StartGame(wordList, word, knownLetters);                                                                    // Sets our wordlist and selects a word
        }

        while (game == 1) {
            Round(knownLetters, word, state, missedLetters, numGuessesW, numGuessesR);                              // Iterate each round of play

            if (knownLetters == word) {
                std::cout << "Congratulations! you win!" << std::endl;
                std::cout << "You got the word in " << numGuessesR + numGuessesW << " guesses!" << std::endl;
                game = 0;
            }
        }
        GameEnd(game);                                                                                              // Prompt user for another game after the current one is over
    }
    std::cout << "Thanks for playing!";

    return 0;
}

