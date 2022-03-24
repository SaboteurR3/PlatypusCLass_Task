#pragma once
#include <string>
using namespace std;
// კლაის Platypus
class PlatypusCLass {
private:
	// ველები
	float weight;
	short age;
	string name;
	char gender;
	bool alive;
	bool mutant;
public:
	// უპარამეტრო კონსტრუქტორი (default constructor) რომელიც ქმნის მკვდარ იხვნისკარტას. 
	PlatypusCLass();
	// პარამეტრებიანი კონსტრუქტორი
	PlatypusCLass(float weight, short age, string name, char gender);
	// უპარამეტრო დესტრუქოტრი
	~PlatypusCLass();
	// Getter - ები და setter - ები
	float getWeight()const;
	void setWeight(float wieght)const;
	short getAge()const;
	void setAge(short age)const;
	string getName()const;
	void setName(string name)const;
	char getGender()const;
	void setGender(char gender)const;
	// სხვა საჭირო ფუნქციები
	void age_me();
	void eat();
	void hatch(string name);
	void fight(PlatypusCLass& other_platypus);
	void printInfo()const;
};