# include <iostream>
# include "header.h"

int main()
{
	int menumain = 0;//主菜单选项
	int menuinput = 0;//输入数据单位
	int menuoutput = 0;//输出数据单位
	int input = 0;//输入数据
	
	std::cout << "=======================================" << std::endl;
	std::cout << "单位换算器 Unit Converter v0.1Beta By WYC-M" << std::endl;
	std::cout << "=======================================" << std::endl;

	std::cout << std::endl;

	mainmenu();

	std::cout << "请选择数据类型:";
	std::cin >> menumain;

	if (menumain == 1)
	{
		lengthmenu();

		std::cout << "请选择输入数据单位:";
		std::cin >> menuinput;
		std::cout << "请选择输出数据单位:";
		std::cin >> menuoutput;

		std::cout << std::endl;

		if (menuinput == menuoutput)//报错
		{
			std::cout << "输入数据单位不得与输出数据单位一致" << std::endl;
			std::cout << "按回车键退出" << std::endl;
			std::cin.get();
			return 0;
		}

		std::cout << "请输入数据:____________________";

		//输出单位(每个单位都是2个字符)
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
			std::cout << "μm";
		}
		if (menuinput == 7)
		{
			std::cout << "nm";
		}

		for (int i = 0; i < 22; i++)//退22格,到达前面打印的下划线开头
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

		if (menuinput == 6)//μm
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

	//退出
	std::cout << "按回车键退出" << std::endl;
	std::cin.get();
	std::cin.get();
}