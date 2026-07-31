//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class Person {
//private:
//    char name[50];
//    int age;
//
//public:
//    Person(int myage, const char* myname) : age(myage) {
//        strcpy_s(name, myname);
//    }
//
//    void WhoYourName() const {
//        cout << "이름 : " << name << endl;
//        cout << "나이 : " << age << endl;
//    }
//};
//
//class UnivStudent : public Person {
//private:
//    char major[50];
//public:
//    UnivStudent(const char* myname, int myage, const char* mymajor)
//        : Person(myage, myname) {
//        strcpy_s(major, mymajor);
//    }
//
//    void WhoAreYou() const {
//        WhoYourName();
//        cout << "전공 : " << major << endl << endl;
//    }
//};
//
//int main() {
//    UnivStudent ustd1("LEE", 22, "computer eng");
//    ustd1.WhoAreYou();
//
//    UnivStudent ustd2("PARK", 24, "software eng");
//    ustd2.WhoAreYou();
//
//    return 0;
//}