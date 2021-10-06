#include<iostream>
using namespace std;
int main() {
	// game variables
	int room = 1;
	char input;

	cout << "you wake up to find yourself in a dark and scary basement. Try to escape, go ahead. Good Luck" << endl;

	do { // beginning of game loop
		switch (room) {
		case 1:
			cout << "you are in a room. You can go North" << endl;
			cin >> input;
			if (input == 'n')
				room = 2;
			else
				cout << "Nope not an option. There's a wall there" << endl;
			break;
		case 2:
			cout << "you are in room 2. you can go North, or go back South ." << endl;
			cin >> input;
			if (input == 'n')
				room = 3;
			else if (input == 's')
				room = 1;
			else
				cout << "Nope not an option. There's a wall there" << endl;
			break;
		case 3:
			cout << "you are in room 3. you can go East or West, or go back south" << endl;
			cin >> input;
			if (input == 'w')
				room = 4;
			else if (input == 'e')
				room = 5;
			else if (input == 's')
				room = 2;
			else
				cout << "Nope not an option. There's a wall there" << endl;
			break;
		case 4:
			cout << "you are in room 4. you can go East." << endl;
			cin >> input;
			if (input == 'e')
				room = 3;
			else
				cout << "Nope not an option. There's a wall there" << endl;
			break;
		case 5:
			cout << "you are in room 5. you can go North, or back West" << endl;
			cin >> input;
			if (input == 'n')
				room = 6;
			else if (input == 'w')
				room = 3;
		case 6:
			cout << "you are in room 5. you can go North or East, or back South" << endl;
			cin >> input;
			if (input == 'n')
				room = 7;
			else if (input == 'e')
				room = 7;
			else if (input == 's')
				room = 5;
			else
				cout << "Nope not an option. There's a wall there" << endl;
			break;
		}// end switch
	}while(input != 'q'); // end game loop

}
