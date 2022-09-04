#!/usr/bin/env python3

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

    Args:
        n (int): nth number
    """
    if n == 0 or n == 1:
        return n
    return fib(n-2) + fib(n-1)


print(MH_ASCII_ART)
print('Hello from Michigan Hackers!')
print('Learn more: https://www.youtube.com/watch?v=dQw4w9WgXcQ')

print('Doing some math...')
print(f'fib(6) = {fib(6)}')
# Why is this so slow...
# TODO: make it go faster
print(f'fib(36) = {fib(36)}')
