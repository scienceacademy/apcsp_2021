import random
ranks = ["", "A", "2", "3", "4", "5", "6",
         "7", "8", "9", "10", "J", "Q", "K"]
suits = ["♥", "♣", "♠", "♦"]

class Card:
    def __init__(self, suit, rank):
        self.suit = suit
        self.rank = rank
    
    def __str__(self):
        return f"{ranks[self.rank]}{suits[self.suit]}"

class Deck:
    def __init__(self):
        self.cards = []
        for s in range(4):
            for r in range(1, 14):
                self.cards.append(Card(s, r))
    
    def shuffle(self):
        random.shuffle(self.cards)
        
    def deal_card(self):
        return self.cards.pop()

random.seed(1234)
d = Deck()
d.shuffle()
for i in range(5):
    print(d.deal_card())