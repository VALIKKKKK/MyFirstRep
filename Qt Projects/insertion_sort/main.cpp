#include <QCoreApplication>

void insertion_sort(int* arr, int size)
{
    for(int i = 1; i < size; ++i)
    {
        for(int j = i; j > 0 && arr[j-1] > arr[j]; --j)
        {
            std::swap(arr[j-1], arr[j]);
        }
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    return a.exec();
}
