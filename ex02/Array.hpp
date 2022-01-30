#ifndef CPP_07_ARRAY_HPP
#define CPP_07_ARRAY_HPP

template <typename T>
class Array {
public:

    typedef T           value_type;
    typedef value_type* pointer;
    typedef value_type& reference;
    typedef size_t      size_type;

private:

    pointer _arr;
    size_type _size;

public:

    Array<T>(size_type n = 1): _size(n)
    {
        if (_size == 0)
            ++_size;
        _arr = new value_type[_size];
        for (size_type i = 0; i < _size; ++i)
            _arr[i] = value_type();
    }
    ~Array() { delete [] _arr; }

    Array<T>(Array<T> const &arr) { *this = arr; }

    Array<T> &operator=(Array<T> const &op){
        if (&op == this)
            return *this;
        _size = op.size();
        _arr = new T[_size];
        for (size_type i = 0; i < _size; ++i)
            _arr[i] = op._arr[i];
        return *this;
    }

    reference operator[] (size_type n)
    {
        if (n >= _size)
            throw std::out_of_range("index out of range");
        return _arr[n];
    }

    size_type size() const
    {
        return _size;
    }
};

#endif
