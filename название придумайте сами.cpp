// название придумайте сами.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;


int main()
{   //Задание 1.Симулятор рисовальщика по стенам.
		
    setlocale(0, "");
	
    double h, w, l;
    double n, m, r;
    double res;
    cout << "Сударь, введите следующие данные: ";
    cout << "\nВот введите длинну: ";
    cin >> l;
    cout << "Очень хорошо, а теперь высоту: ";
    cin >> h;
    cout << "Харош, ну а сейчас введите ширину: ";
    cin >> w;

    cout << "Сколько вы тратите литров краски на один квадратный киломе... ой, метр?\n";
    cin >> n;
    cout << "Какой процент стены занимают двери и окна? (ковёр на стене не считается)\n";
    cin >> m;
    cout << "Сколько стоит литр краски? (Дорого, наверн)\n";
    cin >> r;

    res = ((l * h * w) - (l * h * w) * m / 100) / n * r; 

    cout << res << " грывень вы потратили напрасно.";

    //Задание 2. Найменьшее число из написанных.

    setlocale(0, "");

    float a, b, c;
    cout << "Просто вводите числа, и всё: ";
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    cout << min(a, b, c) << " ну, вот так, получается";

    //Задание 3. Положительное, отрицательное или нулевое число.

    setlocale(0, "");

    double a;

    cout << "Введите своё АААААА (число): ";
    cin >> a;

    if (a < 0) {
        cout << "Ваше АААААА меньше нуля";
    }
    if (a > 0) {
        cout << "Ваше АААААА больше нуля";
    }
    else {
        cout << "Ваше АААААА равняется. получается, АААААА";
    }

    //Задание 4. Калькулятор.

    setlocale(0, "");

    double a, a, res1;
    int lg;

    cout << "Ну чё, погнали?(1 - Дадая; 2 - НЕХАЧЮ): ";
    cin >> lg;
    if (lg != 1 && lg != 2) {
        cout << "Ну чё, погнали? (1 - Дадая; 2 - НЕХАЧЮ): ";
        cin >> lg;
    }

    if (lg == 1) {
        cout << "a: ";
        cin >> a;
        cout << "b: ";
        cin >> b;

        cout << "\n1) a + b\n2) a - b\n3) a * b\n4) a / b\n5) a % b\n";
        cin >> res1;

        if (res1 == 1) {
            cout << a + b << "\n";
        }
        if (res1 == 2) {
            cout << a - b << "\n";
        }
        if (res1 == 3) {
            cout << a * b << "\n";
        }
        if (res1 == 4) {
            if (b < 0) {
                cout << "Критикал эрррррррррор: а < 0. Напишите b снова: ";
                cin >> b;
            }
            else {
                cout << a / b << "\n";
            }
        }
        if (res1 == 5) {
            cout << (int)a % (int)b << "\n";
        }

        cout << "Идём дальше?(1 - Дадая; 2 - не обязан): ";
        cin >> lg;
        if (lg != 1 && lg != 2) {
            cout << "Идём дальше?(1 - Дадая; 2 - не обязан): ";
            cin >> lg;
        }
        if (lg == 1) main();
    }
    if (lg == 2) {
        cout << "ок, пока.";
    }

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
