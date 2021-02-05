#include "Characters.h"

Character::Character()
{
	m_pName = "";
	m_pHealth = 0;
}

Character::Character(string name, int health)
{
	setName(name);
	setHealth(health);

}

Character::~Character()
{
}

void Character::setName(string name)
{
	m_pName = name;
}

void Character::setHealth(int health)
{
	m_pHealth = health;
}

string Character::getName() const
{
	return m_pName;
}

int Character::getHealth() const
{
	return m_pHealth;
}



Weapon::Weapon()
{
	m_pWeapon = "";
		m_pDam = 0;
		m_pDes = "";
		m_pSkill[0] = { 0 };
}

Weapon::Weapon(string name, int Dam, string description, string skills, int order)
{
	setWeaName(name);
	setDam( Dam);
	setDes( description);
	setSkill(skills,order);
}

void Weapon::setWeaName(string name)
{
	m_pWeapon = name;
}

void Weapon::setDam(int Dam)
{
	m_pDam = Dam;
}

void Weapon::setDes(string description)
{
	m_pDes = description;
}

void Weapon::setSkill(string skills, int order)
{
	m_pSkill[order] = skills;
}

string Weapon::getWeaName()
{
	return m_pWeapon;
}

int Weapon::getDam()
{
	return m_pDam;
}

string Weapon::getDes()
{
	return m_pDes;
}

string Weapon::getSkill(int order) const
{
	return m_pSkill[order];
}

void Weapon::DisplayInfor() 
{
	cout << "Weapon: " << getWeaName() << endl;

}

Classe::Classe(string name, int health, string classes) : Character(name,health)
{
	setClasses(classes);
}

string Classe::getClasses() const
{
	return m_pTitle;
}

void Classe::setClasses(string clas)
{
	m_pTitle = clas;
}

string Classe::getName() const
{
    return  getClasses() + Character::getName();
}

void Classe::DisplayInfor()
{
	cout << "Your character name with class: " << getName() << endl;
}


