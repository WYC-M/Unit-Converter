# include <iostream>

//km/h
void speed_kmh_ms(double speedkmh)//km/h-m/s
{
	std::cout << speedkmh;
	std::cout << "km/h=";
	std::cout << (speedkmh / 3.6);
	std::cout << "m/s" << std::endl;
}

//m/s
void speed_ms_kmh(double speedms)//m/s-km/h
{
	std::cout << speedms;
	std::cout << "m/s=";
	std::cout << (speedms * 3.6);
	std::cout << "km/h" << std::endl;
}