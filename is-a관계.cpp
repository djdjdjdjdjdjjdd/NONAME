//#include <iostream>
//#include <cstring>
//#define _CRT_SECURE_NO_WARNINGS
//using namespace std; //cout 앞에 std::쓰기 귀찮앙
//
//class Computer {
//private:
//    char owner[50];
//public:
//    Computer(const char* name) {
//        printf("Computer 생성자 호출\n");
//        strcpy_s(owner, name);
//    }
//    void Calculate() {
//        cout << "요청 내용을 계산합니다." << endl;
//    }
//};
//
//class NotebookComp : public Computer {
//private:
//    int battary;
//public:
//    // 수정: 문자열 리터럴 안전하게 받기 위해 const char* 사용
//    NotebookComp(const char* name, int initChag)
//        : Computer(name), battary(initChag) {
//        printf("NotebookComp 생성자 호출\n");
//    }
//    void Charging() { battary += 5; }
//    void UseBattary() { battary -= 1; }
//    void MovingCal()
//    {
//        if (GetBattaryInfo() < 1)
//        {
//            cout << "충전이 필요합니다.\n" << endl;
//            return;
//        }
//        cout << "이동하면서 \n";
//        Calculate();
//        UseBattary();
//    }
//    int GetBattaryInfo() { return battary; }
//};
//
//class TabletNotebook : public NotebookComp {
//private:
//    char regstPenModel[50];
//public:
//    TabletNotebook(const char* name, int initChag, const char* pen)
//        : NotebookComp(name, initChag)
//    {
//        printf("TabletNotebook 생성자 호출\n");
//        strcpy_s(regstPenModel, pen);
//    }
//    void Write(const char* penInfo)
//    {
//        if (GetBattaryInfo() < 1)
//        {
//            cout << "충전이 필요합니다.\n" << endl;
//            return;
//        }
//        if (strcmp(regstPenModel, penInfo) != 0)
//        {
//            cout << "등록된 펜이 아닙니다.\n" << endl; // 개행 추가
//            return;
//        }
//        cout << "필기내용을 처리합니다.\n " << endl;
//        UseBattary();
//    }
//};
//
//int main() {
//    NotebookComp nc("이수종", 5);
//    nc.MovingCal();
//    TabletNotebook kn("정수영", 5, "Ise-241-242"); 
//    kn.Write("Ise-241-242");
//
//    return 0;
//}