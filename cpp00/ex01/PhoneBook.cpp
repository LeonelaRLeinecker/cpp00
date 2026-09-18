#include "PhoneBook.hpp"

//constructor: inicializamos variables numericas a cero
PhoneBook::PhoneBook() {
	this->_index = 0;
	this->_count = 0;
}
PhoneBook::~PhoneBook() {

}

bool isNumeric(const std::string& str) {
	if (str.empty())
		return false;
	for (size_t i = 0; i < str.length(); i++) {
		if (!std::isdigit(str[i]))
			return false;
	}
	return true;
}
//MÓDULO (% 8) para que al llegar a 8, vuelva a 0 (sobrescribir el más antiguo).
void PhoneBook::addContact() {
	std::string input;
	int pos = this->_index % 8;
	std::cout << "--- add new contact ---" << std::endl;
	input = "";
	while (input.empty()) {
		std::cout << "enter your First name: ";
		if (!std::getline(std::cin, input)) //controla error o cierre de programa
			return ;
	}
	this->_contacts[pos].setFirstName(input);
	input = "";
	while (input.empty()) {
		std::cout << "enter your Last name: ";
		if (!std::getline(std::cin, input))
			return ;
	}
	this->_contacts[pos].setLastName(input);
	input = "";
	while (input.empty()) {
		std::cout << "enter your Nick name: ";
		if (!std::getline(std::cin, input))
			return ;
	}
	this->_contacts[pos].setNickName(input);
	input = "";
	while (input.empty()) {
		std::cout << "enter your phone number: ";
		if (!std::getline(std::cin, input))
			return ;
		if (!isNumeric(input)) {
			std::cout << "Error: please type numbers." << std::endl;
			input = "";
		}
	}
	this->_contacts[pos].setPhoneNumber(input);
	input = "";
	while (input.empty()) {
		std::cout << "enter your darkest secret: ";
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
	std::cout << std::setw(10) << std::right << str;
}

void PhoneBook::_displayTable() const {
	std::cout << "---------------------------------------------" << std::endl;
	this->_printFormattedColumn("Index");
	std::cout << "|";
	this->_printFormattedColumn("First Name");
	std::cout << "|";
	this->_printFormattedColumn("Last Name");
	std::cout << "|";
	this->_printFormattedColumn("Nickname");
	std::cout << std::endl;
	std::cout << "---------------------------------------------";
	std::cout << std::endl;
	for (int i = 0; i < _count; i++) {
		std::string indexStr;
		indexStr += (i + '0');
		this->_printFormattedColumn(indexStr);
		std::cout << "|";
		this->_printFormattedColumn(this->_contacts[i].getFirstName());
		std::cout << "|";
		this->_printFormattedColumn(this->_contacts[i].getLastName());
		std::cout << "|";
		this->_printFormattedColumn(this->_contacts[i].getNickName());
		std::cout << std::endl;
	}
	std::cout << "---------------------------------------------";
	std::cout << std::endl;
}

void PhoneBook::searchContact() {
	if (this->_count == 0) {
		std::cout << "The PhoneBook is empty. Please create the contact whith command ADD.";
		std::cout << "---------------------------------------------";
		std::cout << std::endl;
		return;
	}
	this->_displayTable();
	std::string input;
	std::cout << "type the index to search: ";
	if (!std::getline(std::cin, input))
		return;
	if (input.length()  !=1 || input[0] < '0' || input[0] > '7') {
		std::cout << "Error: invalid index." << std::endl;
		std::cout << "---------------------------------------------";
		std::cout << std::endl;
		return;
	}
	int index = input[0] - '0';
	//comprobamos si el índice está dentro del rango 

	if (index >= this->_count) {
		std::cout << "Error: Index over range." << std::endl;
		std::cout << "---------------------------------------------";
		std::cout << std::endl;		
		return;
	}
	std::cout << "\n--- CONTACT DETAILS [" << index << "] ---" << std::endl;
	std::cout << "First Name:        " << this->_contacts[index].getFirstName() << std::endl;
	std::cout << "Last Name:         " << this->_contacts[index].getLastName() << std::endl;
	std::cout << "Nickname:          " << this->_contacts[index].getNickName() << std::endl;
	std::cout << "Phone Number:      " << this->_contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret:    " << this->_contacts[index].getDarkestSecret() << std::endl;
	std::cout << std::endl;
}
