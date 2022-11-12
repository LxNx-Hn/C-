//버블 정렬= 원소개수 -1 번만큼 반복
/*
앞에서부터 두개씩 비교해나가면서 위치 변경
*/

#include <iostream>

void Swap(int& a,int& b)
{
int temp = a;
a = b;
b = temp;
}//두 원소의 위치를 바꿔주는 Swap 함수


int main()
{

int Arr[6] = {5,7,2,6,9,3};// 배열 선언



for (int i = 0; i < 6; ++i) //현재 배열의 상태 출력
{
	std::cout << Arr[i] << " ";
}


std::cout << std::endl;

//정렬 알고리즘
for (int i = 0; i < 5; ++i)//반복횟수는 N-1
{

	for (int j = 0; j < 5 - i; ++j)//반복할떄마다 제일 뒤의 원소는 고정됨
	{

		if (Arr[j] > Arr[j + 1])//다를 시 스왑
		{
			Swap(Arr[j], Arr[j + 1]);
		}
	}
}

// 결과를 출력한다.
for (int i = 0; i < 6; ++i)
{
	std::cout << Arr[i] << " ";
}
}

//버블 정렬 전용 헤더파일...? 배열을 입력받아 정렬후, 결과를 출력하는 클래스 제작..? 
// 배열입력-> 새배열 선언, 배열 함수 출력..?
