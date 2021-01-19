#include <string>
#include <iostream>

using namespace std;


class Platform
{
private:

	string platformName;
	string Manufactor;
	string Games;

public:
	Platform()
	{
		platformName = "NONE";
		Manufactor   = "NONE";
		Games        = "NONE";
	}
	Platform(string PlatName, string Manufactors, string Game)
	{
		platformName = PlatName;
		Manufactor = Manufactors;
		Games = Game;
	}
	string GetPlatName()
	{
		return platformName;
	}
	string GetManu()
	{
		return Manufactor;
	}
};

class GAME
{
private:

	string GameName;
	string Publisher;
	string Developer;

public:

};