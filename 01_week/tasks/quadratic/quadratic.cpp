#include <stdexcept>
#include <cmath>
#include <iomanip>


void SolveQuadratic(int a, int b, int c) {
    if (a == 0)
    {
        if (b == 0) {
            if (c == 0) {
                std::cout << "infinite solutions";
            }
            else {
                std::cout << "no solutions";
            }
        }
        else {
            double sol = -static_cast<double>(c) / static_cast<double>(b);
            std::cout << std::setprecision(6) << sol;
        }
    }
    else {
        // Квадратное уравнение
        double discriminant = static_cast<double>(b) * static_cast<double>(b) - 4.0 * static_cast<double>(a) * static_cast<double>(c);
        if (discriminant < 0) {
            std::cout << "no solutions";
        }
        else if (discriminant == 0) {
            double sol = -b / (2.0 * a);
            std::cout << std::setprecision(6) << sol;
        }
        else {
            double sqr = std::sqrt(discriminant);
            double x1 = (-b - sqr) / (2.0 * a);
            double x2 = (-b + sqr) / (2.0 * a);
            // Обеспечиваем порядок x1 < x2
            if (x1 > x2) {
                std::swap(x1, x2);
            }
            std::cout << std::setprecision(6) << x1 << " " << x2;
        }
    }
}