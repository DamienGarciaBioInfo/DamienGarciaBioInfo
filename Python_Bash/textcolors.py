#!/usr/bin/env python3

"""
 textcolors ---
 A module to change the color used to display text in a terminal.

 Use case: 
     import textcolors

     print(textcolors.color(255,0,0)+"Hello"+textcolors.resetcolor())

 Note: the call to resetcolor() must be made at the end, not after each printing.

 Author: Frédéric Goualard <Frederic.Goualard@univ-nantes.fr>
 v. 1.1, 2018-11-05
"""

def color(r,g,b):
    """
    Set the terminal to display text in the color defined by the (r,g,b) components
    given as input. The components are integers in the range 0--255.
    """
    return '\033[38;2;{red};{green};{blue}m'.format(red=r,green=g,blue=b)

def resetcolor():
    """
    Reset the terminal to display text using colors by default.
    """
    return '\033[0m'


# Example of use:
if __name__ == "__main__":
    # Printing some text in blue
    print(color(0,0,255)+"Text in blue")
    # printing some text in magenta
    print(color(255,0,255)+"Text in magenta")
    # Resetting the terminal colors (mandatory!) with no carriage return at the end
    print(resetcolor(),end='')
