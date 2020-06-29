# -*- coding: utf-8 -*-
"""
Created on Mon Jun 29 20:42:59 2020

@author: Suryakant Thakur
HackerRank Merge the Tool Problem
https://www.hackerrank.com/challenges/merge-the-tools/problem
"""
def merge_the_tools(string, k):
    num_subsegments = int(len(string) / k)

    for index in range(num_subsegments):
    # Subsegment string
        t = string[index * k : (index + 1) * k]
    
    # Subsequence string having distinct characters
        u = ""
    
    # If a character is not already in 'u', append
        for c in t:
            if c not in u:
                u += c

    # Print final converted string
        print(u)
    # your code goes here

if __name__ == '__main__':
    string, k = input(), int(input())
    merge_the_tools(string, k)
