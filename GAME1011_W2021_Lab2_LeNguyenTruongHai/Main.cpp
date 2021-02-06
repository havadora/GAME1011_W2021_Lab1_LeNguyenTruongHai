#include "Characters.h"
#include "iostream"

using namespace std;


void main()
{
	const int number = 5;
	int sizes = 0;
	string name;
	bool quit = true;
	int options;
	
	

	cout << "Welcome to customize character shop !!" << endl;
	cout << "You allow to make maxium 5 characters " << endl;
	cout << endl;
	
	Character*  charac[number];

	Classe* Class = new Classe[number];
	Weapon* weapon = new Weapon[number];
	
	while (quit == true)
	{
		cout << "Menu options" << endl;
		cout << "1. Create character" << endl;
		cout << "2. List of characters" << endl;
		cout << "3. Delete character " << endl;
		cout << "4. Quit " << endl;
		cin >> options;

		switch (options)
		{
		case 1:	
		     cout << "Your character number " << sizes + 1 << endl;
		     cout << "Enter your character name: ";
		     cin >> name;
			break;
		case 2:
			for (int i = 0; i < 5; i++)
			{
				Class->DisplayInfor();
				weapon->DisplayInfor();
			}

		case 4:
			options = false;
			break;
		}
		

	}
	


}