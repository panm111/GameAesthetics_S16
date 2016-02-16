//------------------------------------------------------------------//
//	GAME AESTHETICS CLASS 02										//
//  TEXT PARSER AND MAP 											//
//																	//
//	use this as a starting point for building out a complete map.	//
//------------------------------------------------------------------//

#include <iostream>
#include <string>
using namespace std;

class Room {
public:
	string description;	
	bool canGoNorth;
	bool canGoEast;
	bool canGoSouth;
	bool canGoWest;
};

int main() 
{
	string input;			// a string to store player input
	int x = 0;				// 2 variables to store player position, x and y
	int y = 0;
	Room map[3][3];			// a 2D array to store our map

	//fill the map of Rooms with starting values
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			map[j][i].description = "There's nothing here!";	
			map[j][i].canGoNorth = false;
			map[j][i].canGoEast = false;	
			map[j][i].canGoWest = false;
			map[j][i].canGoSouth = false;	
		}
	}

	//set starting values for different Rooms
	map[0][0].description = "You are faced with a giant puddle, and thick fog in the distance. Jump over it!";
	map[0][0].canGoEast = true;

	map[1][0].description = "Just as you have jumped, you take one step and you realize you're about to fall off the edge of a cliff! You need a nearby tree and a sturdy vine hanging from it. You decided to trust in it and swing into the abyss";
	map[1][0].canGoSouth = true;
	
	map[1][1].description = "Just as you jump off the vine, you trigger a trap! A large boulder is coming at you and you need to run for it!";
	map[1][1].canGoEast = true; 

	map[2][1].description = "You find an opening to the side and you dodge the boulder. You are officially lost and you have no idea where you are. You decide to wander aimlessly instead of standing still";
	map[2][1].canGoSouth =  true;
 
	map[2][2].description = "Your wandering eventually led you to your destination! Congrats! Press q to exit";

	//game loop runs until the user enters 'q'
	while (input != "q") {

		cout << "you are at " << x << " " << y << endl;
		cout << map[x][y].description << endl;		
		cout << "What do you do?" << endl;
		cin >> input;


		//check for input
		if (input == "RUN") {
			if (map[x][y].canGoEast == true) {
				x++;
			} else {
				cout << "you can't go that way!\n\n";
			}
		}else if (input == "JUMP") {
			if (map[x][y].canGoEast == true) {
				x++;
			} else {
				cout << "you can't go that way!\n\n";
			}
		} else if (input == "SWING") {
			if (map[x][y].canGoSouth == true) {
				y++;				
			} else {
				cout << "you can't go that way!\n\n";
			}
		}else if (input == "WANDER"){
			if (map[x][y].canGoSouth == true) {
				y++;				
			} else {
				cout << "you can't go that way!\n\n";
			}
		} else {
			cout << "I don't understand " << input << "\n";
		}

	}

	return 0;
}