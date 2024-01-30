#include <iostream>

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

int main()
{
	char src[40];
	char dest[100];

	memset(dest, '\0', sizeof(dest));
	my_strcpy(src, "This is tutorialspoint.com");
	my_strcpy(dest, src);

	std::cout << dest;

	return 0;
}

