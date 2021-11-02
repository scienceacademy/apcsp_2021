def main():
    n = get_positive_int()

def get_positive_int():
    while True:
        n = int(input("Enter a positive number: "))
        if n > 0:
            return n
main()