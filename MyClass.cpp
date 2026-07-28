/*학번, 이름 ,나이를 갖는 클래스 -*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

class MyClass {
private:
    int mod;
    char name[20];
    int age;

public:
    MyClass(){}
    MyClass(int , const char* , int );
    void getdata();
};

MyClass::MyClass(int amod, const char* aname, int aage) {
    mod = amod;
    strcpy(name, aname);
    age = aage;
}


void MyClass::getdata() {
    std::cout << "학번 : " << mod << " 이름 : " << name << " 나이 : " << age << std::endl;
}

int main() {
    MyClass h(2023001, "정용운", 22);
    h.getdata();

    MyClass m0;
    return 0;
}