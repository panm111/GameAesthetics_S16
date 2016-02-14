//-----------------------------------------------------------------------------------------------------------
// GAME AESTHETICS: C++ Text Parser Part 3
//-----------------------------------------------------------------------------------------------------------
#include <iostream>
#include <cctype>
#include <string>
#include <cstddef>

using namespace std;

// here we will use:
	
	// isspace(charVariable)	- here we can find out if the char variable is a space.
	//							- we'll use this to split our string.
	//


int main() {
	string command;
  	cout << "Type something: ";
  	getline (cin,command);
  	cout << "\n";
	for (int i = 0; i < command.size(); i++) {
		command.at(i) = toupper(command.at(i));
	}
	cout << "Converted command to all caps: " << command << endl;

	string word1 = "";
	string word2 = "";
	string word3 = "";
	string lastword = "";

	char c;	//we'll use c to store the current character and see if its a space.
	for (int i = 0; i < command.size(); i++) {
		c = command.at(i);	//get the current character,
		if (isspace(c) && word1 != "") { //if the character is a space and word1 isn't empty,
			break;	//break out of the for loop.
		} 
		if (!isspace(c)) {  //if its a letter, 
			word1 += c;     //add the char to word1. we can use += here! 
		} 
	}

	for (int i = word1.size(); i < command.size(); i++) {
		c = command.at(i);
		if (!isspace(c)) { //if the character isn't a space, add it to word 2.
			word2 += c;
		} 
		if(isspace(c) && word2 != ""){
			break;
		}	
		
	} // this code works for getting the first two strings

	for (int i = word1.size() + word2.size() + 1; i < command.size(); i++) {
		c = command.at(i);
		if (!isspace(c)) { 
			word3 += c;
		} 
		if(isspace(c) && word3 != ""){
			break;
		}
	} // can also print out last word of 3 word string. 


	//to find the last word for any length of string:
	command.find_last_of(" "); //finds the last space character
	//start counting from the last space and adding characters from there

	// cout << command.find_last_of(" ") << endl;

	for (int i = command.find_last_of(" "); i < command.size(); i++) {
		c = command.at(i);
		if (!isspace(c)) { 
			lastword += c;
		} 
		if(isspace(c) && lastword != ""){
			break;
		}
	}


	cout << "word 1 is: " << word1 << endl;
	cout << "word 2 is: " << word2 << endl;
	cout << "word 3 is: " << word3 << endl;
	cout << "lastword is: " << lastword << endl;

	//EXERCISE:___________________________________
	
	//1:
	//what happens if you enter more than two words?
	//try to solve this in two ways:
			// - only accept the first two words of any command.
			// - only accept the first and last words of any command.


	//2:
	//make an array of strings that will get recognized by the parser, like "LOOK", "GO", "GET", etc.
	//loop through the array to see if the command is recognized, then use a switch to display a custom response.

	string greetings[] = {"HI", "HEY", "HELLO", "GREETINGS" };

	for (int i = 0; i < greetings[i].size(); i++){
		if (command != greetings[i]){
			cout << "that is not a greeting" << endl;
		} 

		if (command == greetings[i]){
			cout << "why hello there" << endl;
		}
	}

	//it will only parse through if thereis only one word input and matches it based on its' position to the array.



	//if you're comfortable with the above, try...
	//3: (ADVANCED)
	//if you're feeling brave, try to put this all into a function that will return an array of strings.
	//this is actually a trick question. but spend some time looking into why.
	//if you can't do it, psuedocode it, or try it in another language. look at how "split" works in processing for example.
	//_____________________________________________

	return 0;
}