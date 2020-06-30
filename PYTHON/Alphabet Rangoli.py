# -*- coding: utf-8 -*-
"""
Created on Tue Jun 30 19:48:42 2020

@author: Suryakant Thakur
HackerRank Alphabet Rangoli Problem
https://www.hackerrank.com/challenges/alphabet-rangoli/problem
"""

def print_rangoli(size):
    import string
    y = string.ascii_lowercase
    L = []
    for i in range(n):
        s = "-".join(y[i:n])
        L.append((s[::-1]+s[1:]).center(4*n-3, "-"))
    print('\n'.join(L[:0:-1]+L))
    # your code goes here

if __name__ == '__main__':
    n = int(input())
    print_rangoli(n)