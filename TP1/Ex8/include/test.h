#ifndef TEST_H
#define TEST_H


class test
{
public:
    test();
    virtual ~test();

    unsigned int Getm_Counter()
    {
        return m_Counter;
    }
    void Setm_Counter(unsigned int val)
    {
        m_Counter = val;
    }

protected:

private:
    unsigned int m_Counter;
};

#endif // TEST_H
