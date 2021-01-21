#include <string>
#include <iostream>

using namespace std;



class Platform
{
private:

	string m_ArrayPlatformName[3] = {"PlayStaion","Xbox","Switch" };
	string m_ArrayManufactor[3] = { "Sony", "Microsoft", "Nintendo" };
	string m_PlatformName;
	string m_Manufactor;
protected:
	string m_ArrayPSGames[5] = { "God Of War","Detroit:Become Human","The Last Of Us Part II", "Marvel's Spidermam", "Ghost of Tsushima"};
	string m_ArrayXboxGames[5] = { "Quantum Break","Sea of Thieves","Ori and the Will of the Wisps","Ashen","Gears 5" };
	string m_ArraySwitchGames[5] = {"Pokemon Sword", "Pokemon Shield","Animal Crossing","Super Smash Bro: Ultimate","The Legend Of Zelda: Breath of the Wild"};
public:
	
	
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
private:
	// Publisher
	string m_PSPublisher[1] = {"Sony Interactive Entertainment"};
	string m_XboxPublisher[1] = {"Xbox Game Studios"};
	string m_SwitchPublisher[1] = {"Nintendo"};
	//Developer
	string m_PSDeveloper[5] = { "Santa Monica Studio","Quantic Dream","Naughty Dog","Insomniac Games","Sucker Punch Productions" };
	string m_XboxDeveloper[5] = { "Remedy Entertainment","Rare LTD","Moon Studios","A44","The Coalition" };
	string m_SwitchDeveloper[5] = {"GAME FREAK Inc","GAME FREAK Inc","Nintendo","Bandai Namco Studio","Nintendo" };

	string m_GameName;
	string m_Publisher;
	string m_Developer;
protected:
	string m_Achievements[5];

public:

	
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
		switch (choices)
		{
		case 1:
			m_Publisher = m_PSPublisher[1];
			break;
		case 2:
			m_Publisher = m_XboxPublisher[1];
			break;
		case 3:
			m_Publisher = m_SwitchPublisher[1];
			break;
		}
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
			m_Developer = m_ArrayXboxGames[Developerchoices];
			break;
		case 3:
			m_Developer = m_ArraySwitchGames[Developerchoices];
			break;
		}
		return m_Developer;
	}

};
class ACHIEVEMENT : public GAME
{



};