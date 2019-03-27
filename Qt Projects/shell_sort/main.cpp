#include <QCoreApplication>

void shell_sort(int* arr, int size)
{
    for(int k = size/2; k > 0; k /= 2)
    {
    for(int i = k; i < size; ++i)
    {
        for(int j = i; j > 0 && arr[j-k] > arr[j]; --j)
        {
            std::swap(arr[j-k], arr[j]);
        }
    }
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    return a.exec();
}
