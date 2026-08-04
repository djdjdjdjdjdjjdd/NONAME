//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//class Account {
//private:
//    int accID; // 계좌 아이디
//    int balance; // 잔액
//    char cusName[20]; // 이름
//
//public:
//    Account(int id, int money, const char* name) {
//        accID = id;
//        balance = money;
//        strcpy_s(cusName, sizeof(cusName), name);
//    }
//
//    int GetAccID() const { return accID; }
//
//    void Deposit(int money) {
//        balance += money;
//    }
//
//    bool Withdraw(int money) {
//        if (balance < money) {
//            return false; // 잔액 부족
//        }
//        balance -= money;
//        return true;
//    }
//
//    void ShowAccInfo() const {
//        cout << "계좌아이디: " << accID << endl;
//        cout << "이     름: " << cusName << endl;
//        cout << "잔     액: " << balance << "원" << endl;
//    }
//};
//
//// 전역 변수 설정
//Account* accArr[100]; // 계좌 정보를 저장할 배열
//int accCount = 0;     // 저장된 계좌 수
//
//void ShowMenu();          // 메뉴 출력
//void MakeAccount();       // 계좌 개설
//void DepositMoney();      // 입금
//void Withdrawmoney();     // 출금
//void ShowAllAccinfo();    // 계좌 정보 출력
//
//int main() {
//    int select;
//
//    while (1) {
//        ShowMenu();
//        cout << "선택: ";
//        cin >> select;
//        cout << endl;
//
//        switch (select) {
//        case 1:
//            MakeAccount();
//            break;
//        case 2:
//            DepositMoney();
//            break;
//        case 3:
//            Withdrawmoney();
//            break;
//        case 4:
//            ShowAllAccinfo();
//            break;
//        case 5:
//            cout << "프로그램을 종료합니다." << endl;
//            // 동적 할당된 메모리 해제 (선택 사항)
//            for (int i = 0; i < accCount; i++) {
//                delete accArr[i];
//            }
//            return 0; // 프로그램 종료
//        default:
//            cout << "잘못된 선택입니다. 다시 입력해주세요." << endl;
//        }
//    }
//    return 0;
//}
//
//void ShowMenu() {
//    cout << "==============================================" << endl;
//    cout << "1. 계좌만들께유~ " << endl;
//    cout << "2. 돈 넣으셔" << endl;
//    cout << "3. 출 금" << endl;
//    cout << "4. 계좌정보 전체 출력" << endl;
//    cout << "5. (종료)" << endl;
//    cout << "==============================================" << endl;
//}
//
//void MakeAccount() {
//    int id;
//    char name[20];
//    int balance;
//
//    cout << "[계좌개설]" << endl;
//    cout << "계좌ID: "; cin >> id;
//    cout << "이름: "; cin >> name;
//    cout << "입금액: "; cin >> balance;
//
//    accArr[accCount++] = new Account(id, balance, name);
//    cout << "계좌개설 완료!" << endl << endl;
//}
//
//void DepositMoney() {
    //int id;
    //int money;

    //cout << "[입 금]" << endl;
    //cout << "계좌ID: "; cin >> id;
    //cout << "입금액: "; cin >> money;

    //for (int i = 0; i < accCount; i++) {
    //    if (accArr[i]->GetAccID() == id) {
    //        accArr[i]->Deposit(money);
    //        cout << "입금완료!" << endl << endl;
    //        return;
    //    }
    //}
    //cout << "유효하지 않은 계좌ID입니다." << endl << endl;
//}
//
//void Withdrawmoney() {
//    int id;
//    int money;
//
//    cout << "[출 금]" << endl;
//    cout << "계좌ID: "; cin >> id;
//    cout << "출금액: "; cin >> money;
//
//    for (int i = 0; i < accCount; i++) {
//        if (accArr[i]->GetAccID() == id) {
//            if (accArr[i]->Withdraw(money) == false) {
//                cout << "잔액이 부족합니다." << endl << endl;
//                return;
//            }
//            cout << "출금완료!" << endl << endl;
//            return;
//        }
//    }
//    cout << "유효하지 않은 계좌ID입니다." << endl << endl;
//}
//
//void ShowAllAccinfo() {
//    cout << "[계좌정보 전체 출력]" << endl;
//    for (int i = 0; i < accCount; i++) {
//        accArr[i]->ShowAccInfo();
//        cout << "----------------------------------------------" << endl;
//    }
//    cout << endl;
//}