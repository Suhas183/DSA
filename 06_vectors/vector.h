template<typename T>

class Vector
{   //Data members
    T *arr;
    int cs;
    int ms;

    public:

    Vector(int max_size = 1)
    {
        cs = 0;
        ms = max_size;
        arr = new T[ms];
    }

    void push_back(const T d)
    {
        if(cs == ms)
        {
            T *old_array = arr;
            ms = ms*2;

            arr = new T[ms];

            for(int i = 0; i < cs; i++)
            {
                arr[i] = old_array[i];
            }

            delete []old_array;
        }

        arr[cs] = d;
        cs++;
    }

    void pop_back()
    {
        if(cs > 0)
        {
            cs--;
        }
    }

    bool isEmpty() const
    {    
        return cs == 0;
    }

    T front() const
    {
        return arr[0];
    }

    T back() const
    {
        return arr[cs-1];
    }

    T at(const int i) const
    {
        return arr[i];
    }

    int size() const
    {
        return cs;
    }

    int capacity() const
    {
        return ms;
    }

    T operator[](const int i) const
    {
        return arr[i];
    }

};
