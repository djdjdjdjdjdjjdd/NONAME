//#include <iostream>
//using namespace std;
//
//class Clnterface //추상 클래스(순수 가상함수를 포함한 클래스
//{
//public:
//	Clnterface() { cout << "Clnterface constructed" << endl; }
//	virtual void getDate() const = 0; //순수 가상함수
//};
//
//class Clnsub : public Clnterface
//{
//public:
//	Clnsub() { cout << "Clnsub constructed" << endl; }
//	void getDate() const override { cout << "pure virtual function()" << endl; } // 순수 가상함수 구현
//};
//
//
//
//int main()
//{
//	//Clnterface obj; // 추상 클래스는 객체를 생성할 수 없음
//	Clnsub obj2; // 추상 클래스의 파생 클래스는 객체를 생성할 수 있음
//	obj2.getDate(); // 순수 가상함수 호출
//
//    return 0;
//}