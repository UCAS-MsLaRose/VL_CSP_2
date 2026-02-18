name = input("What is thy name: ").strip().upper()

print("Hello", name[-3:])

sentence = "the quick brown fox jumps over the lazy dog."
print(sentence)
word = input("Pick a word from the sentence to change: ").strip().lower()
new_word = input("What is the new word: ").strip().lower()

start = sentence.find(word)
sentence.replace(word, new_word)
print(name + "! Did you know?", sentence)

print(f"Hello {name}")