#include "pch.h"
#include "CppUnitTest.h"
#include "../Program/CProgression.h"
#include "../Program/CProgression.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(TestProgression)
	{
	public:

		TEST_METHOD(Init)
		{
			Progression pgr(0, 2);
			Assert::AreEqual(pgr.elementJ(1), 0.f);
		}
	};
}
