//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class StaticTest {
//private:
//	static int static_a;
//	int b;
//public:
//	StaticTest();
//	static void setA(int _a);
//ｄoid print();
//};
//int StaticTest::static_a = 10;
//StaticTest::StaticTest() {
//	b = 20;
//	static_a = 100; // 일반 함수에서는 스태틱 멤버변수에 변경이 가능하다
//
//}
//
//void StaticTest::setA(int _a)
//{
//	static_a = _a;
//
//}
//
//void StaticTest::print() {
//	cout << "a : " << static_a << "b :" << b << endl;
//}
//int main(void)
//{
//	StaticTest s1, s2;
//	s1.print();
//	s2.print();
//
//
//	s1.setA(30);
//	s1.print();
//	s2.print();
//
//	StaticTest::setA(40);
//	s1.print();
//	s2.print();
//
//	return 0;
//}