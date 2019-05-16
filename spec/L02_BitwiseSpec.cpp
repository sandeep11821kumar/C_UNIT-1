/*
 
 Note:
 You read the code in L02_Bitwise.cpp file and understand the behaviour.
 And replace the blanks with correct expected output in this file.
 
 */

#include "stdafx.h"

#include "../src/L02_Bitwise.cpp"

using namespace System;
using namespace System::Text;
using namespace System::Collections::Generic;
using namespace Microsoft::VisualStudio::TestTools::UnitTesting;

namespace spec
{
	[TestClass]
	public ref class L02_BitwiseSpec
	{
	private:
		TestContext^ testContextInstance;

	public:
		/// <summary>
		///Gets or sets the test context which provides
		///information about and functionality for the current test run.
		///</summary>
		property Microsoft::VisualStudio::TestTools::UnitTesting::TestContext^ TestContext
		{
			Microsoft::VisualStudio::TestTools::UnitTesting::TestContext^ get()
			{
				return testContextInstance;
			}
			System::Void set(Microsoft::VisualStudio::TestTools::UnitTesting::TestContext^ value)
			{
				testContextInstance = value;
			}
		};

		[TestMethod]
		void Test_xorCommutativity()
		{
            Assert::AreEqual(9, xorAB(10, 3), L"xorAB(10, 3) failed", 1, 2);
            Assert::AreEqual(9, xorBA(10, 3), L"xorBA(10, 3) failed", 1, 2);
            
			Assert::AreEqual(13, xorAB(0, 13), L"xorAB(0, 13) failed", 1, 2);
            Assert::AreEqual(13, xorBA(0, 13), L"xorBA(0, 13) failed", 1, 2);
            
			Assert::AreEqual(4, xorAB(5, 1), L"xorAB(5, 1) failed", 1, 2);
            Assert::AreEqual(4, xorBA(5, 1), L"xorBA(5, 1) failed", 1, 2);
            
			Assert::AreEqual(4, xorAB(21, 17), L"xorAB(21, 17) failed", 1, 2);
            Assert::AreEqual(4, xorBA(21, 17), L"xorBA(21, 17) failed", 1, 2);
		};

		[TestMethod]
		void Test_xorAA()
		{
			Assert::AreEqual(0, xorAA(-3), L"xorAA(-3) failed", 1, 2);
			Assert::AreEqual(0, xorAA(3434), L"xorAA(3434) failed", 1, 2);
			Assert::AreEqual(0, xorAA(234), L"xorAA(234) failed", 1, 2);
			Assert::AreEqual(0, xorAA(13), L"xorAA(13) failed", 1, 2);
		}

		[TestMethod]
		void Test_xorAZero()
		{
			Assert::AreEqual(3, xorAZero(3), L"xorAZero(3) failed", 1, 2);
			Assert::AreEqual(-234, xorAZero(-234), L"xorAZero(-234) failed", 1, 2);
			Assert::AreEqual(103, xorAZero(103), L"xorAZero(103) failed", 1, 2);
		}

		[TestMethod]
		void Test_xorAssociativity()
		{
			Assert::AreEqual(5, xorABA(3,5), L"xorABA(3,5) failed", 1, 2);
            Assert::AreEqual(5, xorAAB(3,5), L"xorAAB(3,5) failed", 1, 2);
            
			Assert::AreEqual(19, xorABA(-234,19), L"xorABA(-234,19) failed", 1, 2);
            Assert::AreEqual(19, xorAAB(-234,19), L"xorAAB(-234,19) failed", 1, 2);
            
			Assert::AreEqual(41, xorABA(103,41), L"xorABA(103,41) failed", 1, 2);
            Assert::AreEqual(41, xorAAB(103,41), L"xorAAB(103,41) failed", 1, 2);
		}

        [TestMethod]
		void Test_xorNumbers()
		{
			int arr3[] = { 2, 3, 2 };
			int arrSame3[] = { 5, 5, 5 };
			int arr5[] = { 3, 21, 21, 3, 9 };
			Assert::AreEqual(3, xorNumbers(arr3, 3), L"xorNumbers() failed", 1, 2);
			//Assert::AreEqual(___, xorNumbers(arr5, 5), L"xorNumbers() failed", 1, 2);
			//Assert::AreEqual(___, xorNumbers(arrSame3, 3), L"xorNumbers() failed", 1, 2);
		};
        
        [TestMethod]
        void Test_turnOnNthBit()
        {
            //
            // Note:
            // replace the blanks (___) with hexadecimal numbers.
            //
            Assert::AreEqual(0x89, turnOnNthBit(0x88, 0), L"turnOnNthBit(0x88, 0) failed", 1, 2);
            Assert::AreEqual(0x8A, turnOnNthBit(0x88, 1), L"turnOnNthBit(0x88, 1) failed", 1, 2);
            Assert::AreEqual(0x8C, turnOnNthBit(0x88, 2), L"turnOnNthBit(0x88, 2) failed", 1, 2);
            Assert::AreEqual(0x88, turnOnNthBit(0x88, 3), L"turnOnNthBit(0x88, 3) failed", 1, 2);
            Assert::AreEqual(0x98, turnOnNthBit(0x88, 4), L"turnOnNthBit(0x88, 4) failed", 1, 2);
            
            Assert::AreEqual(0x7ABBCCDD, turnOnNthBit(0x7ABBCCDD, 27), L"turnOnNthBit(0x7ABBCCDD, 27) failed", 1, 2);
            Assert::AreEqual(0x7BBBCCDD, turnOnNthBit(0x7ABBCCDD, 24), L"turnOnNthBit(0x7ABBCCDD, 24) failed", 1, 2);
            Assert::AreEqual(0x7ABBECDD, turnOnNthBit(0x7ABBCCDD, 13), L"turnOnNthBit(0x7ABBCCDD, 13) failed", 1, 2);
        }

		[TestMethod]
		void Test_twoPowerN()
		{
            //
            // Note:
            // replace the blanks (___) with integer numbers.
            //
			Assert::AreEqual(4, twoPowerN(2), L"twoPowerN(2) failed", 1, 2);
			Assert::AreEqual(8, twoPowerN(3), L"twoPowerN(3) failed", 1, 2);
			Assert::AreEqual(64, twoPowerN(6), L"twoPowerN(6) failed", 1, 2);
			Assert::AreEqual(1, twoPowerN(0), L"twoPowerN(6) failed", 1, 2);
		};

		[TestMethod]
		void Test_isOdd()
		{
			Assert::AreEqual(0, isOdd(2), L"isOdd(2) failed", 1, 2);
			Assert::AreEqual(0, isOdd(4534), L"isOdd(4534) failed", 1, 2);
			Assert::AreEqual(1, isOdd(2341), L"isOdd(2341) failed", 1, 2);
			Assert::AreEqual(1, isOdd(689), L"isOdd(689) failed", 1, 2);
		};

		[TestMethod]
		void Test_isEven()
		{
			Assert::AreEqual(1, isEven(2), L"isOdd(2) failed", 1, 2);
			Assert::AreEqual(1, isEven(4534), L"isOdd(4534) failed", 1, 2);
			Assert::AreEqual(0, isEven(2341), L"isOdd(2341) failed", 1, 2);
			Assert::AreEqual(0, isEven(689), L"isOdd(689) failed", 1, 2);
		};

		[TestMethod]
		void Test_SignificantBytes()
		{
            //
            // Note:
            // replace the blanks (___) with hexadecimal numbers.
            //
			Assert::AreEqual(0xDD, leastSignificantByte(0x7ABBCCDD), L"leastSignificantByte(0x7ABBCCDD) failed", 1, 2);
            Assert::AreEqual(0x7A, mostSignificantByte(0x7ABBCCDD), L"mostSignificantByte(0x7ABBCCDD) failed", 1, 2);
         
            
            Assert::AreEqual(0xCC, leastSignificantByte(0x7FAADDCC), L"leastSignificantByte(0x7FAADDCC) failed", 1, 2);
            Assert::AreEqual(0x7F, mostSignificantByte(0x7FAADDCC), L"mostSignificantByte(0x7FAADDCC) failed", 1, 2);

            Assert::AreEqual(0xC0, leastSignificantByte(0x70AADDC0), L"leastSignificantByte(0x70AADDC0) failed", 1, 2);
            Assert::AreEqual(0x70, mostSignificantByte(0x70AADDC0), L"mostSignificantByte(0x70AADDC0) failed", 1, 2);
            
            Assert::AreEqual(0xC0, leastSignificantByte(0xADDC0), L"leastSignificantByte(0xADDC0) failed", 1, 2);
            Assert::AreEqual(0x7, mostSignificantByte(0x7AADDC0), L"mostSignificantByte(0x7AADDC0) failed", 1, 2);
            
            Assert::AreEqual(0, leastSignificantByte(0), L"leastSignificantByte(0) failed", 1, 2);
            Assert::AreEqual(0, mostSignificantByte(0), L"mostSignificantByte(0) failed", 1, 2);
		};
        
        [TestMethod]
        void Test_reverseOfNumberByByte()
        {
            //
            // Note:
            // replace the blanks (___) with hexadecimal numbers.
            //
           // Assert::AreEqual(___, reverseOfNumberByByte(0x7ABBCC7D), L"reverseOfNumberByByte(0x7ABBCC7D) failed", 1, 2);
           // Assert::AreEqual(___, reverseOfNumberByByte(0x12345678), L"reverseOfNumberByByte(0x12345678) failed", 1, 2);
            
            //Assert::AreEqual(, reverseOfNumberByByte(0xFF00), L"reverseOfNumberByByte(0xFF00) failed", 1, 2);
            Assert::AreEqual(0, reverseOfNumberByByte(0xAA0000), L"reverseOfNumberByByte(0xAA0000) failed", 1, 2);
            //Assert::AreEqual(___, reverseOfNumberByByte(0xABCD0000), L"reverseOfNumberByByte(0xABCD0000) failed", 1, 2);
            
            Assert::AreEqual(0, reverseOfNumberByByte(0), L"reverseOfNumberByByte(0) failed", 1, 2);
        };
	};
}
