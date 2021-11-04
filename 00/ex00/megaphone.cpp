#include <iostream>
#include <string>

char my_toupper(char ch)
{
    return (static_cast<char>(std::toupper(static_cast<unsigned char>(ch))));
}

int main(int argc, char **argv)
{
    std::string str;
    if (argc == 1) {
        std::cout << "* LOUD AND UNBEARABLE NOISE *";
    }
    else {
        for (int i = 1; i < argc; ++i) {
            str = argv[i];
            for (std::string::iterator it = str.begin(); it != str.end(); ++it) {
                std::cout << my_toupper(*it);
            }
        }
    }
    std::cout << std::endl;
}