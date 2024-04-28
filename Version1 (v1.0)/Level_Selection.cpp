#include "Level_Selection.h"


int levelSelection()
{
    int difficultyLevel;

    std::cout <<"Please select a difficulty level.                                                     "<<std::endl;
    std::cout <<"   1- easier than easy                                                                  "<<std::endl;
    std::cout <<"   2- novice                                                                            "<<std::endl;
    std::cout <<"   3- intermediate                                                                      "<<std::endl;
    std::cout <<"   4- expert                                                                            "<<std::endl;
    std::cout <<"Insert corresponding number: ";
    std::cin >> difficultyLevel;

    return difficultyLevel;
}


//executes appropriate level call based on user input
void difficultyLvlChosen(int difficultyLevel)
{
    switch (difficultyLevel)
    {
        case 1:
            std::cout << "You have chosen the easier than easy level." <<std::endl;
            //implementation of what this level indicates, call another function
            //also have the token amounts
            //also have guards that makes sure the user picks the right value for the range
            break;
        case 2: 
            std::cout << "You have chosen the novice level." <<std::endl;
            //implementation of what this level indicates
            break;
        case 3: 
            std::cout << "You have chosen the intermediate level." <<std::endl;
            //implementation
            break;
        case 4: 
            std::cout << "Oh how brave of you! You have chosen the expert level." <<std::endl;
            //implementation
            break;
        default: //if the user does not select the correct option
            std::cout << "Incorrect option. Please select the correct level: "; //later Nyasha: make a condition here to ensure that the user only enters integer values
            std::cin >> difficultyLevel;
            difficultyLvlChosen(difficultyLevel);
            break;
    }
}
