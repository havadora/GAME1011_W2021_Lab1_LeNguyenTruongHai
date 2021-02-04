#include "Characters.h"

Character::Character()
{
	m_pName = "";
	m_pHealth = 0;
}

Character::Character(string name, int health)
{
	setName() = name;
	setHealth() = health;

}

Character::~Character()
{
	Character() = default;
}

void Character::setName(string name)
{
	m_pName = name;
}

void Character::setHealth(itn health)
{
	m_pHealth = health;
}

string Character::getName()
{
	return m_pName;
}

int Character::getHealth()
{
	return m_pHealth;
}


void Character::DisplayInfor()
{

}
