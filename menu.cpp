# include <iostream>

void mainmenu()//���˵�
{
	std::cout << "1_���Ȼ���  2_�������  3_�������  4_�ٶȻ���" << std::endl;
	std::cout << "5_ʱ�任��  6_�ݻ�����  7_�ܶȻ���  8_�洢��λ����" << std::endl;
	std::cout << std::endl;
}

void lengthmenu()//1 ���Ȼ��� �˵�
{
	std::cout << "1_km  2_m  3_dm  4_cm  5_mm  6_��m  7_nm" << std::endl;
	std::cout << std::endl;
}

void sizemenu()//2 ������� �˵�
{
	std::cout << "1_km^2  2_m^2  3_dm^2  4_cm^2" << std::endl;
	std::cout << std::endl;
}

void volumemenu()//3 ������� �˵�
{
	std::cout << "1_m^3  2_dm^3  3_cm^3" << std::endl;
	std::cout << std::endl;
}

void speedmenu()//4 �ٶȻ��� �˵�
{
	std::cout << "1_km/h  2_m/s"<< std::endl;
	std::cout << std::endl;
}

void timemenu()//5 �ٶȻ��� �˵�
{
	std::cout << "1_h  2_min  3_s" << std::endl;
	std::cout << std::endl;
}

void cubagemenu()//6 �ݻ����� �˵�
{
	std::cout << "1_L  2_mL" << std::endl;
	std::cout << std::endl;
}

void densitymenu()//7 �ܶȻ��� �˵�
{
	std::cout << "1_kg/m^3  2_g/cm^3" << std::endl;
	std::cout << std::endl;
}

void itwmenu()//8_�洢��λ���� �˵�
{
	std::cout << "1_TB  2_GB  3_MB  4_KB  5_B  6_b" << std::endl;
	std::cout << std::endl;
}