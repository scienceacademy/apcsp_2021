scores = []
for i in range(4):
    s = int(input("Score: "))
    scores.append(s)
    
    
print(f"Average: {sum(scores) / len(scores)}")