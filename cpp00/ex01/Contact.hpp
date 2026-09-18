#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>

class Contact {
	private:
	// ATRIBUTOS PRIVADOS:
    // Nadie fuera de esta clase puede leer o modificar estos valores directamente.
    // Usamos snake_case con prefijo '_' para identificar que son variables miembro.
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkestSecret;
	
	public: 
	//Estas funciones son la "interfaz" externa para interactuar con los datos privados.
	Contact(); // CONSTRUCTOR: Se ejecuta automáticamente al crear un objeto Contact.
	~Contact(); // DESTRUCTOR: Se ejecuta automáticamente al destruir el objeto.

	// SETTERS (Modificadores):
    // Reciben un string y lo guardan en el atributo privado correspondiente.
    // Usamos lowerCamelCase para los métodos.
	void setFirstName(std::string str);
	void setLastName(std::string str);
	void setNickName(std::string str);
	void setPhoneNumber(std::string str);
	void setDarkestSecret(std::string str);

	// GETTERS (Obtenedores):
    // Devuelven el valor del atributo privado.
    // Ponemos 'const' al final porque Prometen NO modificar nada dentro del objeto.
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickName() const;
	std::string getPhoneNumber() const;
	std::string getDarkestSecret() const;
};
#endif