#include <iostream>
#include <cassert>
using namespace std;

struct Volumes {

	int cubeVolume(int a) 
	{
		int V = pow(a, 3);
		return V;
	}

	double sphereVolume(double r) 
	{
		double V;
		double pi = 3.14;
		V = (4/(double)3) * pi * pow(r, 3);
		return V;
	}

	double cylinderVolume(double R, double h) 
	{
		double V;
		double pi = 3.14;
		V = pi * pow(R, 2) * h;
		return V;
	}

	double coneVolume(double R, double h) 
	{
		double V;
		double pi = 3.14;		
		V = (1 / (double)3) * pi * pow(R, 2) * h;
		return V;
	}
};

int main() {

	int toDo;
	Volumes figure;

	return 0;
}