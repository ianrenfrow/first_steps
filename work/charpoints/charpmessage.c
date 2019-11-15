#include <unistd.h>
#include <stdio.h>

int		main()
{
	char *pmessage;

	pmessage = "abc";
	while(*pmessage != '\0')
	{
		write(1, pmessage, 1);
		pmessage++;
	}
	write(1, "\n", 1);
}
