#include "color.hpp"
#include "vec3.hpp"

#include <iostream>

int main() {

    // Image

    const uint16_t image_width = 256;
    const uint16_t image_height = 256;

    // Render (PPM format)

    std::cout << "P3\n" << image_width << ' ' << image_height << "\n255\n"; // header

    for(int i = image_height - 1; i >= 0; --i) {
        std::cerr << "\rScanlines remaining: " << i << ' ' << std::flush;
        for(int j = 0; j < image_width; ++j) {
            color pixel_color(double(j)/(image_width-1), double(j)/(image_height-1), 0.25);
            write_color(std::cout, pixel_color);
        }
    }
}
