/**
  * _islower - checks character.
  * description : checks for lowercase character.
  * @c: single letter input
  * Return: 1 or 0
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
