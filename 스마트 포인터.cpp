///*스마트 포인터
//* unique_ptr : 소유권이 유일한 스마트 포인터
//*scope를 벗어나면 소멸자를 자동으로 호출한다*/
//
//#include <iostream>
//using namespace std;
//
//class MyClass
//{
//public:
//    MyClass(){cout << "MyClass() 생성자 소환" << endl;}
//
//	~MyClass() {cout << "~MyClass() 소멸자 소환" << endl;}
//
//int main()
//{
//	MyClass* ptr0 = new MyClass(); //new를 이용한 객체 생성
//	//동적할당으로 생성된 MyClass 객체는 unique_ptr포인터가 가리킨다
//
//	unique_ptr<MyClass> ptr(new MyClass()); 
//
//	//c++ 14 이후 부터는 new사용을 자제하고 unique_ptr를 이용한 객체생성을 권장한다
//	auto ptr1 = make_unique<MyClass>(); //make_unique를 이용한 객체 생성
//
//	unique_ptr<MyClass> ptr2 = move(ptr); //ptr의 소유권을 ptr2로 이동
//	//소유권이 이동되면 ptr은 nullptr이 된다? 
//	//복사는 불가능하다. unique_ptr는 소유권이 유일하기 때문에 복사연산자를 제공하지 않는다.
//
//    return 0;
//}