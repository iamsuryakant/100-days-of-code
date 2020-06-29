# -*- coding: utf-8 -*-
"""
Created on Mon Jun 29 20:28:05 2020

@author: Suryakant Thakur
HackerRank Minion Game Problem
https://www.hackerrank.com/challenges/the-minion-game/problem
"""

def minion_game(string):
    length = len(s)
    player1, player2 = 0,0

    for i in range(length):
        if s[i] in "AEIOU":
            player1 += length - i
        else:
            player2 += length - i        
        
    if player1 > player2:
        print("Kevin", player1)
    elif player2 > player1:
        print("Stuart", player2)
    else:
        print("Draw")
    # your code goes here

if __name__ == '__main__':
    s = input()
    minion_game(s)