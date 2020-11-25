#include <stdio.h>
#include <conio.h>

int main()
{
	char* string = "I'm just a normal string.\n";
	int x = 0;

	while (string[x]) {
		putchar(string[x]);
		x++;
	}

	_getch();
	return(0);
}