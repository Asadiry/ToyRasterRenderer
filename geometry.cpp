#include "geometry.h"

int main(){
    vec<3> v1 = {1,2,3};
    vec<3> v2 = {2,2,2};
    std::cout <<cross(v1, v2) << std::endl;
    return 0;
}
