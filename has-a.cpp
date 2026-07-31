//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class Gun
//{
//private:
//	int bullet;
//public:
//	Gun(int bnum) : bullet(bnum) {}
//	void Shut() {
//		cout << "BBANG!!" << endl;
//		bullet--;
//	}
//};
//
//class Police : public Gun
//{
//private:
//	int handcuffs;
//public:
//	Police(int bnum, int bcuff)
//		: Gun(bnum), handcuffs(bcuff)
//	{
//	}
//	void Puthandcuff()
//	{
//		cout << "SANP!!" << endl;
//		handcuffs--;
//	}
//};
//
//int main()
//{
//	Police pman(5, 3);
//	pman.Shut();
//	pman.Puthandcuff();
//	return 0;
//}