
#include <iostream>
#include <string>
#include <vector>

class personRecord {
private:
	char name[90], address[90];
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
	void setName(char* name) {
		strcpy_s(this->name, 89, name);
	}
	void setAddress(char* address) {
		strcpy_s(this->address, 89, address);
	}
	void setGender(bool gender) {
		this->gender = gender;
	}
	void setMarried(bool married) {
		this->married = married;
	}

	void print() {
		printf("Name:\t\t%s\nAge:\t\t%i\n", this->name, this->age);
		if (this->gender)
			printf("Gender:\t\tMale\n");
		else
			printf("Gender:\t\tFemale\n");
		printf("Address:\t%s\n", this->address);
		if (this->married)
			printf("Married:\tYes\n");
		else
			printf("Married:\tNo\n");
		printf("Height:\t\t%g\n\n", this->height);
	}
};

personRecord addPerson() {
	char input[90];
	char killmeplz[90];
	int len;
	int fields;
	personRecord currentPerson;
	printf("\nWhat is your name: ");
	fields = scanf_s("%89s%89[^\n]", input, _countof(input), killmeplz, _countof(killmeplz));
	len = strlen(input);
	if (fields > 1) {
		//input[len] = ' ';
		strcpy_s(input + len, 89 - len, killmeplz);
	}
	printf("Found <<%s>>\n", input);
	currentPerson.setName(input);

	printf("\nWhat is your age: ");
	scanf_s("%89s", input, _countof(input));
	currentPerson.setAge(std::stoi(input));

	printf("\nAre you a\n0: Girl\t1: Boy\nInput: ");
	scanf_s("%89s", input, _countof(input));
	currentPerson.setGender(std::stoi(input));

	printf("\nWhat is your address: ");
	fields = scanf_s("%89s%89[^\n]", input, _countof(input), killmeplz, _countof(killmeplz));
	len = strlen(input);
	if (fields > 1) {
		//input[len] = ' ';
		strcpy_s(input + len, 89 - len, killmeplz);
	}
	currentPerson.setAddress(input);

	printf("\nAre you\n0: Not Married\t1: Married\nInput: ");
	scanf_s("%89s", input, _countof(input));
	currentPerson.setMarried(std::stoi(input));

	printf("\nWhat is your height (in meters): ");
	scanf_s("%89s", input, _countof(input));
	currentPerson.setHeight(atof(input));

	return currentPerson;
}

void printAll(std::vector<personRecord> list) {
	printf("Printing all persons\n\n");
	int len = list.size();
	for (int i = 0; i < len; i++) {
		list[i].print();
	}
	printf("DONE\n");
}

int main() {
	bool programOn = true;
	int input;
	std::vector<personRecord> personList;
	personRecord currentPerson;
	while (programOn) {
		printf("\nWhat do you want to do\n1: Add person to list\n2: Print persons\n0: Quit\nInput: ");
		
		scanf_s("%i", &input);
		printf("\n");

		switch (input)
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