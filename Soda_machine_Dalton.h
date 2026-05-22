#ifndef DRINK_H
#define DRINK_H
#include <iostream>
#include <vector>
class Drink
{
private:
	std::string size;
	std::vector<std::string> flavors;
	double ounces;
	double price;
public:
	Drink();
	void SetSize(const std::string& DrinkSize);
	void AddFlavor(const std::string& Flavor);
	std::string GetSize() const;
	std::vector<std::string> GetFlavors() const;
	double GetOunces() const;
	double GetPrice() const; 
};
#endif
