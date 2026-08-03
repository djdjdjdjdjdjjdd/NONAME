//#include <iostream>
//using namespace std;
//
//class Base
//{
//public:
//    virtual void func1() { cout << "B::func1()" << endl; }
//    virtual void func2() { cout << "B::func2()" << endl; }
//    void func3() { cout << "B::func3()" << endl; }
//}; 
//
//class Derived : public Base
//{
//public:
//    void func1() { cout << "D::func1()" << endl; }
//    void func3() { cout << "D::func3()" << endl; }
//    void func4() { cout << "D::func4()" << endl; }
//}; 
//
//int main()
//{
//    Base b;                // 부모 객체
//    Derived d;             // 자식 객체
//    Base* pb = new Derived;  // 부모 포인터로 자식 객체를 가리킴
//
//    pb->func1();    // Derived::func1() 출력 (오버라이딩됨)
//    pb->func2();    // Base::func2() 출력 (Derived에 없으므로 부모 것 호출)
//    pb->func3();    // Base::func3() 출력 (오버라이딩되지 않음)
//	cout << endl;
//
//    Derived* pd = &d;
//	pd->func1();
//    pd->func2();
//	pd->func3();
//	pd->func4();
//
//    return 0;
//}