/*
주차관리 시스템을 만든다고 가정했을 때 차에 대한 클래스를 만들어 구현하고 
주차등록과 주차요금을 계산하는 함수를 c++ / 파이썬 중 하나로 작성하시오.
- Car Class는 차량번호, 배차시간, 출차시간, 배차 위치, 장애인차량 유무의 속성을 가지고 있습니다.
- 주차 요금은 1시간당 2000원 30분에 1000원이며 10분 단위 계산 시  400원입니다. (10분미만 또한 400원)
*/
#include <iostream>
using namespace std;

class car_class
{
	// 클래스의 디폴트는 private

	char car_number[10];	// 차량 번호 - 52가 3108
	
	char in_time[6];		 // 배차시간 - 10:10
	char out_time[6];		// 출차시간 - 11:10

	char in_space[4];		// 배차 위치 - A1
	int car_on;				 // 장애인 차량 유무 속성 - o x / 1 0
	int parking_fee();		// 함수 선언부
};

int car_class::parking_fee() // 함수 구현부
{
	int p_fee;
	int fee_time = out_time - in_time;
	
	if (fee_time < 10) // (10분미만 또한 400원)
	{
		p_fee = 400;
	}
	if (fee_time >= 10 && fee_time < 30)
	{
		p_fee = fee_time * 400;
	}
		
		
		

	return 
}
//주차등록과 주차요금을 계산하는 함수 / 주차 요금은 1시간당 2000원 30분에 1000원이며 10분 단위 계산 시 400원입니다. 



int main()
{
	

}


