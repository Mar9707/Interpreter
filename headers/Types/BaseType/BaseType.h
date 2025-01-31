#ifndef BASETYPE_H
#define BASETYPE_H

#include <type_traits>

class Base_type {
    public:
    Base_type() = default;
    Base_type(const Base_type& ob);
    Base_type(Base_type&& ob);
    ~Base_type();

    Base_type& operator=(const Base_type& ob);
    Base_type& operator=(Base_type&& ob) noexcept;

    template <typename T, typename = std::enable_if_t<std::is_same<std::decay_t<T>, Base_type>::value>>
    Base_type operator+(T&& ob) const;

    Base_type& operator++();
    Base_type operator++(int);

    template <typename T, typename = std::enable_if_t<std::is_same<std::decay_t<T>, Base_type>::value>>
    Base_type operator-(T&& ob) const;

    Base_type& operator--();
    Base_type operator--(int);

    template <typename T, std::enable_if_t<std::is_same<std::decay<T>, Base_type>::value>>
    Base_type operator * (T&& ob) const;

    template <typename T, std::enable_if_t<std::is_same<std::decay<T>, Base_type>::value>>
    Base_type operator/(T&& ob);

    std::size_t size();

    //getvalue
    

};

#endif