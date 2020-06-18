#include"PhoneNumber.h"
#include"Sub_system.h"
using namespace std;

int main()
{
    vector<PhoneNumber> PhoneBook;
    int choice;

    while (true)
    {
        choice = View_menu();
        switch (choice)
        {
        case 1:
            RegisterPhone(PhoneBook);
            break;
        case 2:
            Searching(PhoneBook);
            break;
        case 3:
            ModifyPhone(PhoneBook);
            break;
        case 4:
            Show_list(PhoneBook);
            break;
        case 5:
            cout << "프로그램을 종료합니다" << endl;
            getchar();
            return 0;
        }
    }
}