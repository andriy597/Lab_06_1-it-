#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_06_1(it)/Lab_06_1(it).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61it0
{
	TEST_CLASS(UnitTest61it0)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int p[5] = { 20, 3, 4, 5, 6 };
			int t = Count(p, 5);
			Assert::AreEqual(t, 4);
		}
	};
}
