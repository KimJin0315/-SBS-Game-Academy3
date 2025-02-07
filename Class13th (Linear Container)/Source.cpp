#include <iostream>
#include <vector>
#include <list>
#include <deque>

using namespace std;

int main()
{
#pragma region vector container

    //  std::vector<int> vector;
    // 
    //  vector.reserve(6);
    // 
    //  vector.push_back(10);
    //  vector.push_back(20);
    //  vector.push_back(30);
    //  vector.push_back(40);
    //  vector.push_back(50);
    // 
    //  for (int i = 0; i < vector.size(); i++)
    //  {
    //      cout << vector[i] << " ";
    //  }
    // 
    //  vector.pop_back();
    //  vector.pop_back();
    // 
    //  cout << endl << "Vector Size : " << vector.size() << endl;
    // 
    //  cout << "Vector Capacity : " << vector.capacity() << endl;
    // 
    //  for (int i = 0; i < vector.size(); i++)
    //  {
    //      cout << vector[i] << " ";
    //  }


#pragma endregion

#pragma region list container
    std::list<int> list;

    // list.push_back(20); // [20]
    // list.push_back(30); // [20] - [30]
    // 
    // list.push_front(10); // [10] - [20] - [30]
    // 
    // list.pop_front(); // [20] - [30]
    // 
    // cout << "List의 크기 : " << list.size() << endl;
    // 
    // list.assign(3, 5); // [5] - [5] - [5]
    // 
    // cout << "List의 크기 : " << list.size() << endl;

#pragma endregion

#pragma region deque container
    // std::deque<int> deque;
    // 
    // deque.push_back(10);
    // deque.push_back(15);
    // deque.push_back(5);
    // 
    // deque.push_front(20);
    // deque.push_front(10);
    // deque.push_front(5);
    // 
    // deque.pop_front();
    // deque.pop_back();
    // 
    // for (int i = 0; i < deque.size(); i++)
    // {
    //     cout << deque[i] << " ";
    // }

#pragma endregion

    return 0;

}