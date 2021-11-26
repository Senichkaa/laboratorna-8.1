#include "pch.h"
#include "CppUnitTest.h"
#include "..\pr8.1rec\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81rec
{
	TEST_CLASS(UnitTest81rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const char* str = "Test!!!";
			int i1 = 0, i2 = 0;
			bool retard = SearchSign(str, 0, i1, i2);
			Assert::AreEqual(false, retard);
		}
	};
}
