#include "Sub_system.h"
using namespace std;

int View_menu()
{
    cout << "1. 전화번호 등록" << endl;
    cout << "2. 검색" << endl;
    cout << "3. 수정" << endl;
    cout << "4. 저장된 데이터 보기" << endl;
    cout << "5. 종료" << endl;
    cout << ">";

    int n;
    cin >> n;
    return n;
}

void Show_list(std::vector<PhoneNumber>& pb)
{
    for (int i = 0; i < pb.size(); i++)
    {
        pb[i].show_data();
    }
}

int Search_name(string In_name, vector<PhoneNumber>& pb)
{
    for (int i = 0; i < pb.size(); i++)
    {
        if (pb[i].getter_name() == In_name)
            return i;
    }
    return -1;
}

int Search_number(string In_number, vector<PhoneNumber>& pb)
{
    for (int i = 0; i < pb.size(); i++)
    {
        if (pb[i].getter_name() == In_number)
            return i;
    }
    return -1;
}

void RegisterPhone(vector<PhoneNumber>& pb)
{
    string In_name;
    string In_number;

    while (true)
    {
        cout << "이름:";
        cin >> In_name;

        cout << "번호:";
        cin >> In_number;

        if (Search_number(In_number, pb) == -1)
        {
            break;
        }
        else
        {
            cout << "이미 등록한 데이터 입니다 다시 입력 해 주세요" << endl;
        }
    }
    PhoneNumber pn(In_name, In_number);
    pb.push_back(pn);
}

void Searching(vector<PhoneNumber>& pb)
{
    int choice;
    cout << "1. 이름으로 검색" << endl;
    cout << "2. 번호로 검색" << endl;
    cout << ">";
    cin >> choice;

    int result;
    string name;
    string number;

    switch (choice)
    {
    case 1:
        cout << "이름 입력:";
        cin >> name;
        result = Search_name(name, pb);
        break;
    case 2:
        cout << "번호 입력:";
        cin >> number;
        result = Search_number(number, pb);
        break;
    }

    if (result == -1)
    {
        cout << "데이터가 존재하지 않습니다" << endl;
    }
    else
    {
        pb[result].show_data();
    }
    getchar();
}

void ModifyPhone(vector<PhoneNumber>& pb)
{
    string change_name;//변경할 이름
    string change_number;//변경할 전화번호

    string target;//수정할 이름
    int idx_target;//대상 인덱스

    cout << "수정대상 입력:";
    cin >> target;

    idx_target = Search_name(target, pb);
    if (idx_target == -1)
    {
        cout << "해당이름을 찾지 못함" << endl;
    }
    else
    {
        cout << "변경 할 이름:";
        cin >> change_name;
        cout << "변경 할 전화번호:";
        cin >> change_number;

        pb[idx_target].set_name(change_name);
        pb[idx_target].set_number(change_number);
    }
}
