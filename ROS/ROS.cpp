#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
// 월요일 아침까지 제출. 강사 공유 폴더 보고서 팀원 명. 실행 파일 첨부. 한글 파일로 제출.

double f_tr(double x, double y);
double f_ts(double x, double y, double z);


int main()
{
	double vi = 0; // 출발 속도
	double vf = 0; // 도착 속도
	double vmax = 0; // 최고 속도
	double a = 0; // 최고 가속도, 최저 감속도 둘이 같다.
	double d_all = 0; // 총 거리.

	double tr = 0; // 상승하는 동안의 시간
	double ts = 0; // 같은 속도로 움직이는 동안의 시간
	double tf = 0; // 하강하는 동안의 시간
	double t_sum = 0; // 최단 시간

	double t = 0; // 누적 시간
	double v = 0; // 현재 속도
	double d = 0; // 누적 거리

	double sr = 0; // tr일 때 이동 거리
	double ss = 0; // ts일 때 이동 거리
	double sf = 0; // tf일 때 이동 거리

	double num = 0; // 몇 번 for문을 돌릴 것인지.


	printf("출발 속도를 입력하시오(m/s) :\n");
	scanf("%lf", &vi); 
	printf("도착 속도를 입력하시오(m/s) :\n");
	scanf("%lf", &vf);
	printf("최고 속도를 입력하시오(m/s) :\n");
	scanf("%lf", &vmax);
	printf("최고 가속도&감속도를 입력하시오(m/s^2) :\n");
	scanf("%lf", &a);

	printf(" 총 거리를 입력하시오(m) \n");
	scanf("%lf", &d_all); // 60

	tr = f_tr(vmax, a);
	ts = f_ts(d_all, vmax, a);
	tf = tr; // tr == tf
	t_sum = tr + ts + tf;


	sr = 0.50 * tr * vmax;
	ss = ts * vmax;
	sf = 0.50 * tf * vmax;


	
	num = t_sum / 0.1;

	for (int i = 0; i <= num; i++)
	{
		t = (double)i / 10;
		// rising 

		

		// steady



		// falling


	}

	if (t < tr)
	{
		v = a * t;
		d = 0.5 * t * v;
	}
	if (t >= tr && t < (ts + tr))
	{
		v = vmax;
		d = sr + (t - tr) * vmax;
	}
	if (t >= (ts + tr) && t <= t_sum)
	{
		v = -a * (t - ts - tr) + vmax;
		d = sr + ss + 0.5 * (vmax + (-a * (t - ts - tr) + vmax)) * (t - tr - ts);
	}







	/*
	for (int i = 0; i <= d*10; i++)  // for 문에는 무조건 양수가 들어간다.
	{
		if (d <= 60.00)

		printf("%.2lf[sec] : %.2lf[m/s], %.2lf[m]",t, v, d);  // 0.1초 단위의 시간 // 0.1초당 속도값 // 이동 거리
	}
	*/

	printf("tr = %.2lf,    ts = %.2lf,   tf = %.2lf, 최단 시간 = %.2lf", tr, ts, tf, t_sum);

	return 0;
}

double f_tr(double x, double y) //  리턴 값을 tr에 저장  tr = vmax / a  // tr == tf
{
	double p = 0;
	p = x / y;
	return p;
}


double f_ts(double x, double y, double z) //  리턴 값을 ts에 저장  ts =  d_all / vmax - vmax / a
{
	double p2 = 0;
	p2 = x / y - y / z;
	return p2;
}




//printf("문자열을 입력하세요 : \n");
//scanf("%d", &a); //scanf에서는 개수가 필요하다. 개수를 알려줘야 한다. // char aa[100]; scanf_s("%s", aa, 10); // 10개를 제한하면 10개까지만 받는다. 10개 제한해서 안 자르고 값이 어디로 숨었을까?
//printf("\n%d를 입력하셨습니다.\n", a);


// 반환값이 무시되었다. = 전달은 되었지만 씹었다. sanf_s는 반드시 반환값이 있어야 한다.
//
// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
