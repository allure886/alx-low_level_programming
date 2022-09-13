#ifndef _MAIN_H_
#define _MAIN_H_

/** definitions, enums 
 * typedefs
 * function prototypes
 */

#include <unistd.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}

#endif /* _MAIN_H_ */

