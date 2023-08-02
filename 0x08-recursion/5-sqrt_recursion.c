#include "main.h"
/**
 *  * square - square of int
 *   * @res: result os square
 *    * @i: the natural number
 *     * Return: the square
 *      */
int square(int i, int res)
{
		if (i * i == res)
					return (i);
			else if (i > res / 2)
						return (-1);
				else
							return (square(i + 1, res));
}
/**
 *  * _sqrt_recursion - returns the natural square root of a number.
 *   * @n: number
 *    * Return: squareroot
 *     */
int _sqrt_recursion(int n)
{
		return (square(1, n));
}
