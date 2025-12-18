#include "pch.h"

#include "CppUnitTest.h"
#include "../Project7/Task7.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest7
{
	TEST_CLASS(UnitTest7)
	{
	public:

		int Discriminant(int a, int b, int c) {
			int D = pow(b, 2) - 4 * a * c;
			int x1, x2;
			x1 = -b + sqrt(D) / 2 * a;
			// x2 = -b - sqrt(D) / 2 * a;

			return x1;
		}
		
		TEST_METHOD(TestCubeVolume)
		{
			Assert::AreEqual(8, Volumes().cubeVolume(2));
		}

		TEST_METHOD(TestCylinderVolume) 
		{
			Assert::AreEqual(10.99, Volumes().cylinderVolume(1.0, 3.5));
		}

		TEST_METHOD(TestConeVolume) 
		{
			Assert::AreEqual(1.0, Volumes().coneVolume(0.0, 0.0));
		}

		TEST_METHOD(TestSphereVolume) {
			Assert::AreEqual(1.0, Volumes().sphereVolume(0.0));
		}

		TEST_METHOD(TestDiscriminant) {
			Assert::AreEqual(14, Discriminant(4, 6, -4));
		}
	};
}