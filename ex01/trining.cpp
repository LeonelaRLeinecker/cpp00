#include <iomanip>
#include <iostream>
#include <string>

const int MAX_CONTACTS = 8;

class Contact {
    public: 
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;

    // constructor que se llama cuando se inicializa
    // la lista de phonebook por primera vez
    Contact(){};

    void setContact(
        std::string firstName,
        std::string lastName,
        std::string nickName, 
        std::string phoneNumber, 
        std::string darkSecret
    ) {
            this->firstName = firstName;
            this->lastName = lastName;
            this->nickName = nickName;
            this->phoneNumber = phoneNumber;
            this->darkSecret = darkSecret;
    }

    void display() {
        std::cout << firstName << "|" << lastName << "|" << nickName << "|" << std::endl;
    }
   
    private:
    std::string darkSecret;
};

class PhoneBook {
    public:
        void display(){
            for (int i = 0; i < count; i++)
            {
                std::cout << i << "|";
                contacts[i].display();
            }
        }

        void ADD(
            std::string firstName,
            std::string lastName,
            std::string nickName, 
            std::string phoneNumber, 
            std::string darkSecret
        ) {
            contacts[index].setContact(
                firstName,
                lastName,
                nickName,
                phoneNumber,
                darkSecret
            );

            index = (index + 1) % MAX_CONTACTS;
            if(count < MAX_CONTACTS) count++;
        }

		void SEARCH(void)
		{
			std::string str;
			for (int i = 0; i < count; i++)
			{
				str = this-phoneBook[i].

			}

		}


    private:
        Contact contacts[MAX_CONTACTS];
        int count = 0;
        int index = 0;
};


int main()
{
    PhoneBook phoneBook;
    phoneBook.add("Cono0", "GB", "elmaskpito", "1234", "tmb le gusta xuxa");
    phoneBook.add("Cono1", "GB", "elmaskpito", "1234", "tmb le gusta xuxa");
    phoneBook.add("Cono2", "GB", "elmaskpito", "1234", "tmb le gusta xuxa");


    phoneBook.display();
};