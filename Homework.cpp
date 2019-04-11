#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
/*
[ 문제 ]
무한히 큰 배열에 다음과 같이 분수들이 적혀있다.

1/1	1/2	1/3	1/4	1/5	…
2/1	2/2	2/3	2/4	…	…
3/1	3/2	3/3	…	…	…
4/1	4/2	…	…	…	…
5/1	…	…	…	…	…
…	…	…	…	…	…

이와 같이 나열된 분수들을 1/1 -> 1/2 -> 2/1 -> 3/1 -> 2/2 -> … 과 같은 지그재그 순서로 차례대로 1번, 2번, 3번, 4번, 5번, … 분수라고 하자.

X가 주어졌을 때, X번째 분수를 구하는 프로그램을 작성하시오.

[ 입력 ]
1 이상 10,000,000 이하의 정수형 변수 X 가 입력으로 주어진다.

[ 출력 ]
입력 X 번째에 해당하는 해당 분수를 출력한다.

[ 예시 ]
입력 : 14
출력 : 2/4
*/

int main(void) {
	string student_id;
	student_id = "2018-14774";
	cout << student_id << endl;
	// 자신의 학번을 출력합니다.

	int x;
	cout << "X 입력 : ";
	cin >> x;

	int i = 1;  //몇번째 대각선인가
	int sum = 0;
	while (sum + i < x) {
		sum += i;
		i++;
	}

	if ((i % 2) == 1) {
		cout << i + 1 - (x - sum) << "/" << (x - sum) << endl;
	}
	else
		cout << (x - sum) << "/" << i + 1 - (x - sum) << endl;


	//TO DO

	return 0;
}