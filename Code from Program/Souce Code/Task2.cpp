#include <iostream>
using namespace std;

void Function(int count) {

	if (count < 10) 
	{
		count++;
		cout << count << "\t";
		Function(count);
	}
}

void DivideByZeroException() {
	
	float a = 1, b = 0, c = 0;

	cout << "\nВведите делитель:  1 / ";
	cin >> b;

	try 
	{
		c = a / b;

		if (b == 0) {
			throw runtime_error("Деление  на ноль\n");
		}

		else {
			cout << "Успех\n";
		}
		
	}

	catch (const std::exception & ex)
	{
		cout << "Error: " << ex.what();
	}
}

void IndexOutOfRangeException() {

	double array[50];
	int index = 0;

	cout << "\nВведите индекс массива: Array[] = ";
	cin >> index;

	

	try
	{
		array[index] = 1;

		if (index > 50) {
			throw runtime_error("Выход за границы массива\n");
		}	
		
		else {
			cout << "Успех";
		}
	}
	catch (const std::exception & ex)
	{
		cout << "Error: " << ex.what();
	}
}


int main() {

	system("chcp 1251 > null");
	
	int count = 0;

	cout << "Loop:\n";
	for (int i = 1; i <= 10; i++) {	

		cout << i << "\t";
	}

	cout << "\n\nFunction:\n";
	Function(count);

	DivideByZeroException();

	IndexOutOfRangeException();

	return 0;
}