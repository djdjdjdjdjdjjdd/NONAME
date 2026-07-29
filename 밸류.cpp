/*
#include <iostream>
using namespace std;

int main()
{
	int num = 3; //복사 초기화, 복사 생성자 호출시 = 연산자를 사용하여 초기화
	int num1(30); //직접 초기화, 복사생성자 호출 안됨= 초기값 30을 직접 할당한다 이니셜라이즈 리스트
	int num2{ 300 }; //중괄호 직접초기화 ( c++ )
	int num3 = { 300 }; //중괄호 복사 초기화

	int x = 3.14; // 암묵적인 변환을 허락한다
	int x1{ 3.14 }; //암묵적 변환을 불허한다

	cout << num << endl;
	cout << num1 << endl;
	cout << num2 << endl;
	cout << num3 << endl;
	cout << x << endl;
	cout << x1 << endl;
		
	return 0;
}*/