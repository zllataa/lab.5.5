#include "pch.h"
#include "CppUnitTest.h"
#include "../lab.5.5/lab.5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestlab55
{
	TEST_CLASS(UnitTestlab55)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = f(1);
			Assert::AreEqual(t, 1);
		}
		TEST_METHOD(TestMethod2)
		{
			int t1;
			t1 = f(10);
			Assert::AreEqual(t1, 5);
		}
		TEST_METHOD(TestMethod3)
		{
			int t3;
			t3 = f(13);
			Assert::AreEqual(t3, 11);
		}
		TEST_METHOD(TestMethod4)
		{
			int t4;
			t4 = f(10/2);
			Assert::AreEqual(t4, 3);
		}
		TEST_METHOD(TestMethod5)
		{
			int t5;
			t5 = f(13 / 2);
			Assert::AreEqual(t5, 5);
		}
	};
};
