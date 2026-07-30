//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class StaticTest
//{
//public:
//	static int static_a;
//	int b;
//	StaticTest();
//	void print();
//};
//StaticTest::StaticTest() {
//	b = 10;
//}
//int StaticTest::static_a = 10;
//void StaticTest::print() {
//	cout << "a: " << static_a << ", b :" << b << endl;
//}
//int main(void)
//{
//	StaticTest s1, s2;
//	s1.print();
//	s2.print();
//
//	s1.static_a = 30;
//	s1.print();
//	s2.print();
//
//	StaticTest::static_a = 50;
//	s1.print();
//	s2.print();
//
//	return 0;
//}