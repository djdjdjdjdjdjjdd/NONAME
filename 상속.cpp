#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Human{
private:
	char name[20];
	int age;
public:
	Human(const char*, int);
	void getdata();
};
Human::Human(const char* name, int age) {
	cout << "부모님 소환술 " << endl;
	strcpy(this->name, name);
	this->age = age;
}
void Human::getdata() {
	cout << "이름 :" << name << "나이 : " << age << endl;
}
class Student : public Human {
private:
	int stID;
public:
	Student(const char*, int, int);
	void print();

};
Student::Student(const char* aname, int aage, int astID) 
	: Human(aname, aage), stID(astID)
{
	cout << "자식 호출" << endl;
}
void Student::print()
{
	//cout << "이름" << name << endl; 프라이빗 영역에 접근 불가
	cout << "학번" << stID << endl;
}

int main()
{
	Human m("홍길동", 100);
	m.getdata();

	Student s("말왕", 50, 202805);
	s.getdta();
	s.print();
	return 0; 


}