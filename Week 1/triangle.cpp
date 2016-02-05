#include <iostream>
using namespace std;

int main(){
	int length = 1;

	for(int i=0; i<10; i++){ 
		for(int j=0; j<length; j++){ 
			cout << "->"; 
		}
		cout << endl;
		length++;
	}

	for (int i=0; i<10; i++){
		for(int j=0; j<length; j++){
			cout << "->";
		}
		cout << endl;
		length--;
	}

	for (int i=0; i<6; i++){
		for(int j=0; j<length; j++){
			cout << "->";
		}
		cout << endl;
		length++;
	}

	for (int i=0; i<6; i++){
		for(int j=0; j<length; j++){
			cout << "->";
		}
		cout << endl;
		length--;
	}

}