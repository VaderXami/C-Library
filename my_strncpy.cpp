#include <iostream>
#include <string.h>

char* my_strcpy(char* dest, const char* src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}

char* my_strncpy(char* dest, const char* src, int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}

int main()
{
	char src[40];
	char dest[12];

	memset(dest, '\0', sizeof(dest));
	my_strcpy(src, "This is tutorialspoint.com");
	my_strncpy(dest, src, 10);

	std::cout << dest;

	return 0;
}

