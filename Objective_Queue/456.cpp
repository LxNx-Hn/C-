
#include "123.h"
#include <functional>    // greater
using namespace std;
 
struct Student {
    int id;
    int math, eng;
    Student(int num, int m, int e) : id(num), math(m), eng(e) {}    // 생성자 정의
};
 
int main() {
    ListPQ <Student> pq;  
 
    pq.insert(Student(3, 100, 50));
    pq.insert(Student(1, 60, 50));
    pq.insert(Student(2, 80, 50));
    pq.insert(Student(4, 90, 50));
    pq.insert(Student(5, 70, 40));
    
// 학번을 기준으로 작은 것이 먼저 출력이 된다 그 이유는 구조체 내부의 연산자 오버로딩에 있다
    while (!pq.empty()) {
        Student ts = pq.min(); pq.removeMin();
        cout << "(학번, 수학 , 영어 ) : " << ts.id << ' ' << ts.math << ' ' << ts.eng << '\n';
    }
 
    return 0;
}

