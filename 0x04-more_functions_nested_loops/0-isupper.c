#include <main.h>

int _isupper(int c)
{
	char upperCase = 'A';
	int isupper = 0;

	for(upperCase; upperCase <= 'Z'; upperCase++)
	{
		if(c == upperCase)
		{
			isupper = 1;
			break;
		}
	}
	return (isupper);
}
