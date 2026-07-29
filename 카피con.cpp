/*
#include <iostream>
using namespace std;

class SoSimple { // 클래스 이름 오타 수정 (SoSinmple -> SoSimple)
private:
    int num1;
    int num2;

public:
    // 매개변수가 2개이므로 객체 생성 시 인자 2개를 전달해야 합니다.
    SoSimple(int n1, int n2) : num1(n1), num2(n2) {}

    // 복사 생성자 선언부의 문법 오류 수정 (중괄호 위치 및 함수 선언 형식)
    SoSimple(const SoSimple& copy) : num1(copy.num1), num2(copy.num2) {}

    // 멤버 함수 선언 및 정의 분리 또는 정상적인 문법으로 수정
    void ShowSimpleData() {
        cout << num1 << endl;
        cout << num2 << endl;
    }
};

int main() {
    // 생성자에 전달하는 인자 개수 맞춤 (15.30 -> 15, 30)
    SoSimple sim1(15, 30);
    cout << "생성 및 초기화 직전" << endl;

    // 복사 생성자 호출 (SoSimple sim2(sim1); 과 동일한 의미)
    SoSimple sim2 = sim1;
    cout << "생성 및 초기화 직후" << endl;

    sim2.ShowSimpleData();

    return 0;
}*/