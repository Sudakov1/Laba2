#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(0));


   
    int a, b, c;
    cout << "Введите a b c: ";
    cin >> a >> b >> c;

    int D = b * b - 4 * a * c;
    if (D > 0) // если дискриминант больше или равен 0
    {
        int x1 = (-1 * b + sqrt(D)) / (2 * a);
        cout << "Первый корень: " << x1 << endl;
        int x2 = (-1 * b - sqrt(D)) / (2 * a);
        cout << "Второй корень: " << x2 << endl;
    }
    else if (D == 0)
        cout << "X = " << -b / 2 * a << endl;
        else
        {
            cout << "Дискриминант меньше 0, корни невещественные." << endl;
        }
     


      //////////////////////

    int l, r;

    cout << "Введите левую границу: ";
    cin >> l;
    cout << "Введите правую границу: ";
    cin >> r;
    int randm = l + rand() % (r + 1 - l);  
    cout << "Случайное число: " << randm << endl;
      

        ////////////////////////


    int arr[10];
    int size = 10;
    
        for (int i = 0; i < size; i++)  // заполнение массива
        {
            cout << "Введите " << i + 1 << " элемент массива: ";
            cin >> arr[i];
        }

        int temp = arr[0];
        for (int i = 0; i < size - 1; i++) // сортировка массива пузырьком
        {
            for (int j = 0; j < size - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    temp = arr[j];  // меняем элементы местами
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }

        for (int i = 0; i < size; i++)  // вывод отсортированного массива на экран
        {
            cout << arr[i] << " ";
        }
        cout << endl;
  



}

