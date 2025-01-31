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

    const int& X() { return x; }

    const int& Y() { return y; }

    Vector2& operator + (const Vector2& clone)
    {
        Vector2 Vector(x + clone.x, y + clone.y);

        return Vector;
    }

    Vector2& operator - (const Vector2& clone)
    {
        Vector2 Vector(x - clone.x, y - clone.y);

        return Vector;
    }

    Vector2& operator * (const Vector2& clone)
    {
        Vector2 Vector(x * clone.x, y * clone.y);

        return Vector;
    }

    Vector2& operator / (const Vector2& clone)
    {
        Vector2 Vector(x / clone.x, y / clone.y);

        return Vector;
    }

    Vector2& operator ++ ()
    {
        this->x++;
        this->y++;

        return *this;
    }

    Vector2& operator -- ()
    {
        this->x--;
        this->y--;

        return *this;
    }

    Vector2& operator ++ (int)
    {
        Vector2 clone(x, y);

        this->x++;
        this->y++;

        return clone;
    }

    Vector2& operator -- (int)
    {
        Vector2 clone(x, y);

        this->x--;
        this->y--;

        return clone;
    }
};

int main()
{
#pragma region 연산자 오버로딩

    // Vector2 direction1(1, 1);
    // Vector2 direction2(5, 5);
    // 
    // Vector2 direction = direction1 + direction2;
    // 
    // cout << direction++.X() << endl;
    // 
    // cout << direction.X() << " " << direction.Y() << endl;

#pragma endregion


    return 0;
}
