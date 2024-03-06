#include "pch.h"
#include "CppUnitTest.h"
#include "../lab1.6/TimeC.h"
#include "../lab1.6/TimeC.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			TimeC time;
			time.Init(12, 30, 45);

			std::string expected = "12:30:45"; 
			std::string actual = time.toString(); 

			Assert::AreEqual(expected, actual); 
		}
	};
}
