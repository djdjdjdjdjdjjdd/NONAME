//#include <iostream>
//#include <cstring>
//using namespace std;
//
//// 선행 선언 
//class Girl;
//
//class Boy {
//private:
//    int height;
//    friend class Girl; // Girl은 Boy의 private에 접근 가능
//public:
//    Boy(int len) : height(len) {}
//    void ShowYourFriendInfo(Girl& frn);
//};
//
//class Girl {
//private:
//    char phNump[20];
//
//public:
//    Girl(const char* num) {
//        strcpy(phNump, num);
//    }
//    void ShowYourFriendInfo(Boy& frn);
//    friend class Boy;
//};
//void Boy::ShowYourFriendInfo(Girl& frn) {
//    cout << "Girl's phone number: " << frn.phNump << endl;
//}
//void Girl::ShowYourFriendInfo(Boy& frn) {
//    cout << "Boy's height: " << frn.height << endl;
//}
//int main() {
//    Boy boy(170);
//    Girl girl("010-4554-4544");
//
//    boy.ShowYourFriendInfo(girl);
//    girl.ShowYourFriendInfo(boy);
//
//    return 0;
//}