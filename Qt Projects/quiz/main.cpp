#include <QCoreApplication>
#include <string>
#include <iostream>

struct Variant
{
    std::string text;
    bool is_right = false;
    Variant() = default;
    Variant(std::string t, bool is_r):text(t),is_right(is_r){}
};

struct Quations
{
    std::string m_text;
    std::vector<Variant> var;
    void add_variant(const Variant& a)
    {
        var.push_back(a);
    }
    bool is_right_answer(int a)
    {
        return var[a].is_right;
    }
};

struct Quiz
{
    std::vector<Quations> q;
    std::vector<Quations>::iterator current = q.begin();

    void next()
    {
        ++current;
    }

    std::vector<Quations>::iterator get_current_quation()
    {
        return current;
    }

    bool has_next()
    {
        return current == q.end();
    }

    void add_quation(const Quations& v)
    {
        q.push_back(v);
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Quiz quiz;
    quiz.add_quation(Quations("lol", 1);
    for(;quiz.has_next(););
    auto q = quiz.get_current_quation();
    std::cout << q->m_text << std::endl;;
    return a.exec();
}
