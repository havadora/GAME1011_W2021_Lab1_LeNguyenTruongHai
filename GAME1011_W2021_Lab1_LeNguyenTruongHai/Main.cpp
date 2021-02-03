#include <string>
#include <iostream>

using namespace std;



class Platform
{
public:
	static const int  size = 3;
	static const int  Game_size = 5;
private:
	
	string m_ArrayPlatformName[size] = {"PlayStaion","Xbox","Switch" };
	string m_ArrayManufactor[size] = { "Sony", "Microsoft", "Nintendo" };
	string m_PlatformName;
	string m_Manufactor;
protected:
	string m_ArrayPSGames[Game_size] = { "God Of War","Detroit:Become Human","The Last Of Us Part II", "Marvel's Spidermam", "Ghost of Tsushima"};
	string m_ArrayXboxGames[Game_size] = { "Quantum Break","Sea of Thieves","Ori and the Will of the Wisps","Ashen","Gears 5" };
	string m_ArraySwitchGames[Game_size] = {"Pokemon Sword", "Pokemon Shield","Animal Crossing","Super Smash Bro: Ultimate","The Legend Of Zelda: Breath of the Wild"};
public:
	void PlatformPrint() const
	{
		for (int i = 0; i < size; i++)
		{
			cout << i+1 <<". " << m_ArrayPlatformName[i] << endl;

		}
	}
	
	string GetPlatName(int choices)
	{
		m_PlatformName = m_ArrayPlatformName[choices];
		return m_PlatformName;
	}
	string GetManu(int choices)
	{
		m_Manufactor = m_ArrayManufactor[choices];
		return m_Manufactor;
	}
	
};

class GAME : public Platform
{
public:
	static const int  Publicsher_Size = 3;
	static const int  Dev_size = 5;
private:
	// Publisher
	string m_ArrayPublisher[Publicsher_Size] = {"Sony Interactive Entertainment","Xbox Game Studios","Nintendo" };
	//Developer
	string m_PSDeveloper[Dev_size] = { "Santa Monica Studio","Quantic Dream","Naughty Dog","Insomniac Games","Sucker Punch Productions" };
	string m_XboxDeveloper[Dev_size] = { "Remedy Entertainment","Rare LTD","Moon Studios","A44","The Coalition" };
	string m_SwitchDeveloper[Dev_size] = {"GAME FREAK Inc","GAME FREAK Inc","Nintendo","Bandai Namco Studio","Nintendo" };

	string m_GameName;
	string m_Publisher;
	string m_Developer;
public:
	void GamePrint(int choices) const
	{
		switch (choices)
		{
		case 1:
			for (int i = 0; i < Game_size; i++)
			{
				cout << i + 1 << ". " << m_ArrayPSGames[i] << endl;
			}
			break;
		case 2:
			for (int i = 0; i < Game_size; i++)
			{
				cout << i + 1 << ". " << m_ArrayXboxGames[i] << endl;
			}
			break;
		case 3:
			for (int i = 0; i < Game_size; i++)
			{
				cout << i + 1 << ". " << m_ArraySwitchGames[i] << endl;
			}
			break;
		}
	}
	
	string GetGameNames(int choices, int Gamechoices)
	{
		switch (choices)
		{
		case 1:
			m_GameName = m_ArrayPSGames[Gamechoices];
			break;
		case 2:
			m_GameName = m_ArrayXboxGames[Gamechoices];
			break;
		case 3:
			m_GameName = m_ArraySwitchGames[Gamechoices];
			break;
		}
		return m_GameName;
	}
	string GetPublisher(int choices)
	{
		m_Publisher = m_ArrayPublisher[choices];
		return m_Publisher;
	}
	string GetDeveloper(int choices, int Developerchoices)
	{
		switch (choices)
		{
		case 1:
			m_Developer = m_PSDeveloper[Developerchoices];
			break;
		case 2:
			m_Developer = m_XboxDeveloper[Developerchoices];
			break;
		case 3:
			m_Developer = m_SwitchDeveloper[Developerchoices];
			break;
		}
		return m_Developer;
	}

};
class ACHIEVEMENT : public GAME
{
private:
	string m_Tilte;
	string m_Decsription;
	string m_ScoreValue;
	
	
	
public:
	ACHIEVEMENT()
	{
		m_Tilte = "NONE";
		m_Decsription = "NONE";
		m_ScoreValue = "NONE";
	}
	ACHIEVEMENT(string Tilte,  string Decsription, string ScoreValue) 
	{
		
		SetTitle(Tilte);
		SetDecsription(Decsription);
		SetValue(ScoreValue);
	}
	void SetTitle(string title)
	{	
		m_Tilte = title;
	}
	void SetDecsription(string descrpition)
	{
		m_Decsription = descrpition;
	}
	void SetValue(string value)
	{
		
		m_ScoreValue = value;
	}
	string GetTitle()
	{
		return m_Tilte;
	}
	
	string GetDescription()
	{
		return m_Decsription;
	}

	string GetValue()
	{
		return m_ScoreValue;
	}
	

};


int main()
{
	Platform platform;
	GAME Game;
	ACHIEVEMENT ach;

	int Platformchoices;
	int Gamechoices;
	int AchievementSize;
	string title;
	string description;
	string value;
	bool options = true;
	int OPnumber;
	string* m_PtrTitle = nullptr;
	string* m_PtrDescription = nullptr;
	string* m_PtrScoreValue = nullptr;

	

	cout << "What is the platform you want to choose (Enter the number) ? " << endl;
	platform.PlatformPrint();
	cin >> Platformchoices;

	cout << "====================================================================" << endl;
	cout << "The Platform: " << platform.GetPlatName(Platformchoices-1) << endl;
	cout << "The Manufacturer: " << platform.GetManu(Platformchoices-1) << endl;
	cout << "====================================================================" << endl;
	cout << endl;

	cout << "Chose 1 of 5 exclusive games on " << platform.GetPlatName(Platformchoices - 1) << " (Enter the number) ?" << endl;
	Game.GamePrint(Platformchoices);
	cin >> Gamechoices;

	cout << "====================================================================" << endl;
	cout << "The Game: " << Game.GetGameNames(Platformchoices, Gamechoices-1) << endl;
	cout << "The Publisher: " << Game.GetPublisher(Platformchoices-1) << endl;
	cout << "The Developer: " << Game.GetDeveloper(Platformchoices, Gamechoices-1) << endl;
	cout << "====================================================================" << endl;
	cout << endl;

	cout << "How many achievements do u want in " << Game.GetGameNames(Platformchoices, Gamechoices - 1) << " ?" << endl;
	cin >> AchievementSize;

	m_PtrTitle = new string[AchievementSize];
	m_PtrDescription = new string[AchievementSize];
	m_PtrScoreValue = new string[AchievementSize];

	while (options == true)
	{
		for (int i = 0; i < AchievementSize; i++)
		{
			cin.ignore();
			cout << "Achivement " << i+1 << endl;
			cout << "Enter the title: ";
			getline(std::cin, title);
			cout << "Enter the description: ";
			getline(std::cin, description);
			cout << "Enter the score value: ";
			cin >> value;
			ach.SetTitle(title);
			ach.SetDecsription(description);
			ach.SetValue(value);

			m_PtrTitle[i] = ach.GetTitle();
			m_PtrDescription[i] = ach.GetDescription();
			m_PtrScoreValue[i] = ach.GetValue();
		}
		cin.ignore();
		cout << "Do you want to add more ? (1-yes|0-no) ";
		cin >> OPnumber;
		if (OPnumber == 1)
		{
			cout << "How many achievements do u want in " << Game.GetGameNames(Platformchoices, Gamechoices - 1) << " ?" << endl;
			cin >> AchievementSize;
		}
		else
		{
			options = false;
		}
	}
	cout << endl;
	cout << "==============================================================================" << endl;
	cout << "The Platform: " << platform.GetPlatName(Platformchoices - 1) << endl;
	cout << "The Manufacturer: " << platform.GetManu(Platformchoices - 1) << endl;
	cout << "The Game: " << Game.GetGameNames(Platformchoices, Gamechoices - 1) << endl;
	cout << "The Publisher: " << Game.GetPublisher(Platformchoices - 1) << endl;
	cout << "The Developer: " << Game.GetDeveloper(Platformchoices, Gamechoices - 1) << endl;
	for (int i = 0; i < AchievementSize; i++)
	{
		cout << "The Achievement " << i + 1 << "Title: " << m_PtrTitle[i] << endl;
		cout << "The Achievement " << i + 1 << "Description: " << m_PtrDescription[i] << endl;
		cout << "The Achievement " << i + 1 << "Score Value: " << m_PtrScoreValue[i]  << endl;
	}
	cout << "==============================================================================" << endl;
	delete[] m_PtrTitle;
	delete[] m_PtrDescription;
	delete[] m_PtrScoreValue;
}