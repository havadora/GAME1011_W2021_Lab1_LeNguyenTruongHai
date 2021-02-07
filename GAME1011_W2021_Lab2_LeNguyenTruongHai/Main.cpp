#include "Characters.h"
#include "iostream"

using namespace std;


void main()
{
	const int number = 5;
	int title;
	int sizes = 0;
	int weaOp;
	int turn = 0;
	string name;
	bool quit = true;
	int options;
	int del;
	Classe* classOps = new Classe[number];
	Weapon* weaponOps = new Weapon[number];
	
	weaponOps[0] = { "Club", 100, "Slow ATK-SPD, High Damage", "Heavy Slam", 0};
	weaponOps[0].setSkill( "Smash", 1 );
	weaponOps[1] = { "Sword", 60, "Medium ATK-SPD, Medium Damage", "Spin Sword", 0 };
	weaponOps[1].setSkill( "Judgement", 1 );
	weaponOps[2] = { "Dagger", 30, "High ATK-SPD, Low Damage", "Assasinate", 0 };
	weaponOps[2].setSkill ("Throwing", 1 );

	

	cout << "Welcome to customize character shop !!" << endl;
	cout << "You allow to make maxium 5 characters " << endl;
	cout << endl;
	
	Classe delClass;
	Weapon delWeapon;

	Classe* Class = new Classe[number];
	Weapon* weapon = new Weapon[number];
	
	while (quit == true )
	{
		cout << "Menu options" << endl;
		cout << "1. Create character" << endl;
		cout << "2. List of characters" << endl;
		cout << "3. Delete character " << endl;
		cout << "4. Quit " << endl;
		cin >> options;
		cout << "=====================================" << endl;
		
		switch (options)
		{
		case 1:	
			cout << "How many character do you want to make ? ";
			cin >> sizes;

			if (turn == 0)
			{
				for (int i = 0; i < sizes; i++)
				{

					cout << "=====================================" << endl;
					cout << "Your character number " << i + 1 << endl;
					cout << "Enter your character name: ";
					cin >> name;
					cout << "Please choose your class: " << endl;
					cout << "1. Demon" << endl;
					cout << "2. Human" << endl;
					cout << "3. Angel" << endl;
					cin >> title;
					if (title == 1)
					{
						classOps[1] = { name, 80, "Reaper" };
						Class[i] = classOps[1];
					}
					else if (title == 2)
					{
						classOps[1] = { name, 100, "Knight" };
						Class[i] = classOps[1];
					}
					else if (title == 3)
					{
						classOps[1] = { name, 120, "Valkyrie" };
						Class[i] = classOps[1];
					}
					cout << "=====================================" << endl;
					cout << "Choose your weapon: " << endl;
					for (int i = 0; i < 3; i++)
					{
						cout << "Weapon " << i + 1 << ": " << endl;
						weaponOps[i].DisplayInfor();
						cout << " " << endl;
					}
					cin >> weaOp;
					if (weaOp == 1)
					{
						weapon[i] = weaponOps[1];
					}
					else if (weaOp == 2)
					{
						weapon[i] = weaponOps[2];
					}
					else if (weaOp == 3)
					{
						weapon[i] = weaponOps[3];
					}
					turn = i;
				}
			}
			else if (turn != 0)
			{
				for (int i = 0; i < sizes; i++)
				{
					i = turn + 1;
					sizes = turn;
					cout << "=====================================" << endl;
					cout << "Your character number " << i + 1 << endl;
					cout << "Enter your character name: ";
					cin >> name;
					cout << "Please choose your class: " << endl;
					cout << "1. Demon" << endl;
					cout << "2. Human" << endl;
					cout << "3. Angel" << endl;
					cin >> title;
					if (title == 1)
					{
						classOps[1] = { name, 80, "Reaper" };
						Class[i] = classOps[1];
					}
					else if (title == 2)
					{
						classOps[1] = { name, 100, "Knight" };
						Class[i] = classOps[1];
					}
					else if (title == 3)
					{
						classOps[1] = { name, 120, "Valkyrie" };
						Class[i] = classOps[1];
					}
					cout << "=====================================" << endl;
					cout << "Choose your weapon: " << endl;
					for (int i = 0; i < 3; i++)
					{						
						cout << "Weapon " << i + 1 << ": " << endl;
						weaponOps[i].DisplayInfor();
						cout << " "<< endl;
					}
					cin >> weaOp;
					if (weaOp == 1)
					{
						weapon[i] = weaponOps[1];
					}
					else if (weaOp == 2)
					{
						weapon[i] = weaponOps[2];
					}
					else if (weaOp == 3)
					{
						weapon[i] = weaponOps[3];
					}
				
					turn = i;
				}
			}	
			break;
			
		case 2:
			for (int i = 0; i < 5; i++)
			{
				cout << "=====================================" << endl;
				Class[i].DisplayInfor();
				weapon[i].DisplayInfor();
			}
			break;
		case 3:
			cout << "=====================================" << endl;
			cout << "Choose character you want to delete: ";
			cin >> del;

			Class[del-1] = delClass;
			weapon[del-1] = delWeapon;
			break;
		case 4:
			quit = false;
			break;
		}
		
	}
	delete[]  classOps;
	delete[] weaponOps;

}