//#include <iostream> // 입출력 헤더 포함
//using namespace std; // std 이름공간 사용
//
//class Base {
//public:
//	virtual void show() {
//		cout << "Base class" << endl; } // 부모 클래스 함수
//};
//
//class Derived : public Base {
//public:
//	void show() { cout << "Derived class" << endl; } // 자식 클래스 함수 (오버라이딩)
//};
//
//void main() {
//	Base* ptr = nullptr; // 부모 포인터 선언
//	Derived obj; // 자식 객체 생성
//	ptr = &obj; // 부모 포인터에 자식 주소 대입 (업캐스팅)(자동으로 할수있음)
//	ptr->show(); // 부모 타입(Base)의 show() 호출 
//
//	//Derived* ptr2 = nullptr; // 자식 포인터 선언 (nullptr 초기화)
//	//ptr2->show();
//
//	//Base obj2;
//	//ptr2 = (Derived*)&obj2;// 부모 타입을 자식타입으로 변환하는것 다운 캐스팅
//	//ptr2->show();
//}