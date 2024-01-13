#include <iostream>
#include <time.h>

using namespace std;

int GetTime()
{
    struct tm buf;
    time_t t = time(NULL);
    localtime_s(&buf, &t);
    int day = buf.tm_mday;
    return day;
}

int main()
{
    system("chcp 1251>nul");
    const int size = 6;
    int indexday = GetTime() / size, stringsum = 0;
    cout << "IndexDay = " << indexday << endl;
    int array[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            array[i][j] = i + j;
            cout << array[i][j];
            if (i == indexday)
                stringsum += array[i][j];
        }
        cout << endl;
    }
    cout << "Сумма строки по индексу = " << stringsum << endl;
}
