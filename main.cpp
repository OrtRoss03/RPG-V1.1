#include <iostream>
#include <chrono>
#include <thread>
#include <limits>
#include <time.h>
#include "character.hpp"
#include "enemy.hpp"
#include "combat.hpp"

std::string convertLower(std::string &string) {
     for (int i = 0; i < string.size(); i++) {
          string[i] = tolower(string[i]);
     }
     return string;
}

void pressEnter() {
    std::cout << "";
    std::cin.ignore();
}

int main () {
    srand(time(0));
    bool beginGame = true;
    while (beginGame) {
        std::cout << "Enter your race: Dwarf, Elf, Demon, or Angel \n";
        std::string myRace; getline(std::cin, myRace);

        Race race;
        if (myRace == "Dwarf") {
            race = Race::Dwarf;
        }
        else if (myRace == "Elf") {
            race = Race::Elf;
        }
        else if (myRace == "Demon") {
            race = Race::Demon;
        }
        else if (myRace == "Angel") {
            race = Race::Angel;
        }

        std::cout << "Enter your kingdom: Leauchi, Xix, Itathar, or Oldjin \n";
        std::string myKingdom; getline(std::cin, myKingdom);

        Kingdom kingdom;
        if (myKingdom == "Leauchi") {
            kingdom = Kingdom::Leauchi;
        }
        if (myKingdom == "Xix") {
            kingdom = Kingdom::Xix;
        }
        if (myKingdom == "Itathar") {
            kingdom = Kingdom::Itathar;
        }    
        if (myKingdom == "Oldjin") {
            kingdom = Kingdom::Oldjin;
        }

        std::cout << "Finally, enter your player name: ";
        std::string myName; getline(std::cin, myName);

        //std::string answer = "";
        //std::cout << "Do you want to make another character? \n";
        //std::cin >> answer;
        //if (convertLower(answer) == "no" || convertLower(answer) == "nope" || convertLower(answer) == "nah") {
        //    beginGame = false;
        //}  
        //else {
        //    std::cout << "\n";
        //    continue;
        //}

        std::cout << "Press enter to continue\n";
        pressEnter();
        std::cout << "You wake up in a pool of your own blood, the water from the stalagtites dripping slowly as you carefully scan your surroundings. (Press enter to continue the dialogue)\n";
        pressEnter();
        std::cout << "You slowly get to your feet, almost stumbling on the way up. The air is cold and you have a feeling that something is watching you.\n";
        pressEnter();
        std::cout << "The negative energy around you feels dense, as if it's trying to grab a hold. You pick up the pace in an attempt to find the exit.\n";
        pressEnter();
        std::cout << "The cave entrance is near, but before you step any farther, a goblin jumps out and attacks.\n";

        Character character(race, kingdom);
        character.setName(myName);
        Enemy enemy(Goblin);
        Combat combat;
        combat.showStats(character, enemy, Goblin);
        pressEnter();

        std::cout << "Seeing as you have nowhere to go, the only choice you have is to attack. \n";
        pressEnter();
        std::cout << "What would you like to do? \n";
        bool fight = false;
        while(!fight) {
            std::string response;
            getline(std::cin, response);
            if (convertLower(response) == "attack") {
                combat.Turn(character, enemy);
                combat.showStats(character, enemy, Goblin);
                if (enemy.getCurrentHealth() < 1) {
                    std::cout << "You won the fight!\n";
                    pressEnter();
                    break;
                }
                else if (character.getCurrentHealth() < 1) {
                    std::cout << "You lost the fight...\n";
                    pressEnter();
                    break;
                }
                std::cout << "What would you like to do now? \n";
            }
            else {
                std::cout << "You can't do much except attack...\n";
            }
        }

        std::cout << "With the blood of your first enemy on your hands, you trek out of the cave.\n";
        pressEnter();
        std::cout << "As the light hits your eyes, only one thought goes through your head: 'time for some adventure'.\n";
        pressEnter();
        exit;
        //std::string continuePlaying; std::cout << "Would you like to continue playing? Type yes or no: \n";
        //getline(std::cin, continuePlaying);
        //if (convertLower(continuePlaying) == "no") {
        //    beginGame = false;
        //}  
        //else {
        //    std::cout << "\n";
        //    continue;
        //}
    }
}