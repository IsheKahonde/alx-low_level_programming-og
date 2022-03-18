#include <stdio.h>

int _isupper(int c)
{
	char upperCase = 'A';
	int isUpper = 0;

	for(upperCase; upperCase <= 'Z'; upperCase++)
	{
		if(c == upperCase)
		{
			isUpper = 1;
			break;
		}
	}
	return (isUpper);
}
