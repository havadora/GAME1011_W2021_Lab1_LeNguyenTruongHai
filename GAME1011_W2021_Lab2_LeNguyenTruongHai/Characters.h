#pragma once

#ifndef __CHARACTER__
#define __CHARACTER__
#include <string>
#include <iostream>
using namespace std;


enum Skill {Fire, Devour, Ice};
enum Attack {Light,Medium,Heavy};

class Character 
{
public:
	Character();
	Character(string name, int health);
	~Character();

	void setName(string name);
	void setHealth(int health);
	string getName() const;
	int getHealth();
	virtual void DisplayInfor() const = 0;

private:
	int m_pHealth;
	string m_pName;
	friend class Classe;
};
	
class Weapon : public Character
{
public:

	Weapon();
	Weapon(string name, int Dam, string description, Skill* skills);
	void setName(string name);
	void setDam(int Dam);
	void setDes(string description);
	void setSkill(Skill* skills);
	string getName();
	int getDam();
	string getDes();
	Skill* getSkill() const;
	virtual void DisplayInfor();

private:

	int m_pDam;
	string m_pWeapon;
	string m_pDes;
	Skill* m_pSkill;
	friend class Character;
};

class Classe : public Character
{
public:
	string getClasses() const;
	void setClasses(string clas);
	string getName() const;
	string getInHealth();
	void setInHealth();
	int getHealth() const;

private:
	string m_pTitle;
	int m_pInHealth;
};






#endif // !__CHARACTER__
