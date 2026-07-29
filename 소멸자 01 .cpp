//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class person {
//	char* name;
//	int age;
//public:
//	person(const char* myname, int myage) {
//	int len = strlen(myname) +  1;
//		name = new char[len];
//		strcpy(name, myname);
//		age = myage;
//		cout << " 생성자나왔슈 " << endl;
//	}
//	void showperson() const {
//		cout <<  "이름 : " << name << endl;
//		cout << "나이 : " << age << endl;
//	}
//
//	~person() {
//		delete[] name;
//		cout << "called destructor" << endl;
//	}
//};
//
//int main()
//{
//	person man1("홍길동", 20);
//	person man2("이순신", 30);
//	man1.showperson();
//	man2.showperson();
//
//	return 0;
//}