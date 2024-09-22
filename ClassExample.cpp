#include <iostream>

class House
{
	// Atributes (represented by variables)
private: // The atributes must be set as private to prevent the free change of them. 
	// Anything you don't want to be modified out of the class must be set as private. 
	int RoomsNumber{ 3 };
	float Size { 200.0f };
	bool bHasSuite{ true }; // Usually it's added a 'b' to indicate a boolean variable.
public: // Can be accessed out of the class
	// Bellow this line (after the atributes) comes the methods of a class aka functions in structured programming.
	void ShowSize();
	int ObtainRoomsNumber();
	bool HasSuite();
	void SetRoomsNumber(int Num); // This method is used to set the number of rooms. It is safer than setting it directly.
	// Only public attributes and methods can be accessed out of the class.
};

int main()
{
	// Instantiation of an object called BeachHouse
	House BeachHouse;
	std::cout << "Size of the house: ";
	BeachHouse.ShowSize(); 
	std::cout << "\n";
	std::cout << "Number of rooms: " << BeachHouse.ObtainRoomsNumber();
	std::cout << "\n";
	std::cout << "Does it has suites? ";
	if (BeachHouse.HasSuite())
		std::cout << "Yes\n";
	else 
		std::cout << "No\n";
	//BeachHouse.SetRoomsNumber(1000);
}

/* 
* The methods of a class are declared after the main code, the same way as a function can be.
* The declaration is similar to a function: typeOfReturn ClassName::MethodName()
*/
void House::ShowSize()
{
	std::cout << Size << " square meters";
}

int House::ObtainRoomsNumber()
{
	return RoomsNumber;
}

bool House::HasSuite()
{
	return bHasSuite;
}

void House::SetRoomsNumber(int Num)
{
	if ((Num <= 6) && (Num > 0))
	{
		RoomsNumber = Num;
	}
	else
	{
		std::cout << "Invalid number of rooms!\n";
	}
}
