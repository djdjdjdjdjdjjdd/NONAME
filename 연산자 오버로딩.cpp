/* 연산자 오버로딩 예제 *///멤버함수로 연산자 오버로딩을 표현
#include <iostream>
using namespace std;

class Point
{
public:
	Point(int a, int b) : x(a), y(b) {} // 생성자에서 x와 y를 초기화
	void showPoint() const
	{
		cout << "Point(" << x << ", " << y << ")" << endl; // Point 객체의 좌표를 출력
	}
	Point operator+(const Point& other) const // operator+를 정의하여 두 Point 객체를 더할 수 있도록 함
	{
		return Point(x + other.x, y + other.y); // 새로운 Point 객체를 반환 .x를 붙이는 이유는 멤버 변수 x와 y를 가리키기 위해서입니다. other.x와 other.y는 다른 Point 객체의 멤버 변수입니다.
	}
private:
	int x, y;
};

int main() {
	Point p1(160, 20);
	Point p2(20, 9032);
	p1.showPoint();
	p2.showPoint();

	Point p3 = p1.operator+(p2);  // p1과 p2를 더한 결과를 p3에 저장
	p3.showPoint();
	
	Point p4 = p1 + p3;  // operator+를 사용하여 p1과 p2를 더한 결과를 p4에 저장
	p4.showPoint();

	Point p5 = p1 + p2 + p3 + p4;  
	p5.showPoint();

	return 0;
}
