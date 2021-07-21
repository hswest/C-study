#include <iostream>
#include <cstdlib>  //c ǥ�� ��ƿ��Ƽ �Լ����� ��Ƴ��� �������, ���� ���� �Լ�(rand(), srand())�� ����
#include <ctime>  //�ð� ���� �Լ���(time(), localtime() ��)�� ��Ƴ��� �������
using namespace std;

class Random  //Random Ŭ���� ���� 
{
public:
    Random();  //������ ����
    int next();  //����Լ� next() ����
    int nextInRange(int a, int b);  //����Լ� nextInRange() ����
};

Random::Random() 
{
    srand((unsigned)time(NULL));  //������ ������ �ٸ� ���� ������ �߻�
}

int Random::next() 
{
    int n = rand();  //0~32767 ������ ���� ���� �߻�
    if (n % 2 == 0)  //n�� ¦���̸� �״�� ��ȯ
        return n;
    else  //n�� Ȧ���̸� n-1�� ��ȯ
        return n - 1;
}

int Random::nextInRange(int a, int b) 
{
    int n = a + rand() % (b - a + 1);  //���� ���� ���� a~b
    if (n % 2 == 1)  //n�� Ȧ���̸� �״�� ��ȯ
        return n;
    else  //n�� ¦���̸� n+1�� ��ȯ
        return n + 1;
}

int main() 
{
    Random random;  //random�̶�� Random Ÿ���� ��ü ����
    cout << "--0���� 32767������ ¦�� ���� ���� 10 ��--" << endl;
    for (int i = 0; i < 10; i++)  //n 10�� ��� 
    {
        int n = random.next();  //����Լ� next() ȣ��
        cout << n << " ";
    }
    cout << endl << endl;

    cout << "==2���� 30 ������ Ȧ�� ���� ���� 10 ��(��, �ߺ��Ǵ� ���� ����� ��)==" << endl;
    int array[10];  //�迭 array[10] ����
    int i, k;
    for (int i = 0; i < 10; i++) 
    {
    a:    
        array[i] = random.nextInRange(2, 30);  //����Լ� nextInRange() ȣ��
            for (k = 0; k < i; k++)
            {
                if (array[k] == array[i])
                {
                    goto a;  //�ߺ��Ǵ� ���ڸ� a�� �̵�
                }
            }
        cout << array[i] << " ";
    }
    cout << endl;
}