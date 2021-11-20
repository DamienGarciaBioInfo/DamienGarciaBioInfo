#! /usr/bin/env python3

import random #Pour random.randint(x,x)

#Fonction qui détermine les valeurs communes entre 2 listes
def common(L1,L2):
    for i in range(len(L1)) :
        if L1[i] in L2 :
            L3.append(L1[i])
    L3.sort()
    print(L3)

L1 = []
L2 = []
L3 = []

for i in range(1000) :
    nb1 = random.randint(0,999)
    nb2 = random.randint(0,999)
    L1.append(nb1)
    L2.append(nb2)

common(L1,L2)
