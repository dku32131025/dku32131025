#pragma once
#include"PhoneNumber.h"
#include<vector>


//인자로 받은 이름을 이용하여 중복을 확인한다 중복일 경우 리턴 -1//
int Search_name(std::string In_name, std::vector<PhoneNumber>& pb);

//인자로 받은 번호를 이용하여 중복을 확인한다 중복일 경우 리턴 -1//
int Search_number(std::string In_number, std::vector<PhoneNumber>& pb);

//메뉴를 보여주고 선택번호를 반환한다
//1. 전화번호 등록
//2. 검색
//3. 수정
//4. 저장된 데이터 보기 
//5. 백업
//6. 불러오기
//7. 종료
int View_menu();

//이름과 번호를 입력받고
//- Search_number()을 이용한 중복탐색
//-이상 없을 시 벡터에 등록
void RegisterPhone(std::vector<PhoneNumber>& pb);

//리스트 출력
void Show_list(std::vector<PhoneNumber>& pb);

//-Search_name()
//-Search_number()
//를 이용하여 탐색 
//리턴: 벡터 인덱스 
//결과값 없음: 리턴 -1
void Searching(std::vector<PhoneNumber>& pb);

//전화번호부 수정
void ModifyPhone(std::vector<PhoneNumber>& pb);