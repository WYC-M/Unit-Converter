# include <iostream>

//m^3
void volume_m_dm(double volumem)//m^3-dm^3
{
	std::cout << volumem;
	std::cout << "m^3=";
	std::cout << (volumem * 1000);
	std::cout << "dm^3" << std::endl;
}

void volume_m_cm(double volumem)//m^3-cm^3
{
	std::cout << volumem;
	std::cout << "m^3=";
	std::cout << (volumem * 1000 * 1000);
	std::cout << "cm^3" << std::endl;
}

//dm^3
void volume_dm_m(double volumedm)//dm^3-m^3
{
	std::cout << volumedm;
	std::cout << "dm^3=";
	std::cout << (volumedm / 1000);
	std::cout << "m^3" << std::endl;
}

void volume_dm_cm(double volumedm)//dm^3-cm^3
{
	std::cout << volumedm;
	std::cout << "dm^3=";
	std::cout << (volumedm * 1000);
	std::cout << "cm^3" << std::endl;
}

//cm^3
void volume_cm_m(double volumecm)//cm^3-m^3
{
	std::cout << volumecm;
	std::cout << "cm^3=";
	std::cout << (volumecm / 1000 / 1000);
	std::cout << "m^3";
}

void volume_cm_dm(double volumecm)//cm^3-dm^3
{
	std::cout << volumecm;
	std::cout << "cm^3=";
	std::cout << (volumecm / 1000);
	std::cout << "dm^3";
}