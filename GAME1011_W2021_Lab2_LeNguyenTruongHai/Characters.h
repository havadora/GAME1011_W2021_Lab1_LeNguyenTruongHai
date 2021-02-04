#pragma once

#ifndef __CHARACTER__
#define __CHARACTER__
#include <string>
using namespace std;


class Character 
{
public:
	Character();
	Character(string name, int health);
	~Character();

	void setName();
	void setHealth();
	string getName(string name);
	int getHealth(int health);
	void DisplayInfor();

private:
	int m_pHealth;
	string m_pName;

};
	








#endif // !__CHARACTER__
