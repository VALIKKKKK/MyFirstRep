#include <QCoreApplication>

template<class T>
struct alignt_buffer
{
    alignt_buffer() = default;
    T* m_storage = nullptr;
    void* m_adder()
    {
        return static_cast<void*>(&m_storage);
    }
};

struct Forward_list_nod_base
{
    Forward_list_nod_base() = default;
    Forward_list_nod_base* next = nullptr;
    Forward_list_nod_base*
    transfer_after(Forward_list_nod_base* begin, Forward_list_nod_base* end)
    {
        Forward_list_nod_base* keep = begin->next;
        if(end)
        {
            begin->next = end->next;
            end->next = next;
        }
        else
        {
            begin->next = nullptr;
        }
        next = keep;
        return end;
    }



};

template<class T>
struct list_node:public Forward_list_nod_base
{

};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    return a.exec();
}
