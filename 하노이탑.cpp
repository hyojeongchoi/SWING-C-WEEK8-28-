#include <iostream>
using namespace std;
void hanoitop(int N, int from, int end, int middle)//하노이탑 과정을 출력하는 함수
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
    int N;//원판의 개수를 입력받음.  (기본 1로 설정해둠)
    int from=1;//시작 기둥 =1(첫번째 기둥)
    int end = 3;//최종 목적지인 기둥 =3(세번째 기둥)
    int middle = 2;// 시작기둥에서 최종 목적지인 기둥으로 갈때 거치는 기둥=두번째 기둥


    cout << "하노이탑 원판 개수를 입력해주세요. (1에서 20 사이) : ";
    cin >> N;

    if (N < 21)
    {
        cin >> N;
    }
    else if (N > 21)
    {
        do
        {
            cout << "1에서 20사이의 숫자만 입력해주세요: ";
            cin >> N;
        } while (N > 21);
    }

    int K = N * N - 1;//몇번에 걸쳐서 과정을 수행하는지 출력한다.
// 하노이 탑은 '원판의 개수에 제곱 빼기 1'이 최소 실행 과정 수가 된다.

    cout <<endl<< "하노이탑 과정을" << K << "만큼 수행합니다." << endl<<endl;

    hanoitop(N, from, end, middle);
}


