#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - دالة تحسب مجموع جميع البارامترات المرسلة إليها
 * @n: عدد البارامترات
 *
 * Return: المجموع، أو 0 إذا كان n يساوي 0
 */
int sum_them_all(const unsigned int n, ...)
{
    va_list ap;
    unsigned int i;
    int sum = 0;

    if (n == 0)
        return (0);

    va_start(ap, n);

    for (i = 0; i < n; i++)
        sum += va_arg(ap, int);

    va_end(ap);

    return (sum);
}
