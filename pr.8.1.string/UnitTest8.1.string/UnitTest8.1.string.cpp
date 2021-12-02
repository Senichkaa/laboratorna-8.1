#include "pch.h"
#include "CppUnitTest.h"
#include "..\\pr.8.1.string\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81string
{
	TEST_CLASS(UnitTest81string)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			size_t i1 = 0;
			size_t i2 = 0;
			bool retard = 0;
			Search("That !!!!", i1, i2);
			Assert::AreEqual(false, retard);
		}
	};
}
