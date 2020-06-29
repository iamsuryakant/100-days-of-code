# -*- coding: utf-8 -*-
"""
Created on Mon Jun 29 19:42:16 2020

@author: Suryakant Thakur
HackerRank Text Wrap problem
https://www.hackerrank.com/challenges/text-wrap/problem
"""
import textwrap

def wrap(string, max_width):
    return textwrap.fill(string,max_width)

if __name__ == '__main__':
    string, max_width = input(), int(input())
    result = wrap(string, max_width)
    print(result)
