#include <iostream>
#include "Level_Selection.h"
#include "Tokens.h"
#include "Guessing_Number.h"

int main()
{
    std::string playerName;
    int difficultyLevel, numberOfTokens, bettingTokens, numberOfTokensLeft;
    bool correctGuess;

    std::cout <<"Number guessing game v1.0 - Nyashadzashe Makwabarara"<< std::endl;
    std::cout <<"________________________________________________________________________________________ "<< std::endl;
    std::cout <<"|                                  Welcome Player!                                     | "<<std::endl;
    std::cout <<"|                                                                                      | "<<std::endl;
    std::cout <<"|This is the number guessing game - arcade edition! You are going to guess the number  |"<<std::endl;
    std::cout <<"|that the computer generates. For every guess you get correct. You win tokens.         |"<<std::endl;
    std::cout <<"|______________________________________________________________________________________|"<< std::endl;
    std::cout <<std::endl;
    std::cout <<"Time to test your luck! Please enter your name: ";
    getline(std::cin, playerName);
    std::cout <<"Nice to meet you, "<< playerName <<std::endl; //find a way to not make the margins move, then you can add one here
    std::cout <<std::endl;
    
    difficultyLevel = levelSelection();
    difficultyLvlChosen(difficultyLevel);

    numberOfTokens = insertTokens();
    
    
    while(1==1) //this will create a never ending loop so that the game continues until the user wants it to stop
    {
        bettingTokens = handleBettingTokens(numberOfTokens);
        correctGuess = guessingNumber(difficultyLevel);
        
    
        numberOfTokensLeft = handleTokensAmount(numberOfTokens, bettingTokens, difficultyLevel, correctGuess);
        printTokenAmount(numberOfTokens, bettingTokens, difficultyLevel, correctGuess);
    } 
    
    
    //call the guessing number functions with appropriate parameters  
    
    //call guessing function
    //call handleTokens function
    
    /*you need to have a loop somewhere here such that the guessing keeps continuing until a user
    wants to change the level, tokens are finished, or does not quit. Or allow the user to start a new game. This can be a function that can be called, and it resets everything.*/

    return 0;
}