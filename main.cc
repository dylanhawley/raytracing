#include <iostream>

int main() {
    const int image_width = 256;
    const int image_height = 256;

    std::cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";

    for (int j = image_height-1; j >= 0; --j) {
        std::cerr << "\rScanlines remaining: " << j << '\n' << std::flush;
        for (int i = 0; i < image_width; ++i) {
            double r = double(i) / (image_width-1);
            double g = double(j) / (image_height-1);
            double b = 0.25;

            int ir = 255 * r;
            int ig = 255 * g;
            int ib = 255 * b;

            std::cout << ir << ' ' << ig << ' ' << ib << std::endl;
        }
    }

    std::cerr << "\nDone.\n";
}