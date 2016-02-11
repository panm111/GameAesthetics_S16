//-----------------------------------------------------------------------------------------------------------
// GAME AESTHETICS: Array Review part 4
//-----------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main() 
{
			//----------------------------------------//
			//      2D ARRAYS 						  //
			//----------------------------------------//

	// A 2-dimensional array is technically an array OF ARRAYS! 
			// (just as a 3D array is an array of arrays of arrays 
			//    and a 4D array is an array of arrays of arrays of arrays etc.)
	// but, we're going to be visualizing them in a grid, to make things easy for our brains.

	// 1D arrays can be thought of as a bunch of spaces in a line:
	//	 ___  ___  ___  ___  ___  ___  ___  ___
	//	|   ||   ||   ||   ||   ||   ||   ||   |
	//  |___||___||___||___||___||___||___||___|
	//    0	   1    2    3    4    5    6    7
	// this is how we can visualize an array with 7 spaces.
	// if it was an array of booleans, it could be like this :
	//	 ____  _____  ____  ____  ____  ____  ____  _____
	//	|true||false||true||true||true||true||true||false|
	//  |____||_____||____||____||____||____||____||_____|
	//    0	     1      2     3     4     5     6     7

	// so we can think of a 2D array like this, a line of lines:
	//	 ___  ___  ___  ___  ___  ___  ___  ___
	//	|   ||   ||   ||   ||   ||   ||   ||   |
	//  |___||___||___||___||___||___||___||___|
	//   0,0  1,0  2,0  3,0  4,0  5,0  6,0  7,0
	//	 ___  ___  ___  ___  ___  ___  ___  ___
	//	|   ||   ||   ||   ||   ||   ||   ||   |
	//  |___||___||___||___||___||___||___||___|
	//   0,1  1,1  2,1  3,1  4,1  5,1  6,1  7,1
	//	 ___  ___  ___  ___  ___  ___  ___  ___
	//	|   ||   ||   ||   ||   ||   ||   ||   |
	//  |___||___||___||___||___||___||___||___|
	//   0,2  1,2  2,2  3,2  4,2  5,2  6,2  7,2
	//	 ___  ___  ___  ___  ___  ___  ___  ___
	//	|   ||   ||   ||   ||   ||   ||   ||   |
	//  |___||___||___||___||___||___||___||___|
	//   0,3  1,3  2,3  3,3  4,3  5,3  6,3  7,3
	//	 ___  ___  ___  ___  ___  ___  ___  ___
	//	|   ||   ||   ||   ||   ||   ||   ||   |
	//  |___||___||___||___||___||___||___||___|
	//   0,4  1,4  2,4  3,4  4,4  5,4  6,4  7,4

	// if it were a 2D array of ints, it could be like this:

	//	 ___  ___  ___  ___  ___  ___  ___  ___
	//	| 2 ||100|| 5 || 1 || 0 || -5||-90||23 |
	//  |___||___||___||___||___||___||___||___|
	//   0,0  1,0  2,0  3,0  4,0  5,0  6,0  7,0
	//	 ___  ___  ___  ___  ___  ___  ___  ___
	//	| 7 || 7 || 7 || 7 || 7 || 7 || 7 || 7 |
	//  |___||___||___||___||___||___||___||___|
	//   0,1  1,1  2,1  3,1  4,1  5,1  6,1  7,1
	//	 ___  ___  ___  ___  ___  ___  ___  ___
	//	|100||101||102||103||104||105||106||107|
	//  |___||___||___||___||___||___||___||___|
	//   0,2  1,2  2,2  3,2  4,2  5,2  6,2  7,2
	//	 ___  ___  ___  ___  ___  ___  ___  ___
	//	| 0 || 1 || 2 || 3 || 4 || 5 || 6 || 7 |
	//  |___||___||___||___||___||___||___||___|
	//   0,3  1,3  2,3  3,3  4,3  5,3  6,3  7,3
	//	 ___  ___  ___  ___  ___  ___  ___  ___
	//	| 0 || -1|| -2|| -3|| -4|| -5|| -6|| -7|
	//  |___||___||___||___||___||___||___||___|
	//   0,4  1,4  2,4  3,4  4,4  5,4  6,4  7,4


	//2 dimensional arrays can be declared and initialized in the same ways as 1D arrays, with one exception.
	// the main thing C++ needs to know is: "how much memory do I need to store for this array?
	// this means it needs to know how many spaces it has - not necessarily the values!

	int someInts[5][5]; //so this is ok, 
	int twodee[4][3] = {{0,1,2},{3,4,5},{6,7,8},{9,10,11}}; //this is ok
	//char noGoodArray[][] = {{'o','x'},{'a','b'}}; //this is NOT ok!!!
	char goodArray[][2] = {{'o','x'},{'a','b'}}; // but this is.

	// compare this to the fact that we can initialize a 1D array like this
	// char oneD[] = {'h','e','l','l','o'};
	// why do you think this is ok? how does it relate to the example above?

	// in order to loop through a 2D array, we need a nested for loop.

	// const int ROWS = 10;
	// const int COLS = 20;
	// int grid[COLS][ROWS];
	// for (int i = 0; i < COLS; i++) {
	// 	for (int j = 0; j < ROWS; j++) {
	// 		grid[i][j] = (i+1) * (j+1);
	// 	}
	// }

	//EXERCISE:________________________________________________________
	//use a nested for loop now to cout << the results of this loop! 
	//try organizing this in 3 different ways:
		//1- print all results in a long line horizontally.
		//2- print all results in a grid.
		//3- print all results with a "\n" after each result.

	// const int ROWS = 10;
	// const int COLS = 20;
	// int grid[COLS][ROWS];
	// for (int i = 0; i < COLS; i++) {
	// 	for (int j = 0; j < ROWS; j++) {
	// 		grid[i][j] = (i+1) * (j+1);
	// 		cout << grid[i][j];
	// 		cout << grid[i][j] << "\n";
	// 	}
	// 	cout << endl;
	// }

	//__________________________________________________________________

	//we can also represent the contents of a 2D array in a single array!
	// think about it - its just a big stream of data, whether its in 2 dimensions or one.
	// doing 2D is just helpful for us to visualize it.
	// this is one of the reasons why multidimensional arrays larger than 3 start to get extremely confusing 
	// - we have no way to relate to 4 or more dimensions of space in our normal lives (probably).
	
	//fake 2D array
	// int grid2[COLS * ROWS];
	// for (int i = 0; i < COLS; i++) {
	// 	for (int j = 0; j < ROWS; j++) {
	// 		grid2[i * ROWS + j] = (i+1) * (j+1);
	// 	}
	// }

	//the trick here is - our 1D index can be found using the x and y position.
	// the index of the 1D array is equal to y * the width of the grid + x.
	// index1D = y * width + x;
	// that's represented above with: grid2[i * ROWS + j] = (i+1) * (j+1);


	//EXERCISE________________________________________________________
	
	// create two arrays of chars - one 2D, one 1D.
	// fill them with values to represent the screen, and try to reproduce the bouncing ball code for each one.
	// for the 1D array, you'll need to use the trick above!

	//2D
	// const int ROWS = 10;
	// const int COLS = 10;
	// char grid[ROWS][COLS];

	// for (int i=0; i<ROWS; i++){
	// 	for(int j=0; j<COLS; j++){
	// 		grid[i][j] = '-';
	// 	}
	// } //setting up grid, making each value a dash

	// int x = 5;
	// int y = 6;
	// int vx = 1;
	// int vy = -1;

	// char input;

	// while(input != 'q'){

	// 	if (x > 0 && x < COLS-1) {
	// 			x += vx;
	// 		} else {
	// 			vx = -vx;
	// 			x += vx;
	// 		}

	// 	if (y > 0 && y < ROWS-1) {
	// 			y += vy;
	// 		} else {
	// 			vy = -vy;
	// 			y += vy;
	// 		}

	// 	grid[x][y] = 'o';

	// 	for (int i = 0; i < ROWS; i++) {
	// 		for (int j = 0; j < COLS; j++) {
	// 			cout << grid[j][i];
	// 		}
	// 		cout << endl;
	// 	} //why do we cout here? and repeat from above? is it because it draws the 'o' first and then the grid? so why do we need to set up the grid at the beginning?

	// 	for (int i = 0; i < ROWS; i++) {
	// 		for (int j = 0; j < COLS; j++) {
	// 			grid[j][i] = '-';
	// 		}
	// 	} //so that ball is not seen following behind.

	// 	cin >> input;
	// }

	//1D
	const int COLS = 10;
	const int ROWS = 10;

	char grid2[COLS * ROWS];

	for (int i = 0; i < COLS; i++) {
		for (int j = 0; j < ROWS; j++) {
			grid2[(i * ROWS) + j] = '-';
		}
	}

	int x = 3;
	int y = 1;
	int vx = 1;
	int vy = -1;

	char input;
	while (input != 'q') {
		if (x > 0 && x < COLS-1) {
				x += vx;
			} else {
				vx = -vx;
				x += vx;
			}

		if (y > 0 && y < ROWS-1) {
				y += vy;
			} else {
				vy = -vy;
				y += vy;
			}

		grid2[(x * ROWS) + y] = 'o';

		for (int i = 0; i < COLS; i++) {
			for (int j = 0; j < ROWS; j++) {;
				cout << grid2[(i * ROWS) + j];
			}
			cout << endl;
		}

		for (int i = 0; i < ROWS; i++) {
			for (int j = 0; j < COLS; j++) {
				grid2[(i * ROWS) + j] = '-';
			}
		}

		cin >> input;

	}


	//________________________________________________________________

	return 0;
}