#include "pch.h"
#include "CppUnitTest.h"
#include "../Complex.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest13
{
	TEST_CLASS(UnitTest13)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double x = 1, y = 1;
			Complex z;
			bool t = z.Init(x, y);
			Assert::AreEqual(t, true);
		}
	};
}