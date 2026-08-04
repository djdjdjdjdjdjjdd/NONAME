#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

class Account {
private:
    int accID; // 계좌 아이디
    int balance; // 잔액
    char cusName[20]; // 이름

public:
    Account(int id, int money, const char* name) {
        accID = id;
        balance = money;
        strcpy_s(cusName, sizeof(cusName), name);
    }

    int GetAccID() const { return accID; }

    void addBalance(int money) {
        balance += money;
        cout << "[잔액] : " << balance << endl;
    }

    bool subBalance(int money) {
        if (balance < money) {
            return false; // 잔액 부족
        }
        balance -= money;
        cout << "[잔액] : " << balance << endl;
        return true;
    }

    void getData() const {
        cout << "[계좌아이디]: " << accID << endl;
        cout << "[이름]: " << cusName << endl;
        cout << "[잔액]: " << balance << "원" << endl;
    }
};


Account* accArr[100]; // 계좌 정보 저장소
int accCount = 0;     // 저장된 계좌 수는 0으로시작

void ShowMenu();          // 메뉴 출력 //완
void MakeAccount();       // 계좌 개설
void DepositMoney();      // 입금
void Withdrawmoney();     // 출금
void ShowAllAccinfo();    // 계좌 정보 

int main() {
    int select;

    while (1) {
        ShowMenu();
        cout << "선택: ";
        cin >> select;
        cout << endl;

        switch (select) {
        case 1:
            MakeAccount();
            break;
        case 2:
            DepositMoney();
            break;
        case 3:
            Withdrawmoney();
            break;
        case 4:
            ShowAllAccinfo();
            break;
        case 5:
            cout << "프로그램을 종료합니다." << endl;
            // 동적 할당된 메모리 해제 (선택 사항)
            for (int i = 0; i < accCount; i++) {
                delete accArr[i];
            }
            return 0; // 프로그램 종료
        default:
            cout << "선택지를 다시 고르시오." << endl;
        }
    }
    return 0;
}

void ShowMenu() { // 메뉴
    cout << "==============================================" << endl;
    cout << "1. [계좌개설]" << endl;
    cout << "2. [입 금]" << endl;
    cout << "3. [출 금]" << endl;
    cout << "4. [계좌정보 전체 출력]" << endl;
    cout << "5. (종 료)" << endl;
    cout << "==============================================" << endl;
}

void MakeAccount() { // 계좌 개설
    int id;
    char name[20];
    int balance;

    cout << "[계좌개설]" << endl;
    cout << "계좌ID: ";
    cin >> id;
    cout << "이름: ";
    cin >> name;
    cout << "입금액: ";
    cin >> balance;
    accArr[accCount++] = new Account(id, balance, name);
}
void DepositMoney() //입금
{
    int id;
    int money;

    cout << "[입 금]" << endl;
    cout << "[계좌ID]: "; cin >> id;
    cout << "[입금액]: "; cin >> money;

    for (int i = 0; i < accCount; i++) {
        if (accArr[i]->GetAccID() == id) {
            accArr[i]->addBalance(money);
            cout << "[입금완료]" << endl << endl;
            return;
        }
    }
    cout << "[유효하지 않은 계좌ID입니다]." << endl << endl;
   
}

void Withdrawmoney() 
{
    int id;
    int money;

    cout << "[출 금]" << endl;
    cout << "계좌ID: "; cin >> id;
    cout << "출금액: "; cin >> money;

    for (int i = 0; i < accCount; i--) {
        if (accArr[i]->GetAccID() == id) {
            accArr[i]->subBalance(money);
            cout << "출금완료!" << endl << endl;
            return;
        }
    }
    cout << "유효하지 않은 계좌ID입니다." << endl << endl;
}
void ShowAllAccinfo()
{
    cout << "[계좌정보 전체 출력]" << endl;
    for (int i = 0; i < accCount; i++) {
        accArr[i]->getData();
    }
    cout << endl;
}

