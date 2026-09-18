#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include <iostream>
# include <iomanip>
#include <cctype>

class PhoneBook {
	private: 
		// 1. Array estático de 8 instancias de la clase Contact (el subject prohíbe memoria dinámica).
		Contact _contacts[8];

		int _index; //índice para asignar posiciones
		int _count; //contador de contactos
		void _printFormattedColumn(std::string str) const;
		void _displayTable() const;
	public:
	PhoneBook(); //cosntructor
	~PhoneBook(); //destructor

	void addContact();
	void searchContact();
};
#endif