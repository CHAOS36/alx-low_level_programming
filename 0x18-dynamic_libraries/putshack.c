#include <unistd.h>
#include <string.h>
/**
 * descriptions for rand
 */

int rand(void)
{
	static int pipo = -1;

	pipo++;
	if (pipo == 0)
		return (8);
	if (pipo == 1)
		return (8);
	if (pipo == 2)
		return (7);
	if (pipo == 3)
		return (9);
	if (pipo == 4)
		return (23);
	if (pipo == 5)
		return (74);
	return (pipo * pipo % 30000);
}
