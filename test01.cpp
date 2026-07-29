//#include <iostream>
//using namespace std;
//
//class SimpleClass { //SimpleClass 클래스 정의
//    int num1;
//    int num2;
//
//public:
//
//    SimpleClass(int n1 = 0, int n2 = 0) {
//        num1 = n1;
//        num2 = n2;
//    }
//    ~SimpleClass(){};      //소멸자 정의
//	void showdata() const { //쇼 데이터 뒤에 const를 붙이면 상수 멤버 함수가 된다. 상수 멤버 함수는 객체의 상태를 변경하지 않는 함수이다.
//        cout << num1 << " " << num2 << endl;
//    }
//};
//
//int main() {
//	SimpleClass sc1(); // sc1은 함수 선언으로 해석된다. 따라서 sc1은 SimpleClass 객체가 아니라 함수로 인식된다.
//
//    SimpleClass mysc = sc1();//함수의 호출
//	mysc.showdata();
//    return 0;
//}
//
//SimpleClass sc1()
//{
//    SimpleClass sc(20, 30);
//    return sc;
//}
