#include <iostream>
#include <vector>

using namespace std;

int main()
{
#pragma region vector container

    std::vector<int> vector;

    vector.reserve(6);

    vector.push_back(10);
    vector.push_back(20);
    vector.push_back(30);
    vector.push_back(40);
    vector.push_back(50);

    for (int i = 0; i < vector.size(); i++)
    {
        cout << vector[i] << " ";
    }

    vector.pop_back();
    vector.pop_back();

    cout << endl << "Vector Size : " << vector.size() << endl;

    cout << "Vector Capacity : " << vector.capacity() << endl;

    for (int i = 0; i < vector.size(); i++)
    {
        cout << vector[i] << " ";
    }


#pragma endregion



    return 0;

}