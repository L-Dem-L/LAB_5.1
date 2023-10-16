#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB_5.1/Main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
        TEST_METHOD(TestMethod1)
        {
            // Arrange
            double a = 2.0;
            double b = 3.0;
            double expected = pow(a, 2) - sin(b) * cos(b) + pow(b, 2);

            // Act
            double actual = h(a, b);

            // Assert
            Assert::AreEqual(expected, actual);
        }
	}; 
}
