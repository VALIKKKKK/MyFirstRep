#include <QCoreApplication>
#include <iostream>
#include <set>
#include <array>
#include <vector>

/*void f1(int* first, int* last)
{
    std::set<int> res;
    for(;first != last; ++first)
    {
        res.insert(*first);
    }
    for( auto i = res.begin(); i != res.end(); ++i)
    {
        std:: cout << *i << std:: endl;
    }

}
*/

void f2(int* first, int* last)
{
    int res[5] {0};
    int* end = last;
    for(auto i = first ; i != last; ++i)
    {
        for(auto j = first; j != end-1; ++j)
        {
            if(*j < *(j+1))
            {
                std::swap(*j, *(j+1));
            }
        }
    }
    for(int i = 0; i < 5; ++i)
    {

        res[i] = *first;
        ++first;

    }
    for(int i = 0; i < 5; ++i)
    {
        std::cout << res[i] << std::endl;
    }

}

/*
void f3(int* first, int* last, int* first2, int* last2)
{
    std::vector<int> res;
    for(;first != last; ++first)
    {
        res.push_back(*first);
    }
    for(;first2 != last2; ++first2)
    {
        res.push_back(*first2);
    }
    for(auto i = res.begin(); i != res.end(); ++i)
    {
        std::cout << *i << std::endl;
    }
    std::cout << std::endl;
    for(auto i = res.begin() ; i != res.end(); ++i)
    {
        for(auto j = res.begin(); j != res.end()-1; ++j)
        {
            if(*j > *(j+1))
            {
                std::swap(*j, *(j+1));
            }
        }
    }
    for(auto i = res.begin(); i != res.end(); ++i)
    {
        std::cout << *i << std::endl;
    }
}
*/
void f4(int* first, int* last, int* first2, int* last2)
{

    for(auto i = first ; i != last; ++i)
    {
        for(auto j = first; j != last-1; ++j)
        {
            if(*j > *(j+1))
            {
                std::swap(*j, *(j+1));
            }
        }
    }

    for(auto i = first2 ; i != last2; ++i)
    {
        for(auto j = first2; j != last2-1; ++j)
        {
            if(*j > *(j+1))
            {
                std::swap(*j, *(j+1));
            }
        }
    }

    std::vector<int> res;

    for(;first != last; ++first)
    {
        res.push_back(*first);
    }
    for(;first2 != last2; ++first2)
    {
        res.push_back(*first2);
    }

    for(auto i = res.begin() ; i != res.end(); ++i)
    {
        for(auto j = res.begin(); j != res.end()-1; ++j)
        {
            if(*j > *(j+1))
            {
                std::swap(*j, *(j+1));
            }
        }
    }

    for(auto i = res.begin(); i != res.end(); ++i)
    {
        std::cout << *i << std::endl;
    }
}
/*
void f5(int* first, int* last, int* first2, int* last2)
{
    std::vector<int> res;
    int a[10]{0};
    for(auto i = first ; i != last; ++i)
    {
        for(auto j = first; j != last-1; ++j)
        {
            if(*j > *(j+1))
            {
                std::swap(*j, *(j+1));
            }
        }
    }

    for(auto i = first2 ; i != last2; ++i)
    {
        for(auto j = first2; j != last2-1; ++j)
        {
            if(*j > *(j+1))
            {
                std::swap(*j, *(j+1));
            }
        }
    }

    for(int* i = first2; i != last2; ++i)
    {
        for(int* j = first; j != last; ++j)
        {

             if(i==j)
              {

              }
        }


    }

    for(int* i = first; i != last; ++i)
    {
            for(int j = 0; j != 10; ++j)
            {
                res.push_back(a[*i]);
            }



    }


    for(auto i = res.begin(); i != res.end(); ++i)
    {
        std::cout << *i << std::endl;
    }
}

*/

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int arr[10] {1,1,2,2,4,6,6,7,7,7};
    int array[5] {1,2,25,4,50};
    f4(arr, arr+10, array, array+10);

    return a.exec();
}
