double HML_TestFunction_Sombrero(double x, double y)
{
/*
Функция одной переменных: функция Сомбреро.
Тестовая функция вещественной оптимизации.
Входные параметры:
 x - первая вещественная переменная;
 y - вторая вещественная переменная.
Возвращаемое значение:
 Значение тестовой функции в точке (x,y).
*/
double VHML_Result;
VHML_Result = 1.-sin(sqrt(x*x+y*y))*sin(sqrt(x*x+y*y));
VHML_Result /= (1.+0.001*(x*x+y*y));
return VHML_Result;
}