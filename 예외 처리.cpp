//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int a, b, c, d;
//	cout << "피젯수	: " << endl;
//	cin >> a;
//	cout << "젯수: " <<endl;
//	cin >> b;
//
//	try{
//		if (b == 0)
//			throw b; //0으로 나누면 예외발생
//		c = a / b;
//		cout << "결과: " << c << endl; //정상적인 나눗셈
//		d = a % b; //정상적인 나머지 연산
//		cout << "나머지: " << d << endl; 
//		cout << "나눈결과: " << c << endl;
//	}
//	catch (int ex)
//	{
//		cout << ex << "로 나누어 지지 않습니다 비상!!!!!" << endl;
//	}
//	
//	cout << "예외가 발생해도 정상종료됩니다" << endl;
//
//	return 0;
// }