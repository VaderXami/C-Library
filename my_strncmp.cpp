#include <iostream>

int my_strncmp(char const *str1, char const *str2, int n)
{
    int i = 0;

    while (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0' && i < n)
        i++;

    if (i == n)
        return 0;

    return str1[i] - str2[i];
}

int main()
{
    int result = my_strncmp("Hello", "HelloWorld", 3);
    std::cout << result;
}

