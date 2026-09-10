#include "Contact.hpp"
//DEFINIR CONSTRUCTOR POR DEFECTO
Contact::Contact()
{

}
Contact::~Contact()
{

}

//el operador 'Contact::'
// Le dice al compilador: "La función setFirstName le pertenece a la clase Contact".
void Contact::setFirstName(std::string str) {
	this->_firstName = str; //guarda el valor recibido en el atributo
}
void Contact::setLastName(std::string str) {
	this->_lastName = str;
}

void Contact::setNickName(std::string str) {
	this->_nickName = str;
}

void Contact::setPhoneNumber(std::string str) {
	this->_phoneNumber = str;
}

void Contact::setDarkestSecret(std::string str) {
	this->_darkestSecret = str;
}

//getters: Retorna el atributo privado de forma segura.

std::string Contact::getFirstName() const {
	return (this->_firstName);
}
std::string Contact::getLastName() const {
	return (this->_lastName);
}
std::string Contact::getNickName() const {
	return (this->_nickName);
}
std::string Contact::getPhoneNumber() const {
	return (this->_phoneNumber);
}
std::string Contact::getDarkestSecret() const {
	return (this->_darkestSecret);
}