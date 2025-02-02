#include "pch.h"
#include "CppUnitTest.h"
#
#include "../Labwork-6/Labwork6.h"
#include "../Labwork-6/Labwork6.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
	TEST_CLASS(Task1UnitTests)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int length = 1;

			int* array = Labwork6::Task1(length);
			
			bool worksProperly = true;

			int power = 2;
			for (int i = 0; i < length; i++) {
				worksProperly &= array[i] == power;
				power *= 2;
			}

			Assert::IsTrue(worksProperly);

			delete[] array;
		}

		TEST_METHOD(TestMethod2)
		{
			int length = 2;

			int* array = Labwork6::Task1(length);
			
			bool worksProperly = true;

			int power = 2;
			for (int i = 0; i < length; i++) {
				worksProperly &= array[i] == power;
				power *= 2;
			}

			Assert::IsTrue(worksProperly);

			delete[] array;
		}

		TEST_METHOD(TestMethod3)
		{
			int length = 3;

			int* array = Labwork6::Task1(length);
			
			bool worksProperly = true;

			int power = 2;
			for (int i = 0; i < length; i++) {
				worksProperly &= array[i] == power;
				power *= 2;
			}

			Assert::IsTrue(worksProperly);

			delete[] array;
		}

		TEST_METHOD(TestMethod4)
		{
			int length = 4;

			int* array = Labwork6::Task1(length);
			
			bool worksProperly = true;

			int power = 2;
			for (int i = 0; i < length; i++) {
				worksProperly &= array[i] == power;
				power *= 2;
			}

			Assert::IsTrue(worksProperly);

			delete[] array;
		}
		
		TEST_METHOD(TestMethod5)
		{
			int length = 5;

			int* array = Labwork6::Task1(length);
			
			bool worksProperly = true;

			int power = 2;
			for (int i = 0; i < length; i++) {
				worksProperly &= array[i] == power;
				power *= 2;
			}

			delete[] array;
			
			Assert::IsTrue(worksProperly);
		}
	};
	
	TEST_CLASS(Task2UnitTests)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			int length = 5;
			int array[5] = {1, 3, 5, 7, 9};

			int K;
			int* outArray = Labwork6::Task2(array, length, K);

			bool worksProperly = K == 0;

			delete[] outArray;
			
			Assert::IsTrue(worksProperly);
		}

		TEST_METHOD(TestMethod2)
		{
			int length = 5;
			int array[5] = {2, 3, 5, 7, 9};

			int K;
			int* outArray = Labwork6::Task2(array, length, K);

			bool worksProperly = K == 1 && outArray[0] == 2;

			delete[] outArray;
			
			Assert::IsTrue(worksProperly);
		}

		TEST_METHOD(TestMethod3)
		{
			int length = 5;
			int array[5] = {1, 3, 5, 7, 10};

			int K;
			int* outArray = Labwork6::Task2(array, length, K);

			bool worksProperly = K == 1 && outArray[0] == 10;

			delete[] outArray;
			
			Assert::IsTrue(worksProperly);
		}

		TEST_METHOD(TestMethod4)
		{
			int length = 5;
			int array[5] = {2, 3, 5, 7, 10};

			int K;
			int* outArray = Labwork6::Task2(array, length, K);

			bool worksProperly = K == 2 && outArray[0] == 10 && outArray[1] == 2;

			delete[] outArray;
			
			Assert::IsTrue(worksProperly);
		}

		TEST_METHOD(TestMethod5)
		{
			int length = 5;
			int array[5] = {2, 3, 6, 7, 10};

			int K;
			int* outArray = Labwork6::Task2(array, length, K);

			bool worksProperly = K == 3 && outArray[0] == 10 && outArray[1] == 6 && outArray[2] == 2;

			delete[] outArray;
			
			Assert::IsTrue(worksProperly);
		}

		TEST_METHOD(TestMethod6)
		{
			int length = 5;
			int array[5] = {1, 4, 5, 8, 9};

			int K;
			int* outArray = Labwork6::Task2(array, length, K);

			bool worksProperly = K == 2 && outArray[0] == 8 && outArray[1] == 4;

			delete[] outArray;
			
			Assert::IsTrue(worksProperly);
		}
	};

	TEST_CLASS(Task3UnitTests)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			int length = 5;
			int array[5] = {0, 1, 2, 3, 4};

			int* outArray = Labwork6::Task3(array, length, 1);

			bool worksProperly = outArray[0] == 0 && outArray[1] == 1 && outArray[2] == 2 && outArray[3] == 3 && outArray[4] == 4;

			delete[] outArray;

			Assert::IsTrue(worksProperly);
		}

		TEST_METHOD(TestMethod2)
		{
			int length = 5;
			int array[5] = {0, 1, 2, 3, 4};

			int* outArray = Labwork6::Task3(array, length, 2);

			bool worksProperly = outArray[0] == 1 && outArray[1] == 3;

			delete[] outArray;

			Assert::IsTrue(worksProperly);
		}

		TEST_METHOD(TestMethod3)
		{
			int length = 5;
			int array[5] = {0, 1, 2, 3, 4};

			int* outArray = Labwork6::Task3(array, length, 3);

			bool worksProperly = outArray[0] == 2;

			delete[] outArray;

			Assert::IsTrue(worksProperly);
		}

		TEST_METHOD(TestMethod4)
		{
			int length = 5;
			int array[5] = {0, 1, 2, 3, 4};

			int* outArray = Labwork6::Task3(array, length, 4);

			bool worksProperly = outArray[0] == 3;

			delete[] outArray;

			Assert::IsTrue(worksProperly);
		}

		TEST_METHOD(TestMethod5)
		{
			int length = 5;
			int array[5] = {0, 1, 2, 3, 4};

			int* outArray = Labwork6::Task3(array, length, 5);

			bool worksProperly = outArray[0] == 4;

			delete[] outArray;

			Assert::IsTrue(worksProperly);
		}
	};

	TEST_CLASS(Task4UnitTests)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			int length = 5;
			int array[5] = { 1, 2, 4, 8, 16 };

			Assert::IsTrue(Labwork6::Task4(array, length));
		}

		TEST_METHOD(TestMethod2)
		{
			int length = 5;
			int array[5] = { 2, 2, 4, 8, 16 };

			Assert::IsFalse(Labwork6::Task4(array, length));
		}

		TEST_METHOD(TestMethod3)
		{
			int length = 5;
			int array[5] = { 1, 2, 4, 8, 15 };

			Assert::IsFalse(Labwork6::Task4(array, length));
		}

		TEST_METHOD(TestMethod4)
		{
			int length = 5;
			int array[5] = { 1, 3, 4, 8, 16 };

			Assert::IsFalse(Labwork6::Task4(array, length));
		}

		TEST_METHOD(TestMethod5)
		{
			int length = 5;
			int array[5] = { 1, 3, 4, 9, 16 };

			Assert::IsFalse(Labwork6::Task4(array, length));
		}
	};

	TEST_CLASS(Task5UnitTests)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			int length = 5;
			int array[5] = {1, 2, 3, 4, 5};
			int K;

			int* outArray = Labwork6::Task5(array, length, K);

			bool worksProperly = K == 4 && outArray[0] == 5 && outArray[1] == 4 && outArray[2] == 3 && outArray[3] == 2;

			delete[] outArray;

			Assert::IsTrue(worksProperly);
		}

		TEST_METHOD(TestMethod2)
		{
			int length = 5;
			int array[5] = {1, 1, 3, 4, 5};
			int K;

			int* outArray = Labwork6::Task5(array, length, K);

			bool worksProperly = K == 3 && outArray[0] == 5 && outArray[1] == 4 && outArray[2] == 3;

			delete[] outArray;

			Assert::IsTrue(worksProperly);
		}

		TEST_METHOD(TestMethod3)
		{
			int length = 5;
			int array[5] = {1, 1, 1, 4, 5};
			int K;

			int* outArray = Labwork6::Task5(array, length, K);

			bool worksProperly = K == 2 && outArray[0] == 5 && outArray[1] == 4;

			delete[] outArray;

			Assert::IsTrue(worksProperly);
		}

		TEST_METHOD(TestMethod4)
		{
			int length = 5;
			int array[5] = {1, 1, 1, 1, 5};
			int K;

			int* outArray = Labwork6::Task5(array, length, K);

			bool worksProperly = K == 1 && outArray[0] == 5;

			delete[] outArray;

			Assert::IsTrue(worksProperly);
		}

		TEST_METHOD(TestMethod5)
		{
			int length = 5;
			int array[5] = {1, 1, 1, 1, 1};
			int K;

			int* outArray = Labwork6::Task5(array, length, K);

			bool worksProperly = K == 0;

			delete[] outArray;

			Assert::IsTrue(worksProperly);
		}
	};
}
