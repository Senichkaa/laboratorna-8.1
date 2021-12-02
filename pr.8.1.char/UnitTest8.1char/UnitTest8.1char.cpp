#include "pch.h"
#include "CppUnitTest.h"
#include "..\\pr.8.1.char\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81char
{
	TEST_CLASS(UnitTest81char)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int i1 = 0;
			int i2 = 0;
			bool retard = Search;
			Search("!!!!", i1, i2);
			Assert::AreEqual(true, retard);
		}
	};
}
