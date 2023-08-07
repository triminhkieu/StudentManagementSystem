#include "Option.h"

int Option::getChoice(vector<string> options)
{
	for (int i = 0; i < options.size(); i++)
	{
		cout << i + 1 << " - " << options[i] << endl;;
	}
	int choice;
	std::cout << "Enter your choice (1.." << options.size() << "): " << endl;
	std::cin >> choice;

	while (choice < 1 || choice >(options.size() + 1)) {
		std::cout << "Invalid choice. Please try again: " << endl;
		std::cin >> choice;
	}

	return choice;
}
