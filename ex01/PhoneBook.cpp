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
		std::cout << "Input your name:"
	}
}
