#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\User\Desktop\Політех\АТП\6 тема\6.1R\6.1R\6.1R\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61R
{
	TEST_CLASS(UnitTest61R)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int c;
			int r[25]{ 37,  48,   7 , 66,  12 , 40 , 20 ,  8 , 41 , 43 , 14 , 41 , 63 , 29 , 29 , 32 , 32 ,  6 , 60 , 33 , 13 , 71 ,  8 , 59 , 73 };
			c = Sum(r, 25, 1.);
			Assert::AreEqual(c, 192);
		}
	};
}
