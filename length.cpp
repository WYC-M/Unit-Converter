# include <iostream>

//km
void length_km_m(double inputkm)//km-m
{
	std::cout << inputkm;
	std::cout << "km=";
	std::cout << (inputkm * 1000);
	std::cout << "m" << std::endl;
}

void length_km_dm(double inputkm)//km-dm
{
	std::cout << inputkm;
	std::cout << "km=";
	std::cout << (inputkm * 1000 * 10);
	std::cout << "dm" << std::endl;
}

void length_km_cm(double inputkm)//km-cm
{
	std::cout << inputkm;
	std::cout << "km=";
	std::cout << (inputkm * 1000 * 10 * 10);
	std::cout << "cm" << std::endl;
}

void length_km_mm(double inputkm)//km-mm
{
	std::cout << inputkm;
	std::cout << "km=";
	std::cout << (inputkm * 1000 * 10 * 10 * 10);
	std::cout << "mm" << std::endl;
}

void length_km_miu(double inputkm)//km-¦Ìm(¦ÌmÓÃmiu´úÌæ)
{
	std::cout << inputkm;
	std::cout << "km=";
	std::cout << (inputkm * 1000 * 10 * 10 * 10 * 1000);
	std::cout << "¦Ìm" << std::endl;
}

void length_km_nm(double inputkm)//km-nm
{
	std::cout << inputkm;
	std::cout << "km=";
	std::cout << (inputkm * 1000 * 10 * 10 * 10 * 1000 * 1000);
	std::cout << "nm" << std::endl;
}

//m
void length_m_km(double inputm)//m-km
{
	std::cout << inputm;
	std::cout << "m=";
	std::cout << (inputm / 1000);
	std::cout << "km" << std::endl;
}
	
void length_m_dm(double inputm)//m-dm
{
	std::cout << inputm;
	std::cout << "m=";
	std::cout << (inputm * 10);
	std::cout << "dm" << std::endl;
}
	
void length_m_cm(double inputm)//m-cm
{
	std::cout << inputm;
	std::cout << "m=";
	std::cout << (inputm * 10 * 10);
	std::cout << "cm" << std::endl;
}

void length_m_mm(double inputm)//m-mm
{
	std::cout << inputm;
	std::cout << "m=";
	std::cout << (inputm * 10 * 10 * 10);
	std::cout << "mm" << std::endl;
}

void length_m_miu(double inputm)//m-¦Ìm
{
	std::cout << inputm;
	std::cout << "m=";
	std::cout << (inputm * 10 * 10 * 10 * 1000);
	std::cout << "¦Ìm" << std::endl;
}

void length_m_nm(double inputm)//m-nm
{
	std::cout << inputm;
	std::cout << "m=";
	std::cout << (inputm * 10 * 10 * 10 * 1000 * 1000);
	std::cout << "nm" << std::endl;
}

//dm
void length_dm_km(double inputdm)//dm-km
{
	std::cout << inputdm;
	std::cout << "dm=";
	std::cout << (inputdm / 10 / 1000);
	std::cout << "km" << std::endl;
}

void length_dm_m(double inputdm)//dm-m
{
	std::cout << inputdm;
	std::cout << "dm=";
	std::cout << (inputdm / 10);
	std::cout << "m" << std::endl;
}

void length_dm_cm(double inputdm)//dm-cm
{
	std::cout << inputdm;
	std::cout << "dm=";
	std::cout << (inputdm * 10);
	std::cout << "cm" << std::endl;
}

void length_dm_mm(double inputdm)//dm-mm
{
	std::cout << inputdm;
	std::cout << "dm=";
	std::cout << (inputdm * 10 * 10);
	std::cout << "mm" << std::endl;
}

void length_dm_miu(double inputdm)//dm-¦Ìm
{
	std::cout << inputdm;
	std::cout << "dm=";
	std::cout << (inputdm * 10 * 10 * 1000);
	std::cout << "¦Ìm" << std::endl;
}

void length_dm_nm(double inputdm)//dm-nm
{
	std::cout << inputdm;
	std::cout << "dm=";
	std::cout << (inputdm * 10 * 10 * 1000 * 1000);
	std::cout << "nm" << std::endl;
}


//cm
void length_cm_km(double inputcm)//cm-km
{
	std::cout << inputcm;
	std::cout << "cm=";
	std::cout << (inputcm / 10 / 10 / 1000);
	std::cout << "km" << std::endl;
}

void length_cm_m(double inputcm)//cm-m
{
	std::cout << inputcm;
	std::cout << "cm=";
	std::cout << (inputcm / 10 / 10);
	std::cout << "m" << std::endl;
}

void length_cm_dm(double inputcm)//cm-dm
{
	std::cout << inputcm;
	std::cout << "cm=";
	std::cout << (inputcm / 10);
	std::cout << "dm" << std::endl;
}

void length_cm_mm(double inputcm)//cm-mm
{
	std::cout << inputcm;
	std::cout << "cm=";
	std::cout << (inputcm * 10);
	std::cout << "mm" << std::endl;
}

void length_cm_miu(double inputcm)//cm-¦Ìm
{
	std::cout << inputcm;
	std::cout << "cm=";
	std::cout << (inputcm * 10 * 1000);
	std::cout << "¦Ìm" << std::endl;
}

void length_cm_nm(double inputcm)//cm-nm
{
	std::cout << inputcm;
	std::cout << "cm=";
	std::cout << (inputcm * 10 * 1000 * 1000);
	std::cout << "nm" << std::endl;
}

//mm
void length_mm_km(double inputmm)//mm-km
{
	std::cout << inputmm;
	std::cout << "mm=";
	std::cout << (inputmm / 10 / 10 / 10 / 1000);
	std::cout << "km" << std::endl;
}

void length_mm_m(double inputmm)//mm-m
{
	std::cout << inputmm;
	std::cout << "mm=";
	std::cout << (inputmm / 10 / 10 / 10);
	std::cout << "m" << std::endl;
}

void length_mm_dm(double inputmm)//mm-dm
{
	std::cout << inputmm;
	std::cout << "mm=";
	std::cout << (inputmm / 10 / 10);
	std::cout << "dm" << std::endl;
}

void length_mm_cm(double inputmm)//mm-cm
{
	std::cout << inputmm;
	std::cout << "mm=";
	std::cout << (inputmm / 10);
	std::cout << "cm" << std::endl;
}

void length_mm_miu(double inputmm)//mm-¦Ìm
{
	std::cout << inputmm;
	std::cout << "mm=";
	std::cout << (inputmm * 1000);
	std::cout << "¦Ìm" << std::endl;
}

void length_mm_nm(double inputmm)//mm-nm
{
	std::cout << inputmm;
	std::cout << "mm=";
	std::cout << (inputmm * 1000 * 1000);
	std::cout << "nm" << std::endl;
}

//¦Ìm
void length_miu_km(double inputmiu)//¦Ìm-km
{
	std::cout << inputmiu;
	std::cout << "¦Ìm=";
	std::cout << (inputmiu / 1000 / 10 / 10 / 10 / 1000);
	std::cout << "¦Ìm" << std::endl;
}

void length_miu_m(double inputmiu)//¦Ìm-m
{
	std::cout << inputmiu;
	std::cout << "¦Ìm=";
	std::cout << (inputmiu / 1000 / 10 / 10 / 10);
	std::cout << "m" << std::endl;
}

void length_miu_dm(double inputmiu)//¦Ìm-dm
{
	std::cout << inputmiu;
	std::cout << "¦Ìm=";
	std::cout << (inputmiu / 1000 / 10 / 10);
	std::cout << "dm" << std::endl;
}

void length_miu_cm(double inputmiu)//¦Ìm-cm
{
	std::cout << inputmiu;
	std::cout << "¦Ìm=";
	std::cout << (inputmiu / 1000 / 10);
	std::cout << "cm" << std::endl;
}

void length_miu_mm(double inputmiu)//¦Ìm-mm
{
	std::cout << inputmiu;
	std::cout << "¦Ìm=";
	std::cout << (inputmiu / 1000);
	std::cout << "mm" << std::endl;
}

void length_miu_nm(double inputmiu)//¦Ìm-nm
{
	std::cout << inputmiu;
	std::cout << "¦Ìm=";
	std::cout << (inputmiu * 1000);
	std::cout << "nm" << std::endl;
}

//nm
void length_nm_km(double inputnm)//nm-km
{
	std::cout << inputnm;
	std::cout << "nm=";
	std::cout << (inputnm / 1000 / 1000 / 10 / 10 / 10 / 1000);
	std::cout << "km" << std::endl;
}

void length_nm_m(double inputnm)//nm-m
{
	std::cout << inputnm;
	std::cout << "nm = ";
	std::cout << (inputnm / 1000 / 1000 / 10 / 10 / 10);
	std::cout << "m" << std::endl;
}

void length_nm_dm(double inputnm)//nm-dm
{
	std::cout << inputnm;
	std::cout << "nm = ";
	std::cout << (inputnm / 1000 / 1000 / 10 / 10);
	std::cout << "dm" << std::endl;
}

void length_nm_cm(double inputnm)//nm-cm
{
	std::cout << inputnm;
	std::cout << "nm = ";
	std::cout << (inputnm / 1000 / 1000 / 10);
	std::cout << "cm" << std::endl;
}
void length_nm_mm(double inputnm)//nm-mm
{
	std::cout << inputnm;
	std::cout << "nm = ";
	std::cout << (inputnm / 1000 / 1000);
	std::cout << "mm" << std::endl;
}
void length_nm_miu(double inputnm)//nm-¦Ìm
{
	std::cout << inputnm;
	std::cout << "nm = ";
	std::cout << (inputnm / 1000);
	std::cout << "¦Ìm" << std::endl;
}