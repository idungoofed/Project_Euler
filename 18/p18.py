data = [
    [75],
    [95, 64],
    [17, 47, 82],
    [18, 35, 87, 10],
    [20, 04, 82, 47, 65],
    [19, 01, 23, 75, 03, 34],
    [88, 02, 77, 73, 07, 63, 67],
    [99, 65, 04, 28, 06, 16, 70, 92],
    [41, 41, 26, 56, 83, 40, 80, 70, 33],
    [41, 48, 72, 33, 47, 32, 37, 16, 94, 29],
    [53, 71, 44, 65, 25, 43, 91, 52, 97, 51, 14],
    [70, 11, 33, 28, 77, 73, 17, 78, 39, 68, 17, 57],
    [91, 71, 52, 38, 17, 14, 91, 43, 58, 50, 27, 29, 48],
    [63, 66, 04, 68, 89, 53, 67, 30, 73, 16, 69, 87, 40, 31],
    [04, 62, 98, 27, 23, 9, 70, 98, 73, 93, 38, 53, 60, 04, 23]
]

def init_data():
    retval = []
    for r, row in enumerate(data):
        retval.append([])
        cur_row = r
        for num in row:
            retval[cur_row].append([num, num])
            cur_row -= 1
    print(retval)
    return retval

if __name__ == "__main__":
    formatted_data = init_data()
    max_total = 0
    for r, row in enumerate(formatted_data):
        for c, num in enumerate(row):
            print("{0}, {1}".format(r, c))
            if r == 0:
                if c == 0:
                    pass
                else:
                    num[1] += row[c-1][1]
            else:
                if c == 0:
                    num[1] += formatted_data[r-1][c][1]
                else:
                    num[1] += max(formatted_data[r-1][c][1], formatted_data[r][c-1][1])
        if row[len(row)-1][1] > max_total:
            max_total = row[len(row)-1][1]
    for item in formatted_data:
        print(item)
    print(max_total)

    
