#include <iostream>
#include <cstdint>
#include <string>
#include <thread>
#include <cstdlib>
#include <conio.h>

// Rock Paper Scissors Game

//function for gameplay
void Combat(char &players_choice, uint32_t &p1s, uint32_t &p2s)
    //Program picks a random number to use as rock, paper, or scissors
{   int32_t roll = rand() % 3;
    // Variable that specifies program's choice
    std::string p2m;
    std::string p1m;
    //Converts random int into a choice we can use;
    switch(roll)
    {
    case 0U:
        {
            p2m = "Rock";
            break;
        }
    case 1U:
        {
            p2m = "Paper";
            break;
        }
    case 2U:
        {
            p2m = "Scissors";
            break;
        }
    }
    //Converting player's choice
    switch(players_choice)
    {
    case 'a':
        {
            p1m = "Rock";
            break;
        }
    case 'b':
        {
            p1m = "Paper";
            break;
        }
    case 'c':
        {
            p1m = "Scissors";
            break;
        }
    }
    //Game Logic
    if(p1m == "Rock" and p2m == "Scissors")
    {
        p1s += 1U;
    }
    else if(p1m == "Paper" and p2m == "Rock")
    {
        p1s += 1U;
    }
    else if(p1m == "Scissors" and p2m == "Paper")
    {
        p1s += 1U;
    }
    else if(p1m == p2m)
    {
        std::cout << "TIE";
    }
    else
    {
        p2s += 1U;
    }

    std::cout << "You: " << p1m << " Opponent: " << p2m << std::endl;
    std::cout << "Press Enter to continue\n";
    _getch();
    system("cls");
    }



int main() {
    // Score must be kept to best out of 3
    // Player should get a list of options
    std::uint32_t player_one_score = 0U;
    std::uint32_t player_two_score = 0U;
    // choice is either Rock, Paper, or Scissors
    char choice;
    bool running = true;
    std::cout << "Welcome to RPS!\n\n\n";
    while(running)
    {
        if(player_one_score < 3U and player_two_score < 3U)
        {
        std::cout << "\nPlayer One: " << player_one_score << "    Player Two: " << player_two_score << "\n\n";
        std::cout << "Please choose a below option\n";
        std::cout << "a) rock\nb) paper\nc) scissors\n";
        std::cin >> choice;
        Combat(choice, player_one_score, player_two_score);
        }
        else
        {
            std::cout << "Game Over";
            running = false;
        }
    }
    return 0;
}
