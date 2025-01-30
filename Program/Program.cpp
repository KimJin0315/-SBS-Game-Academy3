#include <iostream>

using namespace std;

class Vector2
{
private:
    int x;
    int y;
public:
    Vector2(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    const int & X() { return x; }

    const int& Y() { return y; }

    Vector2 operator + (const Vector2 & clone)
    {
        Vector2 newVector(this->x + clone.x, this->y + clone.y);

        return newVector;
    }
    
    void ShowVector()
    {
        cout << "x의 값 : " << x << ", " << "y의 값 : " << y << endl;
    }

};

int main()
{
#pragma region 연산자 오버로딩
    
    Vector2 direction1(1, 1);
    Vector2 direction2(5, 5);

    Vector2 direction3 = direction1 + direction2;

    direction3.ShowVector();
   

#pragma endregion


    return 0;
}
