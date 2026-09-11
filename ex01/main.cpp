#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
	PhoneBook phoneBook;
	std::string command;

	while (true)
	{
		std::cout << "PhoneBook> ";
		std::cout << "please enter yout choice:" << std::endl;
		std::cout << "ADD to add new contact" << std::endl;
		std::cout << "SEARCH to search a contact" << std::endl;
		std::cout << "EXIT to quite Phonebook" << std::endl;
		if (!std::getline(std::cin, command)) {
			std::cout << std::endl;
			break;
		}

	
		//command type
		if (command == "ADD") {
			phoneBook.addContact();
		
		}
		else if (command == "EXIT") {
			break ;
		}
		else
		{
			std::cout << "unknown command" << std::endl;
		}
	}
	
	return 0;
}