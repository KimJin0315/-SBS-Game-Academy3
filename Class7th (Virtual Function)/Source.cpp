#include <iostream>
#include "../Program/Terran.h"
#include "../Program/Vulture.h"
#include "../Program/SiegeTank.h"
#include "../Program/Goliath.h"

using namespace std;



int main()
{
#pragma region 가상 함수
    // 상속하는 클래스 내에서 같은 형태의 함수로
    // 재정의될 수 있는 함수입니다.

    // Terran * terran = new Goliath();
    // 
    // terran->Stats();
    // 
    // cout << "Terran의 메모리 크기 : " << sizeof(Terran);

    // 가상 함수는 실행 시간에 상위 클래스에 대한 참조로
    // 하위 클래스에 재정의된 함수를 호출할 수 있습니다.
#pragma endregion

#pragma region 가상 함수 포인터

    int count = 0;
    int input = 0;

    Terran* ptr = nullptr;

    while (count < 5)
    {
        cout << " 1: Vulture 2: SeigeTank 3: Goliath" << endl;

        cin >> input;

        cout << endl;

        switch (input)
        {

        case 1: ptr = new Vulture();

            break;

        case 2: ptr = new SiegeTank();


            break;

        case 3: ptr = new Goliath();


            break;

        default: continue;
            break;
        }

        count++;

        ptr->Stats();

        cout << endl;
    }

    // 가상 한수는 한 개 이상의 가상 함수를 포함하는 클래스가
    // 있을 때 객체 주소에 가상 함수 테이블을 추가합니다.
#pragma endregion

    return 0;
}
