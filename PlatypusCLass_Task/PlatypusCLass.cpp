#include "PlatypusCLass.h"
#include "iostream"
#include "string"
#include "random"
// კონსტრუქტორების და დესტრუქტორის იმპლემენტაციები
PlatypusCLass::PlatypusCLass(float weight, short age, string name, char gender) {
	this->weight = weight;
	this->age = age;
	this->name = name;
	this->gender = gender;
	alive = true;
	mutant = false;
}
PlatypusCLass::PlatypusCLass() {
	weight = 0.0;
	age = 0;
	name = "NoName";
	gender = '-';
	alive = false;
	mutant = false;
}
PlatypusCLass::~PlatypusCLass() = default;
// პრიობაში მოცემული ფუნქიცების იმპლემენტაციები
void::PlatypusCLass::age_me() {
	// იმ შემთხვევაში თუ იხვნისკარტა ცოცხალია მოემატება ასაკი და გაიზრდება სიკვდილის შანსი, ასევე შესაძლოა გადაიქცეს მუტანტად
	if (alive) {
		age++;
		float death = (weight * 10);
		cout << "Chance of dying: " << death << "%" << endl;
		// 2% იმის შანსი რომ იხვნისკარტა გახდეს მუტანტი
		int mutation = rand() % 100;
		if (mutation == 2)
			mutant = true;
		cout << "Mutation status: " << boolalpha << mutant << endl;
	}
	else
		cout << "Platypus isn't alive..." << endl;
}
void PlatypusCLass::eat() {
	// ფუნქცია eat ის იმპლემეტაცია რომელიც ზრდის იხვნისკარტას წონას რამდომად მისი მიმდინარე წონის 0.1% - 5.0% -ით. 
	if (alive) {
		weight = weight + (float)(rand() % 5) * 0.01;
		cout << "After 'eat' function Platypus wieght is: " << weight << " kg" << endl;
	}
	else
		cout << "Platypus isn't alive..." << endl;
}
void::PlatypusCLass::hatch(string name) {
	// იხვნისკარტას დაბადებისთვის აუცილებელი პირობები
	alive = true;
	mutant = false;
	age = 0;
	// იხვნისკარტას წონის გენერირება რენდომად
	weight = (float)(rand() % 10) * 0.1;
	// იხვნისკარტას სქესის გენერირება რენდომად
	default_random_engine generator(time(0));
	uniform_int_distribution<int> distribution(1, 2);
	if (distribution(generator) == 1)
		gender = 'm';
	else
		gender = 'f';
	// მცირე ინფორმაცია ახალ დაბადებულ იხვნისკარტაზე
	cout << "We have new platypus... " << endl;
	cout << "It's weight: " << weight << " kg" << endl;
	cout << "It's gender: " << gender << endl;
	cout << "Newborn platypus name: " << name << endl;
}
void PlatypusCLass::fight(PlatypusCLass& other_platypus) {
	// ძალების შეფარდება '(calling_platypus წონა /other_platypus წონა) * 50'
	float fight_ratio = (weight / other_platypus.weight) * 50;
	// შემთხვევითი რიცხვის გენერირება fight_ratio - სთან შესადარებლად
	int fRandom = rand() % 100;
	// შედარება რათა გაირკვეს გამარჯვებული იხვნისკარტის ვინაობა 
	if (fRandom < fight_ratio) {
		alive = true;
		other_platypus.alive = 0;
		cout << "Calling Platypus has won this fight!!!" << endl;
	}
	else if (fRandom > fight_ratio) {
		alive = 0;
		other_platypus.alive = 1;
		cout << "Other Platypus has won this fight!!!" << endl;
	}
	else
		cout << "They are both strong! don't call fight function again :) " << endl;
}
void PlatypusCLass::printInfo() const {
	cout << "=========================================================" << endl;
	// ვბეჭდავ ინფორმაციას იხნვისკარტაზე ასევე ვამოწმებ ცოცხალია და მუტანტია თუ არა იხვნისკარტა
	if (alive)
	{
		cout << "Platypus is alive" << endl;
		cout << "Name: " << name << endl;
		cout << "Weight: " << weight << " kg " << endl;
		cout << "Age: " << age << endl;
		cout << "Gender: " << gender << endl;
	}
	else {
		cout << "Platypus is dead" << endl;
		cout << "It's Name was: " << name << endl;
		cout << "It's Weight was: " << weight << endl;
		cout << "It's Age was: " << age << endl;
		cout << "It's Gender was: " << gender << endl;
	}
	if (mutant)
		cout << "Also Platypus is a mutant" << endl;
	else
		cout << "Also Platypus is not a mutant" << endl;
	cout << "=========================================================" << endl;
}
// Getter - ების და setter - ების იმპლემენტაცია
// ვიცი რომ setter - ბეს const არუნდა დავუწერო უბრალოდ რახან არ ვცვლი არაფერს მაინც მივუწერე იმედია ქულა არ დამაკლდება :)
float::PlatypusCLass::getWeight()const {
	return weight;
}
void::PlatypusCLass::setWeight(float wieght)const {
	cout << "You aren't magician <3 " << endl;
}
short::PlatypusCLass::getAge()const {
	return age;
}
void::PlatypusCLass::setAge(short age)const {
	cout << "Nope! Use 'age_me()' function " << endl;
}
string PlatypusCLass::getName()const {
	return name;
}
void::PlatypusCLass::setName(string name)const {
	cout << "Platypus already has a name!" << endl;
}
char::PlatypusCLass::getGender()const {
	return gender;
}
void::PlatypusCLass::setGender(char gender)const {
	cout << "Platypus already has it's gender!" << endl;
}