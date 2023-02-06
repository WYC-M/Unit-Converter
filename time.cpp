# include <iostream>

//h
void time_h_min(double timeh)//h-min
{
	std::cout << timeh;
	std::cout << "h=";
	std::cout << (timeh * 60);
	std::cout << "min" << std::endl;
}

void time_h_s(double timeh)//h-s
{
	std::cout << timeh;
	std::cout << "h=";
	std::cout << (timeh * 60 * 60);
	std::cout << "s" << std::endl;
}

//min
void time_min_h(double timemin)//min-h
{
	std::cout << timemin;
	std::cout << "min=";
	std::cout << (timemin / 60);
	std::cout << "h" << std::endl;
}

void time_min_s(double timemin)//min-s
{
	std::cout << timemin;
	std::cout << "min=";
	std::cout << (timemin * 60);
	std::cout << "s" << std::endl;
}

//s
void time_s_h(double times)//s-h
{
	std::cout << times;
	std::cout << "s=";
	std::cout << (times / 60 / 60);
	std::cout << "h" << std::endl;
}

void time_s_min(double times)//s-min
{
	std::cout << times;
	std::cout << "s=";
	std::cout << (times / 60);
	std::cout << "min" << std::endl;
}