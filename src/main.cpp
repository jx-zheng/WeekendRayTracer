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
            double r = double(j) / (image_width - 1);
            double g = double(i) / (image_height - 1);
            double b = 0.25;

            int ir = static_cast<int>(255.999 * r);
            int ig = static_cast<int>(255.999 * g);
            int ib = static_cast<int>(255.999 * b);

            std::cout << ir << ' ' << ig << ' ' << ib << '\n';
        }
    }
    std::cerr << "\nDone.\n";
}
