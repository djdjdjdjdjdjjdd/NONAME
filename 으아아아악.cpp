//#include <iostream>
//using namespace std;
//
//class Temporary {
//private:
//    int num;
//public:
//    Temporary(int n) : num(n) {
//        cout << "create obj" << num << endl;
//    }
//
//    ~Temporary() {
//        cout << "destroy obj" << num << endl;
//    }
//     void ShowTemporary()
//    {
//        cout << "My num is" << num << endl;
//    }
//};
//
//int main()
//{
//    Temporary(100);
//    cout << "********** after maket!" << endl << endl;
//
//    Temporary(100).ShowTemporary();
//    cout << "********** after maket!" << endl << endl;
//   
//    Temporary&& ref = Temporary(300);
//    cout << "********** end of maket!" << endl << endl;
//
//    int&& n = 10; //
//
//    return 0;
//}