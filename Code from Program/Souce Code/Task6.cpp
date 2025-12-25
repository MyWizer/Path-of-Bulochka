#include <iostream>
#include <vector>
using namespace std;

class NumberFilter {
public:
	vector<int> array;

	void setArray(vector<int> & v, const int size) 
	{
		for (int i = 0; i < size; i++) {
			v.push_back(rand() % 10 + 1);
			array.push_back(v.at(i));
		}
	}

	void filterEven() {
		for (int i = 0; i < array.size(); i++) {
			if (array.at(i) % 2 == 0) {
				cout << array.at(i) << " ";
			}
		}
	}

	void filterOdd() {
		for (int i = 0; i < array.size(); i++) {
			if (array.at(i) % 2 != 0) {
				cout << array.at(i) << " ";
			}
		}
	}

	void filterRange(int min, int max) {
		for (int i = 0; i < array.size(); i++) {
			if (array.at(i) >= min && array.at(i) <= max) {
				cout << array.at(i) << " ";
			}
		}
	}

	void Print() {
		for (int i = 0; i < array.size(); i++) {
			cout << array.at(i) << " ";
		}
	}
};

int main(){
	srand(time(0));
	NumberFilter filter;

	int size;
	vector<int> myArray;
	cout << "Please, enter a size for create array: ";
	cin >> size;

	cout << "\nCreated: " << endl;
	filter.setArray(myArray, size);
	filter.Print();

	int toDo;

	while (true) {
		cout << "\n\nSelect program: \n1. Filter Even;\n2. Filter Odd;\n3. Filter Range.\n\nPlease, enter a number program from this list: ";
		cin >> toDo;

		switch (toDo) {
		case(1):
			cout << "Result: ";
			filter.filterEven();
			break;
		case(2):
			cout << "Result: ";
			filter.filterOdd();
			break;
		case(3):
			int min, max;
			cout << "\nEnter min number (from 1 to 10): ";
			cin >> min;

			cout << "\nEnter max nimber (from 1 to 10): ";
			cin >> max;

			cout << "Result: ";
			filter.filterRange(min, max);

			if (min < 1 && min > 10 || max < 1 && max > 10) {
				cout << "\nNot Found!";
			}
			break;
		default:
			cout << "\nNot Found!\n";
			break;
		}

		string out;
		cout << "Continue? (y/n) ";
		cin >> out;

		if (out == "n") {
			break;
		}
	}
	cout << endl;
	system("pause");
	return 0;
}