# include <iostream>

//TB
void itw_tb(double ittb)
{
	std::cout << ittb;
	std::cout << "TB=";
	std::cout << (ittb * 1024);
	std::cout << "GB=";
	std::cout << (ittb * 1024 * 1024);
	std::cout << "MB=";
	std::cout << (ittb * 1024 * 1024 * 1024);
	std::cout << "KB=";
	std::cout << (ittb * 1024 * 1024 * 1024 * 1024);
	std::cout << "B=";
	std::cout << (ittb * 1024 * 1024 * 1024 * 1024 * 8);
	std::cout << "b" << std::endl;
}

//GB
void itw_gb(double itgb)
{
	std::cout << itgb;
	std::cout << "GB=";
	std::cout << (itgb / 1024);
	std::cout << "TB=";
	std::cout << (itgb * 1024);
	std::cout << "MB=";
	std::cout << (itgb * 1024 * 1024);
	std::cout << "KB=";
	std::cout << (itgb * 1024 * 1024 * 1024);
	std::cout << "B=";
	std::cout << (itgb * 1024 * 1024 * 1024 * 8);
	std::cout << "b" << std::endl;
}

//MB
void itw_mb(double itmb)
{
	std::cout << itmb;
	std::cout << "MB=";
	std::cout << (itmb / 1024 /1024);
	std::cout << "TB=";
	std::cout << (itmb / 1024);
	std::cout << "GB=";
	std::cout << (itmb * 1024);
	std::cout << "KB=";
	std::cout << (itmb * 1024 * 1024);
	std::cout << "B=";
	std::cout << (itmb * 1024 * 1024 * 8);
	std::cout << "b" << std::endl;
}

//KB
void itw_kb(double itkb)
{
	std::cout << itkb;
	std::cout << "KB=";
	std::cout << (itkb / 1024 / 1024 / 1024);
	std::cout << "TB=";
	std::cout << (itkb / 1024 / 1024);
	std::cout << "GB=";
	std::cout << (itkb / 1024);
	std::cout << "MB=";
	std::cout << (itkb * 1024);
	std::cout << "B=";
	std::cout << (itkb * 1024 * 8);
	std::cout << "b" << std::endl;
}

//B
void itw_byte(double itbyte)
{
	std::cout << itbyte;
	std::cout << "B=";
	std::cout << (itbyte / 1024 / 1024 / 1024 / 1024);
	std::cout << "TB=";
	std::cout << (itbyte / 1024 / 1024 / 1024);
	std::cout << "GB=";
	std::cout << (itbyte / 1024 / 1024);
	std::cout << "MB=";
	std::cout << (itbyte / 1024);
	std::cout << "KB=";
	std::cout << (itbyte * 8);
	std::cout << "b" << std::endl;
}

//b
void itw_bit(double itbit)
{
	std::cout << itbit;
	std::cout << "b=";
	std::cout << (itbit / 1024 / 1024 / 1024 / 1024 / 1024);
	std::cout << "TB=";
	std::cout << (itbit / 1024 / 1024 / 1024 / 1024);
	std::cout << "GB=";
	std::cout << (itbit / 1024 / 1024 / 1024);
	std::cout << "MB=";
	std::cout << (itbit / 1024 / 1024);
	std::cout << "KB=";
	std::cout << (itbit / 8);
	std::cout << "B" << std::endl;
}