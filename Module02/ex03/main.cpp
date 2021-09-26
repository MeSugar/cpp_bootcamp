#include "Point.hpp"


int main( void )
{
    Fixed vertexes[] = { 2.0f, 0.0f, 2.0f, 5.0f, 5.0f, 0.0f};
    Fixed pt[] = { -2.5f, -2.2f};
    Point a(vertexes[0], vertexes[1]);
    Point b(vertexes[2], vertexes[3]);
    Point c(vertexes[4], vertexes[5]);
    Point point(pt[0], pt[1]);
    
    if (bsp(a, b, c, point))
        std::cout << "False" << std::endl;
    else
        std::cout << "True" << std::endl;
    return 0;
}