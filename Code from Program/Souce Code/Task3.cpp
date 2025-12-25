#include <iostream>
/// <summary>
/// Вычисление расстояния
/// </summary>
/// <param name="v">Скорость движения</param>
/// <param name="t">Время в пути</param>
/// <returns>Расстояние всего пути</returns>
int Distance(double speed, double time)
{
	// Здесь будет видна подсказка с комментарием
	double S = speed * time; // +1 η1
	return S; // +1 η1
}
int main()
{
	system("chcp 1251 > null"); 

	double speed, time;

	std::cout << "Введите значение скорости и времени через ПРОБЕЛ: "; 
	std::cin >> speed >> time; 

	std::cout << "S = " << Distance(speed, time); 
}