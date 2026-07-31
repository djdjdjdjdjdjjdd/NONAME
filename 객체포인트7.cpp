#include <iostream>
using namespace std;

class First
{
public:
	virtual void MyFunc() {
		cout << "내가 첫째요" << endl; 
	}
};

class Second : public First 
{
public:
	virtual void MyFunc() {
		cout << "난 둘째요" << endl;
	}
};

class Third : public Second {
public:
	virtual void MyFunc() {
		cout << "나는 셋째다옹" << endl;
	}
};

int main()
{
	Third* tptr = new Third();
	Second* sptr = tptr;
	First* fptr = sptr;

	fptr->MyFunc();
	sptr->MyFunc();
	tptr->MyFunc();

	delete tptr; //tptr만 동적할당이라서 딜리트 시킨것 동적할당이 아니면 딜리트 시킬 필요가 없다
	return 0;
}