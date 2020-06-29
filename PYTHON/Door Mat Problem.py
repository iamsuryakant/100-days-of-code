# -*- coding: utf-8 -*-
"""
Created on Mon Jun 29 19:59:52 2020

@author: Suryakant Thakur
Hackerrank Door Mat Problem
https://www.hackerrank.com/challenges/designer-door-mat

"""
# Enter your code here. Read input from STDIN. Print output to STDOUT
y, x = map(int,input().split())
pattern = [('.|.'*(2*i + 1)).center(x, '-') for i in range(y//2)]
print('\n'.join(pattern + ['WELCOME'.center(x, '-')] + pattern[::-1]))
