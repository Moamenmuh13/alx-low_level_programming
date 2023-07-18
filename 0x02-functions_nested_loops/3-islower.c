#include "main.h"
/**
 * is_lower - print alphas in small-cases
 */
int _islower(int c)
{
    if (c >= 'a' && c<= 'z')
    {
        return(1);
    }else{
        return(0);
    }
}
