#include <iostream>
#include <cstdlib>
#include <time.h>

#include "Guessing_Number.h"
#include "Level_Selection.h"

//find a way to do a level selection, and restart the game or change the level with the same number of tokens.

bool guessingNumber(int difficultyLevel)
{   
    int guessedNumber;
    int generatedNum;
    bool correctGuess;

    std::cout <<"                                               '0' to quit."<<std::endl;
    std::cout <<std::endl;

    switch(difficultyLevel)
    {
        case 1: 
            std::cout << "You need to guess a number between 1 and 5. ";
            std::cin >> guessedNumber;
            if(guessedNumber == 0) //allowing the user to quit the game at any time
            {
                exit(0);
            }
            else
            {                   
                    if(guessedNumber >= 1 && guessedNumber <= 5)
                    {
                        //call the function that generates the number
                        //compare the guessed Number to the generatedNumber, if guess is correct correctGuess = true. 
                        generatedNum = numberGenerator(difficultyLevel);
                        if (guessedNumber == generatedNum)
                        {
                            std::cout << "The computer generated " << generatedNum <<". Congrats, correct guess!" <<std::endl;
                            correctGuess = true;
                        }
                        else
                        {
                            std::cout << "The computer generated " << generatedNum <<". Sorry, wrong guess!" <<std::endl;
                            correctGuess = false;
                        }
                    }
                    else
                    {
                        std::cout << "Please select a number between 1 and 5. ";
                        guessingNumber(difficultyLevel);
                    }
                    break;
            }
        case 2:
                std::cout << "You need to guess a number between 1 and 8. ";
                std::cin >> guessedNumber;

            if(guessedNumber == 0) //allowing the user to quit the game at any time
            {
                exit(0);
            }
            else
            { 
                if(guessedNumber >= 1 && guessedNumber <= 8)
                { 
                    generatedNum = numberGenerator(difficultyLevel);
                    if(guessedNumber == generatedNum)
                    {   
                        std::cout << "The computer generated " << generatedNum <<". Congrats, correct guess!" <<std::endl;
                        correctGuess = true;
                    }
                    else 
                    {
                        std::cout << "The computer generated " << generatedNum <<". Sorry, wrong guess!" <<std::endl;
                        correctGuess = false;
                    }
                }
                else
                {
                    std::cout << "Please select a number between 1 and 8. ";
                    guessingNumber(difficultyLevel);
                }
                break;
            }
        case 3:
                std::cout << "You need to guess a number between 1 and 12. ";
                std::cin >> guessedNumber;
                if(guessedNumber == 0) //allowing the user to quit the game at any time
                {
                    exit(0);
                }
                else
                { 
                    if(guessedNumber >= 1 && guessedNumber <= 12)
                    { 
                        generatedNum = numberGenerator(difficultyLevel);
                        if(guessedNumber == generatedNum)
                        {
                            std::cout << "The computer generated " << generatedNum <<". Congrats, correct guess!" <<std::endl;
                            correctGuess = true;
                        }
                        else
                        {
                            std::cout << "The computer generated " << generatedNum <<". Sorry, wrong guess!" <<std::endl; 
                            correctGuess = false;
                        }
                    }
                    else
                    {
                        std::cout << "Please select a number between 1 and 12. ";
                        guessingNumber(difficultyLevel);
                    }
                    break;
                }
        case 4:
                std::cout << "You need to guess a number between 1 and 20. ";
                std::cin >> guessedNumber;

                if(guessedNumber == 0) //allowing the user to quit the game at any time
                {
                    exit(0);
                }
                else
                { 
                    if(guessedNumber >= 1 && guessedNumber <= 20)
                    {
                    //call the function that generates the number
                    //compare the guessed Number to the generatedNumber, if guess is correct correctGuess = true.
                        generatedNum = numberGenerator(difficultyLevel);
                        if(guessedNumber == generatedNum)
                        {
                            std::cout << "The computer generated " << generatedNum <<". Congrats, correct guess!" <<std::endl;
                            correctGuess = true;
                        }
                        else
                        {
                            std::cout << "The computer generated " << generatedNum <<". Sorry, wrong guess!" <<std::endl;
                            correctGuess = false;
                        }
                    }
                    else
                    {
                        std::cout << "Please select a number between 1 and 20. ";
                        guessingNumber(difficultyLevel);
                    }
                    break; 
                } 
    }
    return correctGuess;
}


//function where the number is generated
int numberGenerator(int difficultyLevel)
{   
    int random;
    
    if(difficultyLevel == 1)
    {
        /*
            pre-defined function that initialises the range of pseudo-random numbers, to start from the seed value.
            The seed value this time would be the system time. This makes the generated numbers seem random. 
            Without this function, the random number generated will be the same each time.

            Function syntax: srand(seed_value)
        */
        srand(time(0)); 

        /*The random function generator is pre-defined function, to generate a random number.*/
        random = rand()%6 +1; //generates a number between 1 and 5
    }
    else if(difficultyLevel ==2)
    {
        srand(time(0)); 
        random = rand()%9 + 1; //generates a number between 1 and 8
    }
    else if(difficultyLevel == 3)
    {
        srand(time(0)); 
        random = rand()%13 + 1; //generates a number between 1 and 12  
    }
    else if(difficultyLevel == 4)
    {
        srand(time(0)); 
        random = rand()%21 + 1; //generates a number between 1 and 20
    }
    return random;
}