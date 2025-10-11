import sys

vowel_set = set("aeiouAEIOU")

for sentence in sys.stdin:
    sentence = sentence.rstrip("\n")
    if sentence == "#":
        break

    vowel_count = 0
    for letter in sentence:
        if letter in vowel_set:
            vowel_count += 1
    print(vowel_count)
