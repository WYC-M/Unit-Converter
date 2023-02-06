# include <iostream>

//kg/m^3
void density_kgm_gcm(double densitykgm)//kg/m^3-g/cm^3
{
	std::cout << densitykgm;
	std::cout << "kg/m^3=";
	std::cout << (densitykgm / 1000);
	std::cout << "g/cm^3" << std::endl;
}

//g/cm^3
void density_gcm_kgm(double densitygcm)//g/cm^3-kg/m^3
{
	std::cout << densitygcm;
	std::cout << "kg/m^3=";
	std::cout << (densitygcm * 1000);
	std::cout << "g/cm^3" << std::endl;
}