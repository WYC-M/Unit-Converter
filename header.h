#pragma once

//menu
void mainmenu();
void lengthmenu();
void sizemenu();
void volumemenu();
void speedmenu();
void timemenu();
void cubagemenu();
void densitymenu();
void itwmenu();

//length
//km
void length_km_m(double inputkm);
void length_km_dm(double inputkm);
void length_km_cm(double inputkm);
void length_km_mm(double inputkm);
void length_km_miu(double inputkm);
void length_km_nm(double inputkm);

//m
void length_m_km(double inputm);
void length_m_dm(double inputm);
void length_m_cm(double inputm);
void length_m_mm(double inputm);
void length_m_miu(double inputm);
void length_m_nm(double inputm);

//dm
void length_dm_km(double inputdm);
void length_dm_m(double inputdm);
void length_dm_cm(double inputdm);
void length_dm_mm(double inputdm);
void length_dm_miu(double inputdm);
void length_dm_nm(double inputdm);

//cm
void length_cm_km(double inputcm);
void length_cm_m(double inputcm);
void length_cm_dm(double inputcm);
void length_cm_mm(double inputcm);
void length_cm_miu(double inputcm);
void length_cm_nm(double inputcm);

//mm
void length_mm_km(double inputmm);
void length_mm_m(double inputmm);
void length_mm_dm(double inputmm);
void length_mm_cm(double inputmm);
void length_mm_miu(double inputmm);
void length_mm_nm(double inputmm);

//¶Ãm
void length_miu_km(double inputmiu);
void length_miu_m(double inputmiu);
void length_miu_dm(double inputmiu);
void length_miu_cm(double inputmiu);
void length_miu_mm(double inputmiu);
void length_miu_nm(double inputmiu);

//nm
void length_nm_km(double inputnm);
void length_nm_m(double inputnm);
void length_nm_dm(double inputnm);
void length_nm_cm(double inputnm);
void length_nm_mm(double inputnm);
void length_nm_miu(double inputnm);

//size
//km^2
void size_km_m(double sizekm);
void size_km_dm(double sizekm);
void size_km_cm(double sizekm);

//m
void size_m_km(double sizem);
void size_m_dm(double sizem);
void size_m_cm(double sizem);

//dm^2
void size_dm_km(double sizedm);
void size_dm_m(double sizedm);
void size_dm_cm(double sizedm);

//cm^2
void size_cm_km(double sizecm);
void size_cm_m(double sizecm);
void size_cm_dm(double sizecm);

//volume
//m^3
void volume_m_dm(double volumem);
void volume_m_cm(double volumem);

//dm^3
void volume_dm_m(double volumedm);
void volume_dm_cm(double volumedm);

//cm^3
void volume_cm_m(double volumecm);
void volume_cm_dm(double volumecm);

//speed
//km/h
void speed_kmh_ms(double speedkmh);

//m/s
void speed_ms_kmh(double speedms);

//time
//h
void time_h_min(double timeh);
void time_h_s(double timeh);

//min
void time_min_h(double timemin);
void time_min_s(double timemin);

//s
void time_s_h(double times);
void time_s_min(double times);

//L
void cubage_L_mL(double cuabgel);

//mL
void cubage_mL_L(double cuabgeml);

//density(√‹∂»)
//kg/m^3
void density_kgm_gcm(double densitykgm);

//g/cm^3
void density_gcm_kgm(double densitygcm);

//itw(¥Ê¥¢µ•ŒªªªÀ„)
//TB
void itw_tb(double ittb);

//GB
void itw_gb(double itgb);

//MB
void itw_mb(double itmb);

//KB
void itw_kb(double itkb);

//KB
void itw_kb(double itkb);

//B
void itw_byte(double itbyte);

//b
void itw_bit(double itbit);