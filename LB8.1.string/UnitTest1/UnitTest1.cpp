#include "pch.h"
#include "CppUnitTest.h"
#include "../LB8.1.string/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string testString1 = "BASIC programming is BASIC";
			int count1 = CountBasicCharacters(testString1);
			Assert::AreEqual(10, count1);
		}
	};
}
