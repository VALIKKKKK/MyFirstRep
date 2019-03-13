#include <QCoreApplication>
#include <iostream>
#include <vector>
#include <stack.h>
#include <array>
#include <algorithm>
#include <stdexcept>


namespace stu
{

typedef int Arr[10];

template<class T, std::size_t N>
struct array_traits
{
    typedef T Type[N];
    static T&
         S_ref(const Type& arr, std::size_t n) noexcept
         { return const_cast<T&>(arr[n]); }

         static T*
         S_ptr(const Type& __t) noexcept
         { return const_cast<T*>(__t); }
};

template<class T, std::size_t N>
class array
{
public:

    typedef T 	    			      value_type;
    typedef value_type*			      pointer;
    typedef const value_type*                       const_pointer;
    typedef value_type&                   	      reference;
    typedef const value_type&             	      const_reference;
    typedef value_type*          		      iterator;
    typedef const value_type*			      const_iterator;
    typedef std::size_t                    	      size_type;
    typedef std::ptrdiff_t                   	      difference_type;
    typedef std::reverse_iterator<iterator>	      reverse_iterator;
    typedef std::reverse_iterator<const_iterator>   const_reverse_iterator;
    typedef array_traits<T,N> A_T_Type;

    typename A_T_Type::Type m_elements;

    pointer data()
    {
        return A_T_Type::S_ptr(m_elements);
    }

    iterator begin()
    {
        return data();
    }

    iterator end()
    {
        return data() + N;
    }

    void fill(const T& value )
    {
        std::fill_n(data(),N,value);
    }

    void swap(array& __other)
    {
        std::swap_ranges(begin(), end(), __other.begin());
    }

    bool empty()
    {
        return size() == 0;
    }

    size_type size() const noexcept
    {
        return N;
    }

    size_type max_size() const noexcept
    {
        return N;
    }

    reference operator[](size_type index)
    {
        return A_T_Type::S_ref(m_elements, index);
    }

    reference at(size_type index)
    {
       if(index >= N)
       {
           throw std::out_of_range("erorr");
       }
       return A_T_Type::S_ref(m_elements, index);
    }
    reference front()
    {
        return A_T_Type::S_ref(m_elements,0);
    }

};
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    stu::array<int,3> v {5555,666,777};
    std::cout << *(v.data()+1) << std::endl;
    return a.exec();
}
