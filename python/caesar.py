from string import ascii_lowercase
import sys

if len(sys.argv) != 2:
    print("Usage: caesar.py shift")
    exit() 
try:
    shift = int(sys.argv[1])
except:
    print("please enter a number")
    exit()
clear = input("cleartext: ").lower()
cipher = ""
for char in clear:
    n = (ascii_lowercase.find(char) + shift) % 26
    cipher = cipher + ascii_lowercase[n]
print(f"ciphertext: {cipher}")