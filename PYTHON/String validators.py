# -*- coding: utf-8 -*-
"""
Created on Mon Jun 29 19:05:59 2020

@author: Suryakant Thakur
HackerRank String Validator Solution
"""
if __name__ == '__main__':
    s = input()
    print (any(c.isalnum() for c in s))
    print (any(c.isalpha() for c in s))
    print (any(c.isdigit() for c in s))
    print (any(c.islower() for c in s))
    print (any(c.isupper() for c in s))
