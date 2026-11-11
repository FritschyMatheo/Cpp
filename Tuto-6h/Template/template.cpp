// Normalement c'est dans le .h mais dans la vidéo il montre dans un cpp

#include <iostream>

template <typename T, typename U>

auto max(T x, U y){
    return (x>y) ? x : y;
}

int main(){
    std::cout << max(1, 2.6);

    return 0;
}