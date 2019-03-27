#include <QCoreApplication>

template <class T>
struct List
{
    struct Node
    {

        Node* next = nullptr;
        T value;
        Node() = default;
        Node(const T& v):value(v){}

    };

    struct m_iterator
    {
        Node* m_current = nullptr;
        m_iterator() = default;
        m_iterator(Node* current):m_current(current){}
        operator bool()
        {
            return m_current != nullptr;
        }

        void operator++()
        {
            m_current = m_current->next;
        }

        auto& operator*()
        {
            return m_current->value;
        }

        bool operator==(const m_iterator& that)
        {
            return this->m_current==that.m_current;
        }

        bool operator!=(const m_iterator& that)
        {
            return this->m_current!=that.m_current;
        }

    };

    using value_type = T;
    using reference = T&;
    using const_reference = const reference;
    using iterator = m_iterator;
    using size_type = std::size_t;
    using diference_type = std::ptrdiff_t;

    Node* head = nullptr;
    size_type m_size = 0;

    Node* find_last()
    {
        Node* i = head;
        for(; i->next != nullptr; i = i->next);
        return i;
    }

    void push_back(value_type v)
    {
        Node* current = find_last();
        current->value = v;
        current->next = new Node();
        ++m_size;
    }

    List():head(new Node()){}
    List(std::initializer_list<value_type> l):List()
    {
        for(typename std::initializer_list<value_type>::iterator i = l.begin(); i != l.end(); ++i)
        {
            push_back(*i);
        }
    }

    iterator begin()
    {
        return iterator(head);
    }

    iterator end()
    {
        return iterator(find_last());
    }

    Node* find(iterator key)
    {
        for(auto i = begin(); i != end(); ++i)
        {
            if(i == key)
            {
                return i;
            }
        }
        return end();
    }

    void insert_after(const iterator pos, value_type value)
    {
        Node* temp = pos.m_current->next;
        pos.m_current->next = new Node(value);
        pos.m_current->next->next = temp;
    }

    void erase(const iterator pos)
    {
        Node* temp = pos.m_current->next;
        pos.m_current->next = temp->next;
        delete temp;
    }

    size_type size() const noexcept
    {
        return m_size;
    }

    bool empty()
    {
        return head->next==nullptr;
    }

};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    return a.exec();
}
