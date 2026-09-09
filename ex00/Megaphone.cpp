#include <cctype>
#include <iostream>

int main (int argc, char **argv)
{
	 int i = 1;
	 if (argc > 1)
	 {
		 while (argv[i])
		 {
			int j = 0;
			while (argv[i][j])
			{
				std::string print = argv[i];
				char upper = std::toupper(print[j]);
				std::cout << upper;
				j++;
			}
			std::cout << " ";
			i++;
		}
		std::cout << std::endl;
	}
	else 
	{
		std::string error = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		std::cout << error << std::endl;
	}
	return 0;
}