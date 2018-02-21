#include <string>
#include <iostream>
#include <sstream>

using namespace std;

int main() {
	string mystr;

	string name, city, college, profession, animalType, animalName;
	int age;

	cout << "Please enter your name, age, a city, a college, a profession, a type of animal, and their name: ";
	getline(cin, mystr);
	stringstream(mystr) >> name >> age >> city >> college >> profession >> animalType >> animalName;

	cout << endl
		 << "There once was a person named " << name << " who lived in " << city << ". "
		 << "At the age of " << age << ", " << name << " went to college at " << college << ". "
		 << name << " graduated and went to work as a " << profession << ". "
		 << "Then, " << name << " adopted a(n) " << animalType << " named " << animalName << ". "
		 << "They both lived happily ever after!" << endl;

	return 0;
}