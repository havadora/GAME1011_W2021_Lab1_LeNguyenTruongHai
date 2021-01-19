#include <string>
#include <iostream>

using namespace std;


class Platform
{
private:

	string m_PlatformName;
	string m_Manufactor;
	string m_Games[3];

public:
	Platform()
	{
		m_PlatformName = "NONE";
		m_Manufactor   = "NONE";
		this->m_Games[3]  = "NONE";
	}
	Platform(string PlatName, string Manufactors, string Game)
	{
		m_PlatformName = PlatName;
		m_Manufactor = Manufactors;
		this->m_Games[3] = Game;
	}
	string GetPlatName()
	{
		return m_PlatformName;
	}
	string GetManu()
	{
		return m_Manufactor;
	}
};

class GAME : public Platform
{
private:

	string m_GameName;
	string m_Publisher;
	string m_Developer;
	string m_Achievement[3];

public:

	GAME()
	{
		m_GameName = "NONE";
		m_Publisher = "NONE";
		m_Developer = "NONE";
		this->m_Achievement[3] = "NONE";
	}
	GAME(string GameNames, string Publishers, string Developers, string Achievements)
	{
		m_GameName = GameNames;
		m_Publisher = Publishers;
		m_Developer = Developers;
		this->m_Achievement[3] = Achievements;
	}


};