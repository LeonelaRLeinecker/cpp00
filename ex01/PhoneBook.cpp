#include "PhoneBook.hpp"

//constructor: inicializamos variables numericas a cero
PhoneBook::PhoneBook() {
	this->_index = 0;
	this->_count = 0;
}
PhoneBook::~PhoneBook() {

}
//MÓDULO (% 8) para que al llegar a 8, vuelva a 0 (sobrescribir el más antiguo).
void PhoneBook::addContact() {
	std::string input;
	int pos = this->_index % 8;
	std::cout << "--- add new contact ---" << std::endl;
	input = "";
	while (input.empty()) {
		std::cout << "enter your First name:";
		if (!std::getline(std::cin, input)) //controla error o cierre de programa
			return ;
	}
	this->_contacts[pos].setFirstName(input);
	input = "";
	while (input.empty()) {
		std::cout << "enter your Last name:";
		if (!std::getline(std::cin, input))
			return ;
	}
	this->_contacts[pos].setLastName(input);
	input = "";
	while (input.empty()) {
		std::cout << "enter your Nick name:";
		if (!std::getline(std::cin, input))
			return ;
	}
	this->_contacts[pos].setNickName(input);
	input = "";
	while (input.empty()) {
		std::cout << "tipe your phone number";
		if (!std::getline(std::cin, input))
			return ;
	}
	this->_contacts[pos].setPhoneNumber(input);
	input = "";
	while (input.empty()) {
		std::cout << "enter your darkest secret";
		if (!std::getline(std::cin, input))
		 return ;
	}
	this->_contacts[pos].setDarkestSecret(input);

	//incrementar indices
	this->_index++;
	if (this->_count < 8)
		_count++;
	//mensaje salida
	std::cout << "Contact added successufuly on index [" << pos << "]\n" << std::endl;

}
void PhoneBook::_printFormattedColumn(std::string str) const {
	// Si el texto supera los 10 caracteres, truncamos a 9 y añadimos '.'
	if (str.length() > 10) {
		str = str.substr(0, 9) + ".";
	}
	std::cout << 
}