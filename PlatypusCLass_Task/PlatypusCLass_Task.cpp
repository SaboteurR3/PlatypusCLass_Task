#include <iostream>
#include <chrono>
#include <thread>
#include "PlatypusCLass.h"
using namespace std;

// driver - ი(main)
int main()
{
	// ტესტირება
	cout << "First Platypus hasn't born yet!\nLets check its status: " << endl;
	PlatypusCLass firstPlatypus;
	firstPlatypus.printInfo();
	cout << endl;
	cout << "Calling eat function for first platypus... " << endl;
	firstPlatypus.eat();
	cout << endl;
	cout << "Creating Second Platypus object... \nInfo about second Platypuse: " << endl;
	PlatypusCLass secondPlatypus(3.7, 2, "PlaT2", 'f');
	secondPlatypus.printInfo();
	cout << endl;
	cout << "SecondPlatypus calling age_me function: " << endl;
	secondPlatypus.age_me();
	cout << endl;
	cout << "SecondPlatypus info after calling age_me function: " << endl;
	secondPlatypus.printInfo();
	cout << endl;
	cout << "WariorPlatypus Status: " << endl;
	PlatypusCLass warriorPlatypus(4.9, 3, "PlaT3", 'm');
	warriorPlatypus.printInfo();
	cout << endl;
	cout << "SecondPlatypus is eating: " << endl;
	secondPlatypus.eat();
	cout << "WarriorPlatypus is eating: " << endl;
	warriorPlatypus.eat();
	cout << endl;
	cout << "Fight will start soon..." << endl << endl;
	this_thread::sleep_for(chrono::milliseconds(2000));
	cout << "Fight has started..." << endl << endl;
	this_thread::sleep_for(chrono::milliseconds(8000));
	secondPlatypus.fight(warriorPlatypus);
	cout << endl;
	cout << "Calling 'hatch' function for the first unborn Platypus..." << endl;
	cout << endl;
	this_thread::sleep_for(chrono::milliseconds(3000));
	firstPlatypus.hatch("LittlePlat");
	cout << endl;
	cout << "Can we change its wieght? lets try it: " << endl;
	firstPlatypus.setWeight(2.9);
	cout << "I hope Mr. Burns Would like it <3 " << endl;
}
