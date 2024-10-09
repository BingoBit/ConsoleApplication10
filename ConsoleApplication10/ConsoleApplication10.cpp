#include <iostream>
using namespace std;
int main() 
{
    const int stro = 3; 
    const int stl = 3; 
    int arr[stro][stl] = {
        {1, -2, 3,},
        {4, 5, -6,},
        {7, -8, 9}
    };

    int sum = 0;
    int we = stro * stl;

    for (int i = 0; i < stro; ++i)
    {
        for (int j = 0; j < stl; ++j)
        {
            sum += arr[i][j];

            if (arr[i][j] > 0)
            {
                cout << "Положительные =\n" << (arr[i][j]);
            }
            else if (arr[i][j] < 0)
            {
                cout << "Отрицательные =\n" << (arr[i][j]);
            }
        }
    }
    int sred = sum / we;
    cout << "Сумма = \n" << sum << endl;
    cout << "Среднее = \n" << sred << endl;

}
