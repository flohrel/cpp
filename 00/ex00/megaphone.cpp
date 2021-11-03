#include <iostream>
#include <string>

char my_toupper(char ch)
{
    return static_cast<char>(std::toupper(static_cast<unsigned char>(ch)));
}

int main(void)
{
    std::string  str;

    std::cin >> str;
    for (std::string::iterator it = str.begin(); it != str.end; ++it)
    {
        toupper
    }
}