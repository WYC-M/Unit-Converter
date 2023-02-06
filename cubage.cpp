# include <iostream>

//L
void cubage_L_mL(double cuabgel)//L-mL
{
	std::cout << cuabgel;
	std::cout << "L=";
	std::cout << (cuabgel * 1000);
	std::cout << "mL" << std::endl;
}

//mL
void cubage_mL_L(double cuabgeml)//mL-L
{
	std::cout << cuabgeml;
	std::cout << "mL=";
	std::cout << (cuabgeml / 1000);
	std::cout << "L" << std::endl;
}