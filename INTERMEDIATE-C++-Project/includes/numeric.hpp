#ifndef __numeric_HPP__
#define __numeric_HPP__

template <typename T>
auto MAX_NUM(const T &a)
{
    return a;
}
template <typename T, typename U, typename... Args>
auto MAX_NUM(const T &a, const U &b, const Args &...args)
{
    int max = 0;
    max = (a > b) ? a : b;
    return MAX_NUM(max, args...);
}
template <typename T>

auto MIN_NUM(const T &a)
{
    return a;
}
template <typename T, typename U, typename... Args>
auto MIN_NUM(const T &a, const U &b, const Args &...args)
{
    int min = 0;
    min = (a < b) ? a : b;
    return MIN_NUM(min, args...);
}
template <typename T>
auto Sub(const T &a)
{
    return a;
}
template <typename T, typename U, typename... Args>
auto Sub(const T &a, const U &b, const Args &...args)
{
    int sub_var=a-b;
    return Sub(sub_var,args...);
}

#endif