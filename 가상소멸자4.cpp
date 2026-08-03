//#include <iostream>
//using namespace std;
//
//class Ctest
//{
//private:
//	int num;
//public:
//	Ctest(int num) : num(num) {
//		cout <<num << " Ctest constructed" << endl;
//	}
//	void func()
//	{
//		cout << "Ctest::func()" << endl;
//	}
//	virtual void vfunc()
//	{
//		cout << "Ctest::vfunc()" << endl;
//	}
//	virtual~Ctest() {
//		cout << num << " Ctest destructed" << endl;
//	}
//};
//
//class CtestSub : public Ctest
//{
//private:
//	int subN;
//public:
//	CtestSub(int num, int subN) : Ctest(num), subN(subN) {
//		cout << subN << " CtestSub constructed" << endl;
//	}
//	void vfunc() override
//	{
//		cout << "CtestSub::vfunc() override" << endl;
//	}
//	virtual ~CtestSub() {
//		cout << subN << " CtestSub destructed" << endl;
//	}
//};
//
//int main()
//{
//	Ctest c1(10);
//	cout << "========================================================================" << endl;	
//	CtestSub c2(2, 20);
//	cout << "========================================================================" << endl;
//	c1.func();
//	c1.vfunc();
//	cout << "========================================================================" << endl;
//	c2.func();
//	c2.vfunc();
//	cout << "========================================================================" << endl;
//
//	unique_ptr<Ctest> ptr = make_unique<CtestSub>(3, 33); 
//	//Ctest* ptr = new CtestSub(3, 33);
//	return 0;
//}