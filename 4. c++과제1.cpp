#include <iostream>
#include <cstdlib>  //c 표준 유틸리티 함수들을 모아놓은 헤더파일, 난수 생성 함수(rand(), srand())등 포함
#include <ctime>  //시간 관련 함수들(time(), localtime() 등)을 모아놓은 헤더파일
using namespace std;

class Random  //Random 클래스 생성 
{
public:
    Random();  //생성자 선언
    int next();  //멤버함수 next() 선언
    int nextInRange(int a, int b);  //멤버함수 nextInRange() 선언
};

Random::Random() 
{
    srand((unsigned)time(NULL));  //시작할 때마다 다른 랜덤 정수를 발생
}

int Random::next() 
{
    int n = rand();  //0~32767 사이의 랜덤 정수 발생
    if (n % 2 == 0)  //n이 짝수이면 그대로 반환
        return n;
    else  //n이 홀수이면 n-1을 반환
        return n - 1;
}

int Random::nextInRange(int a, int b) 
{
    int n = a + rand() % (b - a + 1);  //랜덤 정수 범위 a~b
    if (n % 2 == 1)  //n이 홀수이면 그대로 반환
        return n;
    else  //n이 짝수이면 n+1을 반환
        return n + 1;
}

int main() 
{
    Random random;  //random이라는 Random 타입의 객체 생성
    cout << "--0에서 32767까지의 짝수 랜덤 정수 10 개--" << endl;
    for (int i = 0; i < 10; i++)  //n 10개 출력 
    {
        int n = random.next();  //멤버함수 next() 호출
        cout << n << " ";
    }
    cout << endl << endl;

    cout << "==2에서 30 까지의 홀수 랜덤 정수 10 개(단, 중복되는 값이 없어야 함)==" << endl;
    int array[10];  //배열 array[10] 선언
    int i, k;
    for (int i = 0; i < 10; i++) 
    {
    a:    
        array[i] = random.nextInRange(2, 30);  //멤버함수 nextInRange() 호출
            for (k = 0; k < i; k++)
            {
                if (array[k] == array[i])
                {
                    goto a;  //중복되는 숫자면 a로 이동
                }
            }
        cout << array[i] << " ";
    }
    cout << endl;
}