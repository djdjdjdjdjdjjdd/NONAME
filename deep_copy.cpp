/*깊은 복사*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring> // strlen, strcpy
using namespace std;

class Person {
private:
    char* name;
    int age;

public:
    // 생성자
    Person(const char* name, int age) {
        cout << "constructor" << endl;
        this->name = new char[strlen(name) + 1]; //힙영역에 홍길동 + 1
        strcpy(this->name, name); // 올바른 strcpy 사용
        this->age = age;
    }
    Person(const Person& other) {
        this->name = new char[strlen(other.name) + 1]; // 새로운 공간을 할당받고
        strcpy(this->name, other.name);
        this->age = other.age;
    }
    ~Person() {
        delete[] name;
        cout << "desconstructor" << endl;
    }

    // 정보 출력 함수 (세미콜론 제거 및 출력 구문 수정)
    void viewPerson() {
        cout << "name: " << this->name << ", age: " << this->age << endl;
    }
};

int main() {
    Person p("홍길동", 300);
    p.viewPerson();

    Person copyp(p);
    copyp.viewPerson();

    Person copyp6(p);
    copyp.viewPerson();




    return 0;
}