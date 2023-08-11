# Function to convert a number to words
def number_to_words(n):
    # Define words for numbers 1 to 19
    words1to19 = [
        "",
        "One",
        "Two",
        "Three",
        "Four",
        "Five",
        "Six",
        "Seven",
        "Eight",
        "Nine",
        "Ten",
        "Eleven",
        "Twelve",
        "Thirteen",
        "Fourteen",
        "Fifteen",
        "Sixteen",
        "Seventeen",
        "Eighteen",
        "Nineteen",
    ]

    # Define words for tens multiples
    words_tens = [
        "",
        "",
        "Twenty",
        "Thirty",
        "Forty",
        "Fifty",
        "Sixty",
        "Seventy",
        "Eighty",
        "Ninety",
    ]

    if n < 20:
        return words1to19[n]
    elif n < 100:
        return words_tens[n // 10] + " " + words1to19[n % 10]
    else:
        return words1to19[n // 100] + " Hundred " + number_to_words(n % 100)


# Read integer from file
with open("input.txt", "r") as file:
    input_number = int(file.readline())

# Convert integer to words
number_words = number_to_words(input_number)

# Write result back to the file
with open("input.txt", "a") as file:
    file.write(" " + number_words)

print("Conversion and writing complete.")
