#pragma once
#include"PhoneNumber.h"
#include<vector>


//���ڷ� ���� �̸��� �̿��Ͽ� �ߺ��� Ȯ���Ѵ� �ߺ��� ��� ���� -1//
int Search_name(std::string In_name, std::vector<PhoneNumber>& pb);

//���ڷ� ���� ��ȣ�� �̿��Ͽ� �ߺ��� Ȯ���Ѵ� �ߺ��� ��� ���� -1//
int Search_number(std::string In_number, std::vector<PhoneNumber>& pb);

//�޴��� �����ְ� ���ù�ȣ�� ��ȯ�Ѵ�
//1. ��ȭ��ȣ ���
//2. �˻�
//3. ����
//4. ����� ������ ���� 
//5. ���
//6. �ҷ�����
//7. ����
int View_menu();

//�̸��� ��ȣ�� �Է¹ް�
//- Search_number()�� �̿��� �ߺ�Ž��
//-�̻� ���� �� ���Ϳ� ���
void RegisterPhone(std::vector<PhoneNumber>& pb);

//����Ʈ ���
void Show_list(std::vector<PhoneNumber>& pb);

//-Search_name()
//-Search_number()
//�� �̿��Ͽ� Ž�� 
//����: ���� �ε��� 
//����� ����: ���� -1
void Searching(std::vector<PhoneNumber>& pb);

//��ȭ��ȣ�� ����
void ModifyPhone(std::vector<PhoneNumber>& pb);