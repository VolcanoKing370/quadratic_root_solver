#include <iostream>
#include <math.h>

float a, b, c;
float root1, root2;

// main program
int main(){
	std::cout << "Welcome to the Quadratic root solver!" << std::endl << std::endl << std::endl;
	std::cout << "Enter the coefficients.\na:";
	std::cin >> a;
	std::cout << "b:";
	std::cin >> b;
	std::cout << "c:";
	std::cin >> c;
	
	float discriminant = b*b -(4*a*c);
	
	std::cout << "The Discriminant is: " << discriminant << std::endl;
	
	if(discriminant < 0) {
		std::cout << "Sorry chief, the discriminant is negative, no real roots" << std::endl;
		discriminant = -1*discriminant;
		root1 = sqrt(discriminant)/(2*a);	// imaginary component 	(Im)
		root2 = -1*b/(2*a);					// real component 		(Re)
		std::cout << "But we have complex roots:" << std::endl << "x = " << root2 << " + " << root1 << "i" << std::endl << "x = " << root2 << " - " << root1 << "i" << std::endl;
		return 0;
	}
	
	if (discriminant == 0) {
		root1 = -1*b / (2*a);
		std::cout << "There is one real root: x = " << root1 << std::endl;
		return 0;
	}
	
	root1 = (-1*b - sqrt(discriminant))/(2*a);
	root2 = (-1*b + sqrt(discriminant))/(2*a);
	
	std::cout << "There are two roots:" << std::endl << "x = " << root1 << std::endl << "x = " << root2 << std::endl;
	
	return 0;
}