#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <vector>

namespace stu{
template<class Tp, class Sequence = std::vector<Tp>>
class stack
{
    template< class T, class Container >
    friend bool operator== ( const stack<T,Container>& lhs, const stack<T,Container>& rhs);

    template< class T, class Container >
    friend bool operator!= (const stack<T,Container>& lhs, const stack<T,Container>& rhs);

    template< class T, class Container >
    friend bool operator<( const stack<T,Container>& lhs, const stack<T,Container>& rhs );

    template< class T, class Container >
    friend bool operator<=( const stack<T,Container>& lhs, const stack<T,Container>& rhs );

    template< class T, class Container >
    friend bool operator>( const stack<T,Container>& lhs, const stack<T,Container>& rhs );

    template< class T, class Container >
    friend bool operator>=( const stack<T,Container>& lhs, const stack<T,Container>& rhs );



    using Sequence_value_type = typename Sequence::value_type;
public:
          using value_type = typename Sequence::value_type;
          typedef typename Sequence::reference                 reference;
          typedef typename Sequence::const_reference           const_reference;
          typedef typename Sequence::size_type                 size_type;
          typedef          Sequence                            container_type;
protected:

    Sequence m_c;

public:

    stack(const Sequence& c = Sequence()):m_c(c){}

   // Stack() = default;

   // Stack(const Sequence& c):m_c(c){}

   const_reference top()
   {
    return m_c.back();
   }

   void push(const value_type& x)
   {
     m_c.push_back(x);
   }

   void pop(const value_type& x)
   {
      m_c.pop_back(x);
   }

   void swap(stack& s)
   {
       std::swap(m_c,s.m_c);
   }

   unsigned int size() const
   {
       return m_c.size();
   }

};

template< class T, class Container >
bool operator== ( const stack<T,Container>& lhs, const stack<T,Container>& rhs)
{
    return lhs.m_c == rhs.m_c;
}

template< class T, class Container >
bool operator!= ( const stack<T,Container>& lhs, const stack<T,Container>& rhs )
{
    return lhs.m_c != rhs.m_c;
}

template< class T, class Container >
bool operator<( const stack<T,Container>& lhs, const stack<T,Container>& rhs )
{
    return lhs.m_c < rhs.m_c;
}

template< class T, class Container >
bool operator<=( const stack<T,Container>& lhs, const stack<T,Container>& rhs )
{
    return lhs.m_c <= rhs.m_c;
}

template< class T, class Container >
bool operator>( const stack<T,Container>& lhs, const stack<T,Container>& rhs )
{
    return lhs.m_c > rhs.m_c;
}

template< class T, class Container >
bool operator>=( const stack<T,Container>& lhs, const stack<T,Container>& rhs )
{
    return lhs.m_c >= rhs.m_c;
}


}


#endif // STACK_H
