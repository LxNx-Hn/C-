#include <iostream>
using namespace std;

int main () {
    int input;
    int margine;


    srand((unsigned int)time(0));
    int arr[7];
	int arr_rand[7];
	int tot = 40;
	int arr_num;
	
	for (int i = 0; i < 7; i++) {
        arr[i] = i + 1;
    }
	 
	while (tot > 0) {
        arr_num = rand() % tot;
        arr_rand[7 - tot] = arr[arr_num];
        for (int j = arr_num; j < tot - 1; j++) {
            arr[j] = arr[j + 1];
        }
        tot--;
    }

    for(int i=0; i<7; i++){
		std::cout<<arr_rand[i]<<" ";
	}


    //cin >> input;



}

//7개랜덤정수 출력
//입력받은수 이후로 정렬
//최대-최소