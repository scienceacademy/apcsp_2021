# repeating strings
s = "?"

for i in range(4):
    print(s, end="")
print()

print(s * 4)

# looping strings
text = "This is an example."

count = 0
for char in text:
    # isalpha() returns true if the character is a-z
    if char.isalpha():
        count += 1