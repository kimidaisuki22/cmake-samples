#include <algorithm>
#include <utility>

template <typename T,typename ...Ts>
constexpr T min(T a, Ts ... args) {
    if constexpr(sizeof ...(Ts) > 0){
        return std::min<T>(a, min<T>(args...));
    }
    else{
        return a;
    }
}