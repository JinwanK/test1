/*
 café_menu 클래스를 이용하여 제품을 나타내고 
 café 클래스는 그것을 이용해서 제품 데이터를 읽어들이고 출력한 후 
 주문을 받아 주문 내역을 출력하고, 
 주문이 끝나면 그날의 매출통계를 출력하는 프로그램을 작성하시오.
*/

#include <iostream>
using namespace std;

#include "cafe_menu.h"

int main()
{
	int m, sum = 0;  // 메뉴 숫자, 합산
	int no_menu = 0; // 없는 메뉴일 때 신호
	int x = 0;		 // 없는 메뉴의 번호를 저장할 변수
	int i = 0;		 // for 문 변수

	string menu_array[100]; // 메뉴를 저장하는 배열
	int price_array[100]; // 가격을 저장하는 배열
	int number_array[100]; // 수량을 저장하는 배열

	menu_array[1] = "카페_아메리카노 Short";
	menu_array[2] = "카페_아메리카노 Tall";
	menu_array[3] = "카페_라떼 Short";
	menu_array[4] = "카페_라떼 Tall";
	menu_array[5] = "카푸치노 Short";
	menu_array[6] = "카푸치노 Tall";
	menu_array[7] = "카페모카 Short";
	menu_array[8] = "카페모카 Tall";
	menu_array[9] = "카라멜_마끼아또 Short";
	menu_array[10] = "카라멜_마끼아또 Tall";
	menu_array[11] = "스타벅스_돌체_라떼 Short";
	menu_array[12] = "스타벅스_돌체_라떼 Tall";

	price_array[1] = 3600;
	price_array[2] = 4100;
	price_array[3] = 4100;
	price_array[4] = 4600;
	price_array[5] = 4100;
	price_array[6] = 4600;
	price_array[7] = 4100;
	price_array[8] = 4600;
	price_array[9] = 5100;
	price_array[10] = 5600;
	price_array[11] = 5100;
	price_array[12] = 5600;

	number_array[1] = 0;
	number_array[2] = 0;
	number_array[3] = 0;
	number_array[4] = 0;
	number_array[5] = 0;
	number_array[6] = 0;
	number_array[7] = 0;
	number_array[8] = 0;
	number_array[9] = 0;
	number_array[10] = 0;
	number_array[11] = 0;
	number_array[12] = 0;

	cafe_menu jin;  // jin이라는 객체로 생성자 자동 실행. 생성자는 기본으로 출력되는 것이 포함됨.
	while (1)
	{
		
		cin >> m; // 메뉴 선택
		cout << "주문한 상품 : " << endl;
		if (m == 0)
		{
			cout << "=====매출 통계=====" << endl;
			for (i = 1; i < 13; i++)
			{
				if (number_array[i] == 0) // 판매 개수가 없으면
				{
					// 아무것도 안 한다.
				}
				else
				{
					cout << menu_array[i] << number_array[i] << "개" << endl;
				}
			}

			cout << "매출액 총계 :" << sum << "원" << endl;
			break; // 0이 입력될 때까지 계속 진행된다.
		}
		
		switch (m)
		{
		case 1:
		{
			number_array[1]++; // 선택 개수 증가
			sum += price_array[1];	// 가격 누적
			cout << menu_array[1] << " " << price_array[1] << "원" << endl;
			break;
		}
		case 2:
		{
			number_array[2]++; // 선택 개수 증가
			sum += price_array[2];	// 가격 누적
			cout << menu_array[2] << " " << price_array[2] << "원" << endl;
			break;
		}
		case 3:
		{
			number_array[3]++; // 선택 개수 증가
			sum += price_array[3];	// 가격 누적
			cout << menu_array[3] << " " << price_array[3] << "원" << endl;
			break;
		}
		case 4:
		{
			number_array[4]++; // 선택 개수 증가
			sum += price_array[4];	// 가격 누적
			cout << menu_array[4] << " " << price_array[4] << "원" << endl;
			break;
		}
		case 5:
		{
			number_array[5]++; // 선택 개수 증가
			sum += price_array[5];	// 가격 누적
			cout << menu_array[5] << " " << price_array[5] << "원" << endl;
			break;
		}
		case 6:
		{
			number_array[6]++; // 선택 개수 증가
			sum += price_array[6];	// 가격 누적
			cout << menu_array[6] << " " << price_array[6] << "원" << endl;
			break;
		}
		case 7:
		{
			number_array[7]++; // 선택 개수 증가
			sum += price_array[7];	// 가격 누적
			cout << menu_array[7] << " " << price_array[7] << "원" << endl;
			break;
		}
		case 8:
		{
			number_array[8]++; // 선택 개수 증가
			sum += price_array[8];	// 가격 누적
			cout << menu_array[8] << " " << price_array[8] << "원" << endl;
			break;
		case 9:
		{
			number_array[9]++; // 선택 개수 증가
			sum += price_array[9];	// 가격 누적
			cout << menu_array[9] << " " << price_array[9] << "원" << endl;
			break;
		}
		case 10:
		{
			number_array[10]++; // 선택 개수 증가
			sum += price_array[10];	// 가격 누적
			cout << menu_array[10] << " " << price_array[10] << "원" << endl;
			break;
		}
		case 11:
		{
			number_array[11]++; // 선택 개수 증가
			sum += price_array[11];	// 가격 누적
			cout << menu_array[11] << " " << price_array[11] << "원" << endl;
			break;
		}
		case 12:
		{
			number_array[12]++; // 선택 개수 증가
			sum += price_array[12];	// 가격 누적
			cout << menu_array[12] << " " << price_array[12] << "원" << endl;
			break;
		}
		}

		if (m > 12)
		{

			x = m;
			cout << x << "는 없는 메뉴입니다..." << endl;
			break;
		}
		else
		{
			cout << "합계 : " << sum << "원";
		}

		}

	}
}

/*
		case 2: sum += 4100; break;
		case 3: sum += 4100; break;
		case 4: sum += 4600; break;
		case 5: sum += 4100; break;
		case 6: sum += 4600; break;
		case 7: sum += 4100; break;
		case 8: sum += 4600; break;
		case 9: sum += 5100; break;
		case 10: sum += 5600; break;
		case 11: sum += 5100; break;
		case 12: sum += 5600; break;
		}
*/