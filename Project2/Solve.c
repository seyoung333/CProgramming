#include "Header.h"
//연습문제2풀이

int main()
{
	//메뉴의 가격
	int  menu1 = 1000;
	int  menu2 = 2000;
	int  menu3 = 3000;

	//화면출력
	printf("1. A   %d\n", menu1);
	printf("2. B   %d\n", menu2);
	printf("3. C   %d\n", menu3);

	//사용자 입력
	int menu_select;
	printf("메뉴의 번호를 입력해주십시오 >>");
	scanf("%d", &menu_select);

	
	int money = 2000; //사용자가 가지고 있는 금액
	int cost = 0; //지불해야하는 비용

	if (menu_select == 1)
	{
		cost = menu1;
	}
	else if (menu_select == 2)
	{
		cost = menu2;

	}
	else
	{
		cost = menu3;
	}
	if (money >= cost)
	{
		money -= cost;
		printf("물건을 구매했습니다.");
	}
	else
	{
		printf("잔액이 부족합니다.");
	}



	return 0;
}