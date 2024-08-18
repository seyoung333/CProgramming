#include "Header.h"

//연습문제1) 숫자하나를 입력받고, 화면에 "양수" 또는 "음수"를 출력하는 프로그램 코드를 작성하시오.
// int main()
//{
//int number;
//printf("숫자를 입력하시오 >>");
//scanf("%d", &number);
//if (number > 0)
//{
//	printf("양수");
//}
//else if (number < 0)
//{
//	printf("음수");
//}


//연습문제2) 과세 표준에 따라서 근로 소득세를 계산하시오.
//표준은 다음과 같습니다. 
// 1,200 만원 이하                  세율 6%
//1,200 만원 초과 ~ 4,600 만원 이하 세율 15%
//4,600 만원 초과 ~ 8,800 만원 이하 세율 24%
// 
//조건) 사용자는 본인의 소득액을 작성합니다.(만원단위로 입력)
//출력예시)
//2024년 소득액을 작성해주세요.(만원단위) >> 1200
//세율을 6%입니다.
//지불하실 세금은 72입니다.


int main()
{
	//문제 풀이
	//1. 변수로 어떤 값을 사용할 지를 구분합니다. 
	//소득액, 세율, 세금
	//2. 조건 / 작업에 대한 분석을 진행합니다.
	//1. 소득액 입력
	//2. 과세 표준에 따른 세율 설정
	//3. 세율을 통해 세금 계산

	//★문제 풀 때 필요한 요소(수학 공식, 알고리즘 등등)
	//이 문제에서 사용할 개념 : 백분율
	//ex) 0.06 -> 6%
	//ex) 2.34 -> 234%
	//세금 계산식: 소득액 * 백분율 ex) 1200 * 0.06


	float income, tax_rate, tax; //변수 선언 시에는 ,를 통해 여러 개를 선언할 수 있습니다. (같은 형태라면)

	printf("2024년 소득액을 작성해주세요.(만원단위)>>");
	scanf("%f", &income);
	//scanf("서식", &변수명); 을 통해 작성할 수 있습니다.

	//과세 표준에 따른 세율 설정
	if (income <= 1200)
	{
		tax_rate = 0.06f;
	}
	else if (income <= 4600) //위에 조건이 틀렸다는 것을 고려하므로 1200보다 크다는 것도 고정된다. 
	{
		tax_rate = 0.15f;
	}
	else if (income <= 8800)
	{
		tax_rate = 0.24f;
	}

	tax = income * tax_rate;
	printf("세율은 %.0f%%입니다.\n", tax_rate * 100);
	//%%는 화면에 '%'기호를 출력할 때 사용합니다.
	printf("지불하실 세금은 %.0f(만원)입니다.\n", tax);

	return 0;
}