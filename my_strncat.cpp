#include <iostream>

int my_strlen(char const *src)
{
    int i = 0;

    while (src[i] != '\0')
        i++;
    return i;
}

char* my_strncat(char* dest, const char* src, int n)
{
    int j = 0;
    int i = my_strlen(dest);

    while (j < n && src[i] != '\0')
    {
        dest[i + j] = src[j];
        j++;
    }

    dest[i + j] = '\0';
    return dest;
}

int main()
{
    char src[] = "World!\n";
    char dest[15] = "Hello ";

    my_strncat(dest, src, 2);

    std::cout << dest;
}

