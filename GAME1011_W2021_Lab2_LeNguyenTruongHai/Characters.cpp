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

int Character::getHealth()
{
	return m_pHealth;
}

Weapon::Weapon()
{
	m_pWeapon = "";
		m_pDam = 0;
		m_pDes = "";
		m_pSkill = 0;
}

Weapon::Weapon(string name, int Dam, string description, Skill* skills)
{
	setName(name);
	setDam( Dam);
	setDes( description);
	setSkill(skills);
}

void Weapon::setName(string name)
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

void Weapon::setSkill(Skill* skills)
{
	m_pSkill = skills;
}

string Weapon::getName()
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

Skill* Weapon::getSkill() const
{
	return m_pSkill;
}

void Weapon::DisplayInfor() 
{
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

string Classe::getInHealth()
{
	return string();
}

void Classe::setInHealth()
{
}

int Classe::getHealth() const
{
	return 0;
}
