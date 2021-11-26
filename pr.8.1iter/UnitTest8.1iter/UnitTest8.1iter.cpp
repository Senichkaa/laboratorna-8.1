#include "pch.h"
#include "CppUnitTest.h"
#include "..\pr.8.1iter\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81iter
{
	TEST_CLASS(UnitTest81iter)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			 int i1 = 0;
			 int i2 = 0;
			 bool retard = SearchSign;
			 SearchSign ("....", i1, i2);
			 Assert::AreEqual(true, retard);
		}
	};
}
