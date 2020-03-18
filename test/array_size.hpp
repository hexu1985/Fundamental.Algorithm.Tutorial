#ifndef ARRAY_SIZE_INC
#define ARRAY_SIZE_INC

// 以编译期常量形式返回数组尺寸
// (该数组形参未起名字, 因为我们只关心其含有的元素个数)
template <typename T, std::size_t N>
constexpr std::size_t array_size(T (&)[N]) noexcept
{
    return N;
}

#endif
