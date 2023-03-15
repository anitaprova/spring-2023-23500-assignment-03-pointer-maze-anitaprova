#include "MazeGenerator.h"
#include "Labyrinth.h"
#include <iostream>
#include <string>

const std::string kYourName = "AnitaProva";

/* Change these constants to contain the paths out of your mazes. */
const std::string kPathOutOfNormalMaze = "WWWSSNESSEEWWNEENWE";
const std::string kPathOutOfTwistyMaze = "";

int main()
{
    MazeCell *startLocation = mazeFor(kYourName);

    if (isPathToFreedom(startLocation, kPathOutOfNormalMaze))
    {
        std::cout << "Congratulations! You've found a way out of your labyrinth." << std::endl;
    }
    else
    {
        std::cout << "Sorry, but you're still stuck in your labyrinth." << std::endl;
    }

    MazeCell *twistyStartLocation = twistyMazeFor(kYourName);

    /* Set a breakpoint here to explore your twisty maze! */

    if (isPathToFreedom(twistyStartLocation, kPathOutOfTwistyMaze)) {
        std::cout << "Congratulations! You've found a way out of your twisty labyrinth." << std::endl;
    } else {
        std::cout << "Sorry, but you're still stuck in your twisty labyrinth." << std::endl;
    }

    return 0;
}
