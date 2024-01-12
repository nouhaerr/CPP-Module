/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 07:49:41 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/01/11 02:00:10 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	this->name = "";
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;   
	std::cout << "Character:: Constructor is called" << std::endl;
}

Character::Character(std::string const &name) : name(name)
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	std::cout << "Character:: Constructor with parameters is called" << std::endl;
}

Character::Character(Character const &copy)
{
	*this = copy;
	std::cout << "Character:: Copy constructor is called" << std::endl;
}

Character&	Character::operator=(Character const &copy)
{
	if (this != &copy)
	{
		this->name = copy.name;
		for (int i = 0; i < 4; i++)
		{
			if (this->inventory[i]) {
				delete this->inventory[i];
				this->inventory[i] = NULL;
			}
		}
		for (int i = 0; i < 4; i++) {
			if (copy.inventory[i])
				this->inventory[i] = copy.inventory[i]->clone();
		}
	}
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
	std::cout << "Character:: Destructor is called" << std::endl;
}

std::string const &	Character::getName() const
{
	return this->name;
}

void	Character::equip(AMateria* m)
{
	if (!m)
	{
		std::cout << this->name << " tried to equip nothing!!\n";
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (!this->inventory[i])
		{
			this->inventory[i] = m;
			break;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
	{
		if (!(this->inventory)[idx])
			std::cout << this->name << " has nothing equipped at slot " << idx << ", he can't unequip it\n";
		else
			this->inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= 3 && this->inventory[idx])
		this->inventory[idx]->use(target);
	else
		std::cout << this->name << "Nothing found to use at index " << idx << std::endl;
}
