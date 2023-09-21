#!/usr/bin/env python3
import math
# l33t ascii art :)
MH_ASCII_ART = '''
        .......            ......
      `kKXXXX0:          cKXXXXKx.
      :NMMMMMWo         .xMMMMMMK:
      :NMMMMMWo         .xMMMMMMK:
      :NMMMMMWo         .xMMMMMMK:
      :NMMMMMWo         .xMMMMMMK:
      :NMMMMMWo         .xMMMMMMK:
      :NMMMMMWo         .xMMMMMMK:
      :NMMMMMWo         .xMMMMMMK:
      :NMMMMMWo         .xMMMMMMX: ....
      :NMMMMMM0l:::::,,,:kK00Okxo:````.
  ...``l0K0Okxxdolc:::,``....
..``......
                    ....``,::clll:````.
  ....`,:::clol:,::ccclokXWWMMMMX:
.`````oXWWMMMWx.        .kMMMMMMK,
      :XMMMMMWo         .xMMMMMMK:
      :NMMMMMWo         .xMMMMMMK:
      :NMMMMMWo         .xMMMMMMK:
      :NMMMMMWo         .xMMMMMMK:
      :NMMMMMWo         .xMMMMMMK:
      :NMMMMMWo         .xMMMMMMK,
      :NMMMMMWo         .xMMMMMMK:
      :XMMMMMWl         .dWMMMMMK,
      .:lllll:.          .cllllc,
'''


def fib(n: int):
    """Calculate the nth Fibonacci number.
        Uses Binet's Formula!
    Args:
        n (int): nth number
    """
    numerator = math.pow(1 + math.sqrt(5), n) - math.pow(1 - math.sqrt(5), n)
    denom = math.sqrt(5) * math.pow(2,n)
    return round(numerator / denom)


print(MH_ASCII_ART)
print('Hello from Michigan Hackers!')
print('Learn more: https://www.youtube.com/watch?v=dQw4w9WgXcQ')
num1 = int(input("input your 1st favorite number: "))
num2 = int(input("input your 2nd favorite number: "))
print('Doing some math...')
print(f'fib({num1}) = {fib(num1)}')
print(f'fib({num2}) = {fib(num2)}')
