#include <iostream>
using namespace std;
void hanoitop(int N, int from, int end, int middle)//�ϳ���ž ������ ����ϴ� �Լ�
{
    if (N == 1)
        cout << from <<"  "<< end << endl;
    else
    {
        hanoitop(N - 1, from, middle, end);
        cout << from <<"  "<< end << endl;
        hanoitop(N - 1, middle, end, from);
    }
}
int main() {
    int N;//������ ������ �Է¹���.  (�⺻ 1�� �����ص�)
    int from=1;//���� ��� =1(ù��° ���)
    int end = 3;//���� �������� ��� =3(����° ���)
    int middle = 2;// ���۱�տ��� ���� �������� ������� ���� ��ġ�� ���=�ι�° ���


    cout << "�ϳ���ž ���� ������ �Է����ּ���. (1���� 20 ����) : ";
    cin >> N;

    if (N < 21)
    {
        cin >> N;
    }
    else if (N > 21)
    {
        do
        {
            cout << "1���� 20������ ���ڸ� �Է����ּ���: ";
            cin >> N;
        } while (N > 21);
    }

    int K = N * N - 1;//����� ���ļ� ������ �����ϴ��� ����Ѵ�.
// �ϳ��� ž�� '������ ������ ���� ���� 1'�� �ּ� ���� ���� ���� �ȴ�.

    cout <<endl<< "�ϳ���ž ������" << K << "��ŭ �����մϴ�." << endl<<endl;

    hanoitop(N, from, end, middle);
}


