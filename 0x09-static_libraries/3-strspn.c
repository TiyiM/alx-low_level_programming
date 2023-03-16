#!/bin/bash
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strspn - Write a function that gets the length of a prefix substring
 * @s: input
 * @accept: input
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
        unsigned int e = 0;
        int m;

        while (*s)
        {
                for (m = 0; accept[m]; m++)
                {
                        if (*s == accept[m])
                        {
                                e++;
                                break;
                        }
                        else if (accept[m + 1] == '\0')
                                return (e);
                }
                s++;
        }
        return (0);
}

