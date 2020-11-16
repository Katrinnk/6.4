#include "pch.h"
#include "CppUnitTest.h"
#include "../Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest64
{
	TEST_CLASS(UnitTest64)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int z;
			const int n = 5;
			int c[n] = { 1,2,3,4,5 };
			z = Sum(c, n);
			Assert::AreEqual(z, 0);
		}
	};
}
