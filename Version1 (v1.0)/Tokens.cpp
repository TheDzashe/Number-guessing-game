#include "Tokens.h"
#include <iostream>

int insertTokens()
{
    int numberOfTokens;
    std::cout << "How many tokens do you want to insert?" <<std::endl;
    std::cin >> numberOfTokens;

    if(numberOfTokens%5 == 0)
    {
        std::cout << "You have inserted " <<numberOfTokens << " tokens. Time to guess!" <<std::endl;
        return (numberOfTokens);
        //call the betting function, with the number of tokens you have, and check that the number of tokens is greater than the betting amount
    }
    else
    {
        std::cout << "Insert a number of tokens, that is a multiple of 5. ";
        insertTokens();
    }
}

int handleBettingTokens(int numberOfTokens)
{
    int bettingTokens;
    std::cout << "How many tokens do you want to bet? " <<std::endl;
     //tests to see if the number of Tokens is greater than the betting tokens to see if the game can continue
    {
        std::cin >> bettingTokens;
        if(numberOfTokens >= bettingTokens)
        {
            if (bettingTokens%5 == 0)
            {
                std::cout << "You have bet with " << bettingTokens << " tokens.";
                return bettingTokens;
            }
            else
            {
                std::cout << "Insert a number of tokens, that is a multiple of 5. (ie. 5, 20, 75) ";
                handleBettingTokens(numberOfTokens);
            }
        }
        else
        {
            handleContinueGame(numberOfTokens);
        }
        
    }  
}

void handleContinueGame(int numberOfTokens)
{
    char continueAnswer;
    std::cout << "You cannot continue the game. You do not have enough tokens." <<std::endl;
    std::cout << "Place a smaller bet or quit the game. Do you want to place a smaller bet? "<<std::endl;
    std::cout << "'Y' to continue and 'N' to quit: ";

    std::cin >> continueAnswer;
    if (continueAnswer == 'Y' || continueAnswer == 'y')
    {
        handleBettingTokens(numberOfTokens);
    }
    else if (continueAnswer == 'N' || continueAnswer == 'n')
    {
        exit(0); //this will exit the program, to exit the program with an error exit(1)
    }
    else
    {
        std::cout << "Please select the correct option.";
        handleContinueGame(numberOfTokens);
    }
}

//have a handle tokens function that will calculate the tokens based on the difficulty level
int handleTokensAmount(int numberOfTokens, int bettingTokens, int difficultyLevel, bool correctGuess)
{
    if(difficultyLevel == 1) //easier than easy level
    {
        if (correctGuess == true) 
        {
            numberOfTokens += (bettingTokens*1); //add the betting amount tokens to number of tokens
            return numberOfTokens;
        }
        else
        {
            numberOfTokens -= bettingTokens;
            return numberOfTokens;
        }
    }
    else if (difficultyLevel == 2)
    {
        if(correctGuess == true)
        {
            numberOfTokens += (bettingTokens*2);
            return numberOfTokens;
        }
        else
        {
            numberOfTokens -= bettingTokens;
            return numberOfTokens;
        }
    }
    else if (difficultyLevel == 3)
    {
        if(correctGuess == true)
        {
            numberOfTokens += (bettingTokens*3);
            return numberOfTokens;
        }
        else
        {
            numberOfTokens -= bettingTokens;
            return numberOfTokens;
        }
    }
    else //this statement will execute when the difficultyLevel == 4
    {
        if(correctGuess == true)
        {
            numberOfTokens += (bettingTokens*5);
            return numberOfTokens;
        }
        else
        {
            numberOfTokens -= bettingTokens;
            return numberOfTokens;
        }
    }
}

void printTokenAmount(int numberOfTokens, int bettingTokens, int difficultyLevel, bool correctGuess)
{
    std::cout <<"You now have " << handleTokensAmount(numberOfTokens, bettingTokens, difficultyLevel, correctGuess) << " tokens left." <<std::endl;
}