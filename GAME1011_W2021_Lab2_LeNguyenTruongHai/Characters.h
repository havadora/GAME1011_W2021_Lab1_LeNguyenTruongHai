#pragma once

#ifndef __CHARACTER__
#define __CHARACTER__
#include <string>
#include <iostream>
using namespace std;




class Character 
{
public:
	virtual void DisplayInfor() const = 0;
	Character();
	Character(string name, int health);
	~Character();
	
	void setName(string name);
	void setHealth(int health);
	string getName() const;
	int getHealth() const;
	

private:
	int m_pHealth;
	string m_pName;
	friend class Classe;
};
	
class Weapon : public Character
{
public:

	Weapon();
	~Weapon();
	Weapon(string name, int Dam, string description, string skills, int order);
	void setWeaName(string name);
	void setDam(int Dam);
	void setDes(string description);
	void setSkill(string skills, int order);
	string getWeaName() const;
	int getDam() const;
	string getDes() const;
	string getSkill(int order) const;
	virtual void DisplayInfor() const;

private:

	int m_pDam;
	string m_pWeapon;
	string m_pDes;
	string m_pSkill[2];
	friend class Character;
};

class Classe : public Character
{
public:
	Classe();
	~Classe();
	Classe(string name, int health, string classes);
	string getClasses() const;
	void setClasses(string clas);
	string getName() const;
	virtual void DisplayInfor() const;

private:
	string m_pTitle;
	
};






#endif // !__CHARACTER__
