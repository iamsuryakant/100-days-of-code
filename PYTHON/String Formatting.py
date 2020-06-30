# -*- coding: utf-8 -*-
"""
Created on Tue Jun 30 19:21:26 2020

@author: surya
"""
def print_formatted(number):
    w = len("{0:b}".format(n))
    for i in range(1,n+1):
        print ("{0:{width}d} {0:{width}o} {0:{width}X} {0:{width}b}".format(i, width=w))
    # your code goes here

if __name__ == '__main__':
    n = int(input())
    print_formatted(n)