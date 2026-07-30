//#include <iostream>
//using namespace std;
//
//class SoSimple {
//private:
//    int num;
//public:
//    SoSimple(int n) : num(n) {}
//
//    SoSimple(const SoSimple& copy) : num(copy.num) {
//        cout << "Called SoSimple(Const SoSimple& copy)" << endl;
//    }
//
//    SoSimple() : num(0) {}
//
//    SoSimple& AddNum(int n) {
//        num += n;
//        return *this;
//    }
//
//    void ShowData() {
//        cout << "num: " << num << endl;
//    }
//};
//
//SoSimple SoSimpleFuncObj(SoSimple ob) {
//    cout << "리턴 이전 " << endl;
//    return ob;
//}
//
//int main() {
//    SoSimple obj(7);
//    SoSimpleFuncObj(obj).AddNum(30).ShowData();
//    obj.ShowData();
//
//    return 0;
//}