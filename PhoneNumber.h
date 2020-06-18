#pragma once
#include<iostream>
#include<string>

class PhoneNumber
{
public:
    PhoneNumber(std::string In_name, std::string In_number);
    //~PhoneNumber();
    std::string getter_name();
    std::string getter_number();
    void set_name(std::string In_name);
    void set_number(std::string In_number);
    void show_data();
protected:
    std::string name;
    std::string number;
};
