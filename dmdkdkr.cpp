//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//class Member {
//private:
//    char* name;
//    char* phone;
//    char* addr;
//    static int cnt;
//
//public:
//    // 생성자
//    Member(const char* myname, const char* myphone, const char* myaddr = "미등록") {
//        int nameLen = strlen(myname) + 1;
//        name = new char[nameLen];
//        strcpy(name, myname);
//
//        int phoneLen = strlen(myphone) + 1;
//        phone = new char[phoneLen];
//        strcpy(phone, myphone);
//
//        int addrLen = strlen(myaddr) + 1;
//        addr = new char[addrLen];
//        strcpy(addr, myaddr);
//
//        cout << "생성자 등장" << endl;
//    }
//
//    }
//
//    // 회원 정보 출력 함수
//    void showMember() const {
//        cout << "name : " << name << endl;
//        cout << "phone : " << phone << endl;
//        cout << "addr : " << addr << endl;
//    }
//};
//
//int Member::cnt = 0; // static 멤버 변수 초기화
//
//int main() {
//    // 문자열은 큰따옴표(" ")로 감싸서 전달해야 합니다.
//    Member m("정용운", "01049722249", "서울");
//    m.showMember();
//
//    return 0;
//}