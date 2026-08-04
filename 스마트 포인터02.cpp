///*스마트 포인터
//shared_ptr : 공유 소유권을 가진 스마트 포인터(여러 포인터가 하나의 객체가 될수있다)
//*/
//
//#include <iostream>
//using namespace std;
//
//class MyClass
//{
//public:
//	MyClass() { cout << "MyClass() 생성자 소환" << endl; }
//	~MyClass() { cout << "~MyClass() 소멸자 소환" << endl; }
//	void  func() { cout << "HI shared_ptr" << endl; }
//};
//
//int main()
//{
//	shared_ptr<MyClass> ptr1 = make_shared<MyClass>(); //make_shared를 이용한 객체 생성
//	shared_ptr<MyClass> ptr2 = ptr1; //ptr1의 소유권을 ptr2로 공유
//	cout << "=================================================" << endl;
//
//	cout << "count" << ptr1.use_count() << endl; //ptr1이 가리키는 객체의 소유권을 가진 포인터의 수를 반환
//	//참조 카운터
//
//	ptr1->func(); //ptr1이 가리키는 객체의 func()함수 호출
//	ptr2->func(); //ptr2가 가리키는 객체의 func()함수 호출
//    return 0;
//}
