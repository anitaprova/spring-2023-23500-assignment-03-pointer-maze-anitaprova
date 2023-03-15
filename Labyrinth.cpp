#include "Labyrinth.h"

bool isPathToFreedom(MazeCell *start, const std::string &moves)
{
    bool spellbook = false;
    bool potion = false;
    bool wand = false;

    for (int i = 0; i < moves.length(); i++)
    {
        if (start->whatsHere == Item::SPELLBOOK) // looking for items
        {
            spellbook = true;
        }
        if (start->whatsHere == Item::POTION)
        {
            potion = true;
        }
        if (start->whatsHere == Item::WAND)
        {
            wand = true;
        }

        if (moves[i] == 'N') // moving
        {
            if (start->north != nullptr)
            {
                start = start->north;
            }
            else
            {
                return false;
            }
        }
        else if (moves[i] == 'E')
        {
            if (start->east != nullptr)
            {
                start = start->east;
            }
            else
            {
                return false;
            }
        }
        else if (moves[i] == 'S')
        {
            if (start->south != nullptr)
            {
                start = start->south;
            }
            else
            {
                return false;
            }
        }
        else if (moves[i] == 'W')
        {
            if (start->west != nullptr)
            {
                start = start->west;
            }
            else
            {
                return false;
            }
        }
    }

    if (spellbook && potion && wand)
    {
        return true;
    }
    else
    {
        return false;
    }
}
