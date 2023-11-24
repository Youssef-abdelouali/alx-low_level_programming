/**
 * get_endianness - Determines the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
int testValue = 1;
char *bytePointer = (char *)&testValue;
return (*bytePointer);
}
