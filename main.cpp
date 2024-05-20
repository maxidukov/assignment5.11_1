#include <iostream>
#include <vector>
#include <string>

template <typename T>
void move_vectors(std::vector<T> &v1, std::vector<T> &v2){
    v2 = std::move(v1);
}

template <typename T>
void print_vector(const std::vector<T> &v){
    for(auto &elem : v) std::cout << elem << " ";
    std::cout << std::endl;
}

int main() {
    std::vector <std::string> one = { "test_string1", "test_string2" };
    std::vector <std::string> two;
    //std::vector <int> one = { 1,2,3 };
    //std::vector <int> two;
    print_vector(one);
    move_vectors(one, two);
    print_vector(two);
    // print_vector(one);

}
