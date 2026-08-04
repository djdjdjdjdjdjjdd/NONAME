///*vertor 가변적으로 크기가 변하는 동적 배열. 템플릿이고 헤더파일이 필요하다*/
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	vector<int> v; //크기가 0인 벡터 생성
//	vector<int> v1(10); //크기사 10인 벡터 생성
//	vector<int> v2 = { 10, 20, 30, 40, 50 }; //크기가 5인 벡터 생성
//
//
//	cout<< "v 사이즈 :" << v.size() << endl;
//	cout << "v1 사이즈 :" << v1.size() << endl;
//	cout << "v2 사이즈 :" << v2.size() << endl;
//	cout << "v벡터 메모리 크기 :" << sizeof(v) << endl;
//	
//	for (auto i : v1) { // 범위 기반 for문
//		cout << i << endl;
//	}
//
//	for (auto i : v2) {
//		cout << i << endl;
//	}
//	/*begin() end()는  포인터를 반환한다*/
//	cout << "v2 벡터의 첫번째 요소값: " << *v2.begin() << endl; 
//	cout << "v2의 마지막 요소값: " << *(v2.end() - 1) << endl;
//	//end는 마지막 값 이후의 값이기 때문에 -1을 해줘야한다
//	return 0;
//}