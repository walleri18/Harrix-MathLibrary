int HML_BitNumber(double P)
{
/*
Функция с вероятностью P возвращает 1. В противном случае возвращает 0.
Входные параметры:
 P - вероятность появления 1.
Возвращаемое значение:
 1 или 0.
*/
if (HML_RandomNumber()<=P)
 return 1;
else
 return 0;
}
//---------------------------------------------------------------------------
int HML_BitNumber()
{
/*
Функция с вероятностью 0.5 возвращает 1. В противном случае возвращает 0.
Входные параметры:
 Отсутствуют.
Возвращаемое значение:
 1 или 0.
*/
if (HML_RandomNumber()<=0.5)
 return 1;
else
 return 0;
}