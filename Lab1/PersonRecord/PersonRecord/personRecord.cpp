
#include <iostream>
#include <string>
#include <vector>

class personRecord {
private:
	std::string name, address;
	int age;
	float height;
	bool gender, married;
public:
	// Creator
	personRecord() {}
	// Destructor
	~personRecord() {}

	void setAge(int age) {
		this->age = age;
	}
	void setHeight(float height) {
		this->height = height;
	}
	void setName(std::string name) {
		this->name = name;
	}
	void setAddress(std::string address) {
		this->address = address;
	}
	void setGender(bool gender) {
		this->gender = gender;
	}
	void setMarried(bool married) {
		this->married = married;
	}

	void print() {
		printf("Name: %s\nAge: %i\n", this->name.c_str(), this->age);
		if (this->gender) 
			std::cout << "Gender: Male\n";
		else 
			std::cout << "Gender: Female\n";
		printf("Address: %s\n", this->address.c_str());
		if (this->married)
			std::cout << "Married: Yes\n";
		else
			std::cout << "Married: No\n";
		printf("Height: %g\n\n", this->height);
	}
};

personRecord addPerson() {
	std::string input;
	personRecord currentPerson;
	std::cout << "\nWhat is your name: ";
	std::getline(std::cin, input);
	currentPerson.setName(input);
	std::cout << "\nWhat is your age: ";
	std::getline(std::cin, input);
	currentPerson.setAge(std::stoi(input));
	std::cout << "\nAre you a\n0: Girl\t1: Boy\nInput: ";
	std::getline(std::cin, input);
	currentPerson.setGender(std::stoi(input));
	std::cout << "\nWhat is your address: ";
	std::getline(std::cin, input);
	currentPerson.setAddress(input);
	std::cout << "\nAre you\n0: Not Married\t1: Married\nInput: ";
	std::getline(std::cin, input);
	currentPerson.setMarried(std::stoi(input));
	std::cout << "\nWhat is your height (in meters): ";
	std::getline(std::cin, input);
	currentPerson.setHeight(std::stof(input));
	return currentPerson;
}

void printAll(std::vector<personRecord> list) {
	int len = list.size();
	for (int i = 0; i < len; i++) {
		list[i].print();
	}
	std::cout << "DONE\n";
}

int main() {
	bool programOn = true;
	std::string input;
	int int_input;
	std::vector<personRecord> personList;
	personRecord currentPerson;
	while (programOn) {
		std::cout	<< "\nWhat do you want to do\n"
					<< "1: Add person to list\n"
					<< "2: Print persons\n"
					<< "0: Quit\n"
					<< "Input: ";
		std::getline(std::cin, input);
		std::cout	<< "\n";
		int_input = std::stoi(input);

		switch (int_input)
		{
		case 1:
			personList.push_back(addPerson());
			break;
		case 2:
			printAll(personList);
			break;
		case 0:
			programOn = false;
			break;
		default:
			break;
		}
	}
}