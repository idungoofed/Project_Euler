ones = [
    "",
    "one",
    "two",
    "three",
    "four",
    "five",
    "six",
    "seven",
    "eight",
    "nine",
    "ten",
    "eleven",
    "twelve",
    "thirteen",
    "fourteen",
    "fifteen",
    "sixteen",
    "seventeen",
    "eighteen",
    "nineteen"
]

tens = ["",
    "",
    "twenty",
    "thirty",
    "forty",
    "fifty",
    "sixty",
    "seventy",
    "eighty",
    "ninety"
]

hundred = "hundred"

thousand = "thousand"

def get_length(num):
    if num < 20:
        return len(ones[num])
    elif num < 100:
        return len(tens[num//10]) + get_length(num%10)
    elif num < 1000:
        hundreds_pos = num//100
        if num%100 == 0:
            return len(ones[hundreds_pos]) + len(hundred) + get_length(num - (hundreds_pos * 100))
        else:
            return len(ones[hundreds_pos]) + len(hundred) + len("and") + get_length(num - (hundreds_pos * 100))
    else:
        return len("one") + len(thousand) + get_length(num - (num//1000 * 1000))


def loop_nums(end_num):
    sum = 0
    for i in range(1, end_num + 1):
        sum += get_length(i)
    return sum
    
if __name__ == "__main__":
    print(loop_nums(1000))
