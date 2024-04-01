#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
#include <string>

#include "..\UnitTestsDemo\MathLib.hpp"

namespace Категория_тестов
{
	TEST_CLASS(Тестовый_блок)
	{
	public:
		
		TEST_METHOD(SimpleMultiply)
		{
			Multiply(2, 2);
			Assert::AreEqual(
				std::to_string(4).c_str(),
				std::to_string(Multiply(2, 2)).c_str(),
				std::string("cant call").c_str()
			);
		}

		TEST_METHOD(SimpleSum)
		{
			Summ(2, 0);
			Assert::AreEqual(
				std::to_string(2).c_str(), //что должно произойти
				std::to_string(Summ(2, 0)).c_str(), // что произошло
				std::string("cant call").c_str() // что сказать если не порошел тест
			);
		}
	};
}
