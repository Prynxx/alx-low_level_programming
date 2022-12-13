#include "main.h"

/**
 * _isalpha - checks if the letter is lower case
 * @c : character to be checked on
 * Return:retutn 0 or 1 depending on the condition
 */

int _isalpha(int c)

{

	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));

}
