# include <iostream>

void mainmenu()//主菜单
{
	std::cout << "1_长度换算  2_面积换算  3_体积换算  4_速度换算" << std::endl;
	std::cout << "5_时间换算  6_容积换算  7_密度换算  8_存储单位换算" << std::endl;
	std::cout << std::endl;
}

void lengthmenu()//1 长度换算 菜单
{
	std::cout << "1_km  2_m  3_dm  4_cm  5_mm  6_μm  7_nm" << std::endl;
	std::cout << std::endl;
}

void sizemenu()//2 面积换算 菜单
{
	std::cout << "1_km^2  2_m^2  3_dm^2  4_cm^2" << std::endl;
	std::cout << std::endl;
}

void volumemenu()//3 体积换算 菜单
{
	std::cout << "1_m^3  2_dm^3  3_cm^3" << std::endl;
	std::cout << std::endl;
}

void speedmenu()//4 速度换算 菜单
{
	std::cout << "1_km/h  2_m/s"<< std::endl;
	std::cout << std::endl;
}

void timemenu()//5 速度换算 菜单
{
	std::cout << "1_h  2_min  3_s" << std::endl;
	std::cout << std::endl;
}

void cubagemenu()//6 容积换算 菜单
{
	std::cout << "1_L  2_mL" << std::endl;
	std::cout << std::endl;
}

void densitymenu()//7 密度换算 菜单
{
	std::cout << "1_kg/m^3  2_g/cm^3" << std::endl;
	std::cout << std::endl;
}

void itwmenu()//8_存储单位换算 菜单
{
	std::cout << "1_TB  2_GB  3_MB  4_KB  5_B  6_b" << std::endl;
	std::cout << std::endl;
}