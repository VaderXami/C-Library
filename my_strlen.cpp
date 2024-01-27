#include <iostream>

int my_strlen(const char* str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return i;
}

int main()
{
    std::cout << my_strlen("Hello World!\n");
}
