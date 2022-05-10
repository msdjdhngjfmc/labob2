#include "pch.h"
#include "CppUnitTest.h"
#include"C:\Users\seeke\source\repos\labob2\labob2\labob2.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

const string MSG = "hi i want to look out the window";
const string ENCODE_MSG = "00000001001000010010001101000101011001001110000010100110001000101001010001100011001001100001101001000110001010111110000011";
const string ALPHABET_OF_ENCODE_MSG = "N 00000\ne 00001\nv 0001\nr 00001\n  0010\ng 0011\no 0100\nn 0101\na 0110\ni 0110\ny 0111\nu 0011\np 0100\n. 1000\nl 0001\nt 00001\nc 0011";
namespace UnitTests
{
	TEST_CLASS(Lab_2)
	{
	public:
		TEST_METHOD(Encode)
		{
			string msg = "hi i want to look out the window";
			Assert::AreEqual(encode(msg).data1, ENCODE_MSG);
		}
		TEST_METHOD(Uncode) {
			Assert::AreEqual(uncode(ENCODE_MSG, &encode(MSG).data2), MSG);
		}
		TEST_METHOD(New_size_equal) {
			string encode_msg = encode(MSG).data1;
			int size = encode_msg.length();
			Assert::AreEqual(size, 122);
		}
	};
}