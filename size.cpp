# include <iostream>

//km^2
void size_km_m(double sizekm)//km^2-m^2
{
	std::cout << sizekm;
	std::cout << "km^2=";
	std::cout << (sizekm * 1000000);
	std::cout << "m^2" << std::endl;
}

void size_km_dm(double sizekm)//km^2-dm^2
{
	std::cout << sizekm;
	std::cout << "km^2=";
	std::cout << (sizekm * 1000000 * 100);
	std::cout << "dm^2" << std::endl;
}

void size_km_cm(double sizekm)//km^2-cm^2
{
	std::cout << sizekm;
	std::cout << "km^2=";
	std::cout << (sizekm * 1000000 * 100 * 100);
	std::cout << "cm^2" << std::endl;
}

//m
void size_m_km(double sizem)//m^2-km^2
{
	std::cout << sizem;
	std::cout << "m^2=";
	std::cout << (sizem / 1000000);
	std::cout << "km^2" << std::endl;
}

void size_m_dm(double sizem)//m^2-dm^2
{
	std::cout << sizem;
	std::cout << "m^2=";
	std::cout << (sizem * 100);
    std::cout << "dm^2" << std::endl;
}

void size_m_cm(double sizem)//m^2-cm^2
{
	std::cout << sizem;
	std::cout << "m^2=";
	std::cout << (sizem * 100 * 100);
	std::cout << "cm^2" << std::endl;
}

//dm^2
void size_dm_km(double sizedm)//dm^2-km^2
{
	std::cout << sizedm;
	std::cout << "dm^2=";
	std::cout << (sizedm / 100 / 1000000);
	std::cout << "km^2" << std::endl;
}

void size_dm_m(double sizedm)//dm^2-m^2
{
	std::cout << sizedm;
	std::cout << "dm^2=";
	std::cout << (sizedm / 100);
	std::cout << "m^2" << std::endl;
}

void size_dm_cm(double sizedm)//dm^2-cm^2
{
	std::cout << sizedm;
	std::cout << "dm^2=";
	std::cout << (sizedm * 100);
	std::cout << "cm^2" << std::endl;
}

//cm^2
void size_cm_km(double sizecm)//cm^2-km^2
{
	std::cout << sizecm;
	std::cout << "cm^2=";
	std::cout << (sizecm / 100 / 100 / 1000000);
	std::cout << "km^2" << std::endl;
}

void size_cm_m(double sizecm)//cm^2-m^2
{
	std::cout << sizecm;
	std::cout << "cm^2=";
	std::cout << (sizecm / 100 / 100);
	std::cout << "m^2" << std::endl;
}

void size_cm_dm(double sizecm)//cm^2-dm^2
{
    std::cout << sizecm;
	std::cout << "cm^2=";
	std::cout << (sizecm / 100);
	std::cout << "dm^2" << std::endl;
}