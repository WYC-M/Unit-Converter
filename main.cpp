# include <iostream>
# include "header.h"

int main()
{
	int menumain = 0;//���˵�ѡ��
	int menuinput = 0;//�������ݵ�λ
	int menuoutput = 0;//������ݵ�λ
	int input = 0;//��������
	
	std::cout << "=======================================" << std::endl;
	std::cout << "��λ������ Unit Converter v0.1Beta By WYC-M" << std::endl;
	std::cout << "=======================================" << std::endl;

	std::cout << std::endl;

	mainmenu();

	std::cout << "��ѡ����������:";
	std::cin >> menumain;

	if (menumain == 1)
	{
		lengthmenu();

		std::cout << "��ѡ���������ݵ�λ:";
		std::cin >> menuinput;
		std::cout << "��ѡ��������ݵ�λ:";
		std::cin >> menuoutput;

		std::cout << std::endl;

		if (menuinput == menuoutput)//����
		{
			std::cout << "�������ݵ�λ������������ݵ�λһ��" << std::endl;
			std::cout << "���س����˳�" << std::endl;
			std::cin.get();
			return 0;
		}

		std::cout << "����������:____________________";

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

		std::cout << std::endl;

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

	//�˳�
	std::cout << "���س����˳�" << std::endl;
	std::cin.get();
	std::cin.get();
}