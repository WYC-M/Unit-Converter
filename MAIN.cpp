# include <iostream>
# include "header.h"

int main()
{
	int menumain = 0;//���˵�ѡ��
	int menuinput = 0;//�������ݵ�λ
	int menuoutput = 0;//������ݵ�λ
	double input = 0;//��������

	start();

	std::cout << "[ѡ������]" << std::endl;

	mainmenu();

	std::cout << "��ѡ����������:";
	std::cin >> menumain;

	cls();
	std::cout << "[ѡ������]" << std::endl;

	if (menumain == 1)
	{
		lengthmenu();

		std::cout << "��ѡ���������ݵ�λ:";
		std::cin >> menuinput;
		std::cout << "��ѡ��������ݵ�λ:";
		std::cin >> menuoutput;

		cls();
		std::cout << "[ѡ������]" << std::endl;

		if (menuinput == menuoutput)//����
		{
			std::cout << "�������ݵ�λ������������ݵ�λһ��" << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << "���س����˳�" << std::endl;
			std::cin.get();
			return 0;
		}

		std::cout << "����������:____________________";//�»��߹�20��

		//�����λ(ÿ����λ����2���ַ�)
		if (menuinput == 1)
		{
			std::cout << "km";
		}
		if (menuinput == 2)
		{
			std::cout << "m ";
		}
		if (menuinput == 3)
		{
			std::cout << "dm";
		}
		if (menuinput == 4)
		{
			std::cout << "cm";
		}
		if (menuinput == 5)
		{
			std::cout << "mm";
		}
		if (menuinput == 6)
		{
			std::cout << "��m";
		}
		if (menuinput == 7)
		{
			std::cout << "nm";
		}

		for (int i = 0; i < 22; i++)//��22��,����ǰ���ӡ���»��߿�ͷ
		{
			std::cout << "\b";
		}

		std::cin >> input;

		cls();

		std::cout << "[������]" << std::endl;

		if (menuinput == 1)//km
		{
			if (menuoutput == 2)
			{
				length_km_m(input);
			}
			if (menuoutput == 3)
			{
				length_km_dm(input);
			}
			if (menuoutput == 4)
			{
				length_km_cm(input);
			}
			if (menuoutput == 5)
			{
				length_km_mm(input);
			}
			if (menuoutput == 6)
			{
				length_km_miu(input);
			}
			if (menuoutput == 7)
			{
				length_km_nm(input);
			}
		}

		if (menuinput == 2)//m
		{
			if (menuoutput == 1)
			{
				length_m_km(input);
			}
			if (menuoutput == 3)
			{
				length_m_dm(input);
			}
			if (menuoutput == 4)
			{
				length_m_cm(input);
			}
			if (menuoutput == 5)
			{
				length_m_mm(input);
			}
			if (menuoutput == 6)
			{
				length_m_miu(input);
			}
			if (menuoutput == 7)
			{
				length_m_nm(input);
			}
		}

		if (menuinput == 3)//dm
		{
			if (menuoutput == 1)
			{
				length_dm_km(input);
			}
			if (menuoutput == 2)
			{
				length_dm_m(input);
			}
			if (menuoutput == 4)
			{
				length_dm_cm(input);
			}
			if (menuoutput == 5)
			{
				length_dm_mm(input);
			}
			if (menuoutput == 6)
			{
				length_dm_miu(input);
			}
			if (menuoutput == 7)
			{
				length_dm_nm(input);
			}
		}

		if (menuinput == 4)//cm
		{
			if (menuoutput == 1)
			{
				length_cm_km(input);
			}
			if (menuoutput == 2)
			{
				length_cm_m(input);
			}
			if (menuoutput == 3)
			{
				length_cm_dm(input);
			}
			if (menuoutput == 5)
			{
				length_cm_mm(input);
			}
			if (menuoutput == 6)
			{
				length_cm_miu(input);
			}
			if (menuoutput == 7)
			{
				length_cm_nm(input);
			}
		}

		if (menuinput == 5)//mm
		{
			if (menuoutput == 1)
			{
				length_mm_km(input);
			}
			if (menuoutput == 2)
			{
				length_mm_m(input);
			}
			if (menuoutput == 3)
			{
				length_mm_dm(input);
			}
			if (menuoutput == 4)
			{
				length_mm_cm(input);
			}
			if (menuoutput == 6)
			{
				length_mm_miu(input);
			}
			if (menuoutput == 7)
			{
				length_m_nm(input);
			}
		}

		if (menuinput == 6)//��m
		{
			if (menuoutput == 1)
			{
				length_miu_km(input);
			}
			if (menuoutput == 2)
			{
				length_miu_m(input);
			}
			if (menuoutput == 3)
			{
				length_miu_dm(input);
			}
			if (menuoutput == 4)
			{
				length_miu_cm(input);
			}
			if (menuoutput == 5)
			{
				length_miu_mm(input);
			}
			if (menuoutput == 7)
			{
				length_miu_nm(input);
			}
		}

		if (menuinput == 7)//nm
		{
			if (menuoutput == 1)
			{
				length_nm_km(input);
			}
			if (menuoutput == 2)
			{
				length_nm_m(input);
			}
			if (menuoutput == 3)
			{
				length_nm_dm(input);
			}
			if (menuoutput == 4)
			{
				length_nm_cm(input);
			}
			if (menuoutput == 5)
			{
				length_nm_mm(input);
			}
			if (menuoutput == 6)
			{
				length_nm_miu(input);
			}
		}
	}

	if (menumain == 2)
	{
		sizemenu();

		std::cout << "��ѡ���������ݵ�λ:";
		std::cin >> menuinput;
		std::cout << "��ѡ��������ݵ�λ:";
		std::cin >> menuoutput;

		cls();
		std::cout << "[ѡ������]" << std::endl;

		if (menuinput == menuoutput)//����
		{
			std::cout << "�������ݵ�λ������������ݵ�λһ��" << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << "���س����˳�" << std::endl;
			std::cin.get();
			return 0;
		}

		std::cout << "����������:____________________";

		//�����λ(ÿ����λ����4���ַ�)
		if (menuinput == 1)
		{
			std::cout << "km^2";
		}
		if (menuinput == 2)
		{
			std::cout << "m^2 ";
		}
		if (menuinput == 3)
		{
			std::cout << "dm^2";
		}
		if (menuinput == 4)
		{
			std::cout << "cm^2";
		}

		for (int i = 0; i < 24; i++)//��24��,����ǰ���ӡ���»��߿�ͷ
		{
			std::cout << "\b";
		}

		std::cin >> input;

		cls();

		std::cout << "[������]" << std::endl;

		if (menuinput == 1)//km^2
		{
			if (menuoutput == 2)
			{
				size_km_m(input);
			}
			if (menuoutput == 3)
			{
				size_km_dm(input);
			}
			if (menuoutput == 4)
			{
				size_km_cm(input);
			}
		}

		if (menuinput == 2)//m^2
		{
			if (menuoutput == 1)
			{
				size_m_km(input);
			}
			if (menuoutput == 3)
			{
				size_m_dm(input);
			}
			if (menuoutput == 4)
			{
				size_m_cm(input);
			}
		}

		if (menuinput == 3)//dm^2
		{
			if (menuoutput == 1)
			{
				size_dm_km(input);
			}
			if (menuoutput == 2)
			{
				size_dm_m(input);
			}
			if (menuoutput == 4)
			{
				size_dm_cm(input);
			}
		}

		if (menuinput == 4)//cm^2
		{
			if (menuoutput == 1)
			{
				size_cm_km(input);
			}
			if (menuoutput == 2)
			{
				size_cm_m(input);
			}
			if (menuoutput == 3)
			{
				size_cm_dm(input);
			}
		}
	}

	if (menumain == 3)
	{
		volumemenu();

		std::cout << "��ѡ���������ݵ�λ:";
		std::cin >> menuinput;
		std::cout << "��ѡ��������ݵ�λ:";
		std::cin >> menuoutput;

		cls();
		std::cout << "[ѡ������]" << std::endl;

		if (menuinput == menuoutput)//����
		{
			std::cout << "�������ݵ�λ������������ݵ�λһ��" << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << "���س����˳�" << std::endl;
			std::cin.get();
			return 0;
		}

		std::cout << "����������:____________________";

		//�����λ(ÿ����λ����4���ַ�)
		if (menuinput == 1)
		{
			std::cout << "m^3 ";
		}
		if (menuinput == 2)
		{
			std::cout << "dm^3";
		}
		if (menuinput == 3)
		{
			std::cout << "cm^3";
		}

		for (int i = 0; i < 24; i++)//��24��,����ǰ���ӡ���»��߿�ͷ
		{
			std::cout << "\b";
		}

		std::cin >> input;

		cls();

		std::cout << "[������]" << std::endl;

		if (menuinput == 1)//m^3
		{
			if (menuoutput == 2)
			{
				volume_m_dm(input);
			}
			if (menuoutput == 3)
			{
				volume_m_cm(input);
			}
		}

		if (menuinput == 2)//dm^3
		{
			if (menuoutput == 1)
			{
				volume_dm_m(input);
			}
			if (menuoutput == 3)
			{
				volume_dm_cm(input);
			}
		}

		if (menuinput == 3)//cm^3
		{
			if (menuoutput == 1)
			{
				volume_cm_m(input);
			}
			if (menuoutput == 2)
			{
				volume_cm_dm(input);
			}
		}
	}

	if (menumain == 4)
	{
		speedmenu();

		std::cout << "��ѡ���������ݵ�λ:";
		std::cin >> menuinput;
		std::cout << "��ѡ��������ݵ�λ:";
		std::cin >> menuoutput;

		cls();
		std::cout << "[ѡ������]" << std::endl;

		if (menuinput == menuoutput)//����
		{
			std::cout << "�������ݵ�λ������������ݵ�λһ��" << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << "���س����˳�" << std::endl;
			std::cin.get();
			return 0;
		}

		std::cout << "����������:____________________";

		//�����λ(ÿ����λ����4���ַ�)
		if (menuinput == 1)
		{
			std::cout << "km/h";
		}
		if (menuinput == 2)
		{
			std::cout << "m/s ";
		}

		for (int i = 0; i < 24; i++)//��24��,����ǰ���ӡ���»��߿�ͷ
		{
			std::cout << "\b";
		}

		std::cin >> input;

		cls();

		std::cout << "[������]" << std::endl;

		if (menuinput == 1)//m^3
		{
			speed_kmh_ms(input);
		}

		if (menuinput == 2)//dm^3
		{
			speed_ms_kmh(input);
		}
	}

	if (menumain == 5)
	{
		timemenu();

		std::cout << "��ѡ���������ݵ�λ:";
		std::cin >> menuinput;
		std::cout << "��ѡ��������ݵ�λ:";
		std::cin >> menuoutput;

		cls();
		std::cout << "[ѡ������]" << std::endl;

		if (menuinput == menuoutput)//����
		{
			std::cout << "�������ݵ�λ������������ݵ�λһ��" << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << "���س����˳�" << std::endl;
			std::cin.get();
			return 0;
		}

		std::cout << "����������:____________________";

		//�����λ(ÿ����λ����3���ַ�)
		if (menuinput == 1)
		{
			std::cout << "h  ";
		}
		if (menuinput == 2)
		{
			std::cout << "min";
		}
		if (menuinput == 3)
		{
			std::cout << "s  ";
		}

		for (int i = 0; i < 23; i++)//��23��,����ǰ���ӡ���»��߿�ͷ
		{
			std::cout << "\b";
		}

		std::cin >> input;

		cls();

		std::cout << "[������]" << std::endl;

		if (menuinput == 1)//h
		{
			if (menuoutput == 2)
			{
				time_h_min(input);
			}
			if (menuoutput == 3)
			{
				time_h_s(input);
			}
		}

		if (menuinput == 2)//min
		{
			if (menuoutput == 1)
			{
				time_min_h(input);
			}
			if (menuoutput == 3)
			{
				time_min_s(input);
			}
		}

		if (menuinput == 3)//s
		{
			if (menuoutput == 1)
			{
				time_s_h(input);
			}
			if (menuoutput == 2)
			{
				time_s_min(input);
			}
		}
	}

	if (menumain == 6)
	{
		cubagemenu();

		std::cout << "��ѡ���������ݵ�λ:";
		std::cin >> menuinput;
		std::cout << "��ѡ��������ݵ�λ:";
		std::cin >> menuoutput;

		cls();
		std::cout << "[ѡ������]" << std::endl;

		if (menuinput == menuoutput)//����
		{
			std::cout << "�������ݵ�λ������������ݵ�λһ��" << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << "���س����˳�" << std::endl;
			std::cin.get();
			return 0;
		}

		std::cout << "����������:____________________";

		//�����λ(ÿ����λ����2���ַ�)
		if (menuinput == 1)
		{
			std::cout << "L ";
		}
		if (menuinput == 2)
		{
			std::cout << "mL";
		}

		for (int i = 0; i < 22; i++)//��22��,����ǰ���ӡ���»��߿�ͷ
		{
			std::cout << "\b";
		}

		std::cin >> input;

		cls();

		std::cout << "[������]" << std::endl;

		if (menuinput == 1)//L
		{
			cubage_L_mL(input);
		}

		if (menuinput == 2)//mL
		{
			cubage_mL_L(input);
		}
	}

	if (menumain == 7)
	{
		densitymenu();

		std::cout << "��ѡ���������ݵ�λ:";
		std::cin >> menuinput;
		std::cout << "��ѡ��������ݵ�λ:";
		std::cin >> menuoutput;

		cls();
		std::cout << "[ѡ������]" << std::endl;

		if (menuinput == menuoutput)//����
		{
			std::cout << "�������ݵ�λ������������ݵ�λһ��" << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << "���س����˳�" << std::endl;
			std::cin.get();
			return 0;
		}

		std::cout << "����������:____________________";

		//�����λ(ÿ����λ����6���ַ�)
		if (menuinput == 1)
		{
			std::cout << "kg/m^3";
		}
		if (menuinput == 2)
		{
			std::cout << "g/cm^3";
		}

		for (int i = 0; i < 26; i++)//��26��,����ǰ���ӡ���»��߿�ͷ
		{
			std::cout << "\b";
		}

		std::cin >> input;

		cls();

		std::cout << "[������]" << std::endl;

		if (menuinput == 1)//kg/m^3
		{
			density_kgm_gcm(input);
		}

		if (menuinput == 2)//g/cm^3
		{
			density_gcm_kgm(input);
		}
	}

	if (menumain == 8)
	{
		itwmenu();

		std::cout << "��ѡ���������ݵ�λ:";
		std::cin >> menuinput;

		cls();
		std::cout << "[ѡ������]" << std::endl;

		std::cout << "����������:____________________";

		//�����λ(ÿ����λ����2���ַ�)
		if (menuinput == 1)
		{
			std::cout << "TB";
		}
		if (menuinput == 2)
		{
			std::cout << "GB";
		}
		if (menuinput == 3)
		{
			std::cout << "MB";
		}
		if (menuinput == 4)
		{
			std::cout << "KB";
		}
		if (menuinput == 5)
		{
			std::cout << "B ";
		}
		if (menuinput == 6)
		{
			std::cout << "b ";
		}

		for (int i = 0; i < 22; i++)//��22��,����ǰ���ӡ���»��߿�ͷ
		{
			std::cout << "\b";
		}

		std::cin >> input;

		cls();

		std::cout << "[������]" << std::endl;

		if (menuinput == 1)//TB
		{
			itw_tb(input);
		}
		if (menuinput == 2)//GB
		{
			itw_gb(input);
		}
		if (menuinput == 3)//MB
		{
			itw_mb(input);
		}
		if (menuinput == 4)//KB
		{
			itw_kb(input);
		}
		if (menuinput == 5)//B
		{
			itw_byte(input);
		}
		if (menuinput == 6)//b
		{
			itw_bit(input);
		}
	}

	//�˳�
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "���س����˳�" << std::endl;
	std::cin.get();
	std::cin.get();
}