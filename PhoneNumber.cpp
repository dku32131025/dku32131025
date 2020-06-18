#include "PhoneNumber.h"
using namespace std;

PhoneNumber::PhoneNumber(string In_name, string In_number)
{
    name = In_name;
    number = In_number;
}

//PhoneNumber::~PhoneNumber()
//{
//    cout << name << "의 주소가 삭제됩니다" << endl;
//}

std::string PhoneNumber::getter_name()
{
    return name;
}

std::string PhoneNumber::getter_number()
{
    return number;
}

void PhoneNumber::set_name(string In_name)
{
    name = In_name;
}

void PhoneNumber::set_number(string In_number)
{
    number = In_number;
}

void PhoneNumber::show_data()
{
    cout << "----------------------" << endl;
    cout << "| 이름:" << name << endl;
    cout << "| 번호:" << number << endl;;
    cout << "----------------------" << endl;
};