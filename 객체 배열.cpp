/*
#include <iostream>
#include <cstring>
using namespace std;

class person {
private:
    char* name;
    int age;

public:
    // 생성자 (매개변수가 있는 경우)
    person(const char* myname, int myage) {
        int len = strlen(myname) + 1;
        name = new char[len];
        strcpy_s(name, len, myname); // 안전한 문자열 복사 함수 사용
        age = myage;
    }

    // 기본 생성자 (객체 배열 선언 시 필요)
    person() {
        name = NULL;
        age = 0;
        cout << "기본 생성자 호출" << endl;
    }

    // 정보 설정 함수
    void Setpersoninfo(char* myname, int myage) {
        if (name != NULL) {
            delete[] name;
        }
        int len = strlen(myname) + 1;
        name = new char[len];
        strcpy_s(name, len, myname); // 안전한 문자열 복사 함수 사용
        age = myage;
    }

    // 정보 출력 함수
    void Showpersoninfo() const {
        cout << "이름 : " << name << endl;
        cout << "나이 : " << age << endl;
    }

    // 소멸자
    ~person() {
        if (name != NULL) {
            delete[] name;
        }
        cout << "소멸자 호출 (cut)" << endl;
    }
};

int main() {
    person parr[3];

    char namestr[100];
    char* strptr = nullptr;
    int age;
    int len;

    for (int i = 0; i < 3; i++) {
        cout << i + 1 << "번째 사람 정보 입력" << endl;
        cout << "이름 : ";
        cin >> namestr;
        cout << "나이 : ";
        cin >> age;

        len = strlen(namestr) + 1;
        strptr = new char[len];
        strcpy_s(strptr, len, namestr); // 안전한 문자열 복사 함수 사용

        parr[i].Setpersoninfo(strptr, age);

        delete[] strptr;
        cout << endl;
    }

    cout << "\n--- 입력된 정보 출력 ---" << endl;
    for (int i = 0; i < 3; i++) {
        parr[i].Showpersoninfo();
        cout << endl;
    }

    return 0;
}*/