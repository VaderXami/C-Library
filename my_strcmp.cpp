#include <iostream>

int my_strcmp(char const *str1, char const *str2)
{
    int i = 0;

    while (str1[i] == str2[2] && str1[i] != '\0' && str2[i] != '\0')
        i++;

    return str1[i] - str2[i];
}

int main()
{
    int result = my_strcmp("Hello", "Hello");
    std::cout << result;
}

