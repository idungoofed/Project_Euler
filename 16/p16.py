def add_digits(num):
    sum = 0
    str_num = str(num)
    for c in str_num:
        sum += int(c)
    return sum

if __name__ == "__main__":
    print(add_digits(2**1000))
