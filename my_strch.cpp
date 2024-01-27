#include <iostream>

char* my_strch(char* str, char c)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] == c)
            return str + i;
        i++;
    }
    return NULL;
}

int main()
{
    char str1[6] = "Hello";
    char* str2 = my_strch(str1, 'l');
    std::cout << str2;
}

