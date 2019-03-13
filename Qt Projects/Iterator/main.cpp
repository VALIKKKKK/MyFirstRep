#include <QCoreApplication>
#include <vector>
#include <iostream>
#include <chrono>

template <class Iter>
struct reverse_iterator
{
    using iterator_type = Iter;
    Iter m_current = nullptr;
    reverse_iterator() = default;
    reverse_iterator(Iter current):m_current(current){}

    operator bool()
    {
        return m_current != nullptr;
    }

    reverse_iterator<Iter>& operator++()
    {
        --m_current;
        return *this;
    }

    reverse_iterator<Iter> operator++(int)
    {
        reverse_iterator<Iter> temp(m_current);
        --m_current;
        return temp;
    }

    bool operator==(/* reverse_iterator* this */const reverse_iterator& that)
    {
        return this -> m_current == that.m_current;
    }

    bool operator!=(/* reverse_iterator* this */ const reverse_iterator& that)
    {
        return !(*this == that);
    }

    auto operator*()
    {
        return *m_current;
    }

    reverse_iterator<Iter>& operator--()
    {
        --m_current;
        return this;
    }

    reverse_iterator<Iter> operator--(int)
    {
        Iter temp = m_current;
        --m_current;
        return temp;
    }

};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

     std::vector<unsigned long long int> res(99999999);
     std::iota (res.begin(), res.end(), 0);
     reverse_iterator<std::vector<unsigned long long int>::iterator> begin = res.end() - 1;
     reverse_iterator<std::vector<unsigned long long int>::iterator> end = res.begin() - 1;
     auto t1 = std::chrono::high_resolution_clock::now();
     for(auto i = begin; i != end; i++)
     {
        *i;
     }
     auto t2 = std::chrono::high_resolution_clock::now();
     std::chrono::duration<double, std::milli> ms = t2 - t1;
     std::cout << ms.count();




//      int arr[5]{1,23,1,5,65};
//      int i = 0;
//      int j = ++i;
//      reverse_iterator<int*> begin = arr+4;
//      reverse_iterator<int*> end = arr-1;
//      for(; begin != end;)
//      {
//          std::cout << *begin++ << " ";
//      }
//    for(int i = 0; i < 5; ++i)
//    {
//        std::cout << arr[i] << " ";
//    }
//    std::cout << std::endl;
//    for(int i = 4; i > -1; --i)
//    {
//        std::cout << arr[i] << " ";
//    }
//    std::cout << std::endl;
//    std::vector<int> lox{1,213,321,23,1,21};
//    for(auto i = lox.end() - 1; i != lox.begin() - 1; --i)
//    {
//        std::cout << *i << " ";
//    }
//    std::cout << std::endl;
//    for(auto i = lox.rbegin(); i != lox.rend(); ++i)
//    {
//        std::cout << *i << " ";
//    }
//    reverse_iterator<int*> beg = arr+4;
//    reverse_iterator<int*> end = arr - 1;
    return a.exec();
}
