#include "Sub_system.h"
using namespace std;

int View_menu()
{
    cout << "1. ��ȭ��ȣ ���" << endl;
    cout << "2. �˻�" << endl;
    cout << "3. ����" << endl;
    cout << "4. ����� ������ ����" << endl;
    cout << "5. ����" << endl;
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
        cout << "�̸�:";
        cin >> In_name;

        cout << "��ȣ:";
        cin >> In_number;

        if (Search_number(In_number, pb) == -1)
        {
            break;
        }
        else
        {
            cout << "�̹� ����� ������ �Դϴ� �ٽ� �Է� �� �ּ���" << endl;
        }
    }
    PhoneNumber pn(In_name, In_number);
    pb.push_back(pn);
}

void Searching(vector<PhoneNumber>& pb)
{
    int choice;
    cout << "1. �̸����� �˻�" << endl;
    cout << "2. ��ȣ�� �˻�" << endl;
    cout << ">";
    cin >> choice;

    int result;
    string name;
    string number;

    switch (choice)
    {
    case 1:
        cout << "�̸� �Է�:";
        cin >> name;
        result = Search_name(name, pb);
        break;
    case 2:
        cout << "��ȣ �Է�:";
        cin >> number;
        result = Search_number(number, pb);
        break;
    }

    if (result == -1)
    {
        cout << "�����Ͱ� �������� �ʽ��ϴ�" << endl;
    }
    else
    {
        pb[result].show_data();
    }
    getchar();
}

void ModifyPhone(vector<PhoneNumber>& pb)
{
    string change_name;//������ �̸�
    string change_number;//������ ��ȭ��ȣ

    string target;//������ �̸�
    int idx_target;//��� �ε���

    cout << "������� �Է�:";
    cin >> target;

    idx_target = Search_name(target, pb);
    if (idx_target == -1)
    {
        cout << "�ش��̸��� ã�� ����" << endl;
    }
    else
    {
        cout << "���� �� �̸�:";
        cin >> change_name;
        cout << "���� �� ��ȭ��ȣ:";
        cin >> change_number;

        pb[idx_target].set_name(change_name);
        pb[idx_target].set_number(change_number);
    }
}
