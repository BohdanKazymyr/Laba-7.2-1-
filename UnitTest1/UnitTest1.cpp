#include "pch.h"
#include "CppUnitTest.h"
#include "../Laba 7.2(1)/Laba 7.2(1).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int Low = -23;
			int High = 26;
			int n = 4;
			int k = 3;
			int** a = new int* [n];
			for (int i = 0; i < n; i++)
				a[i] = new int[k];
			Create(a, n, k, Low, High);
			Print(a, n, k);
			Sum(a, n, k);
			for (int i = 0; i < n; i++)
				delete[] a[i];
			delete[] a;
		}
	};
}
