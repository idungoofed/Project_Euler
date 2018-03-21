def init_data():
    retval = []
    data = []
    with open("p067_triangle.txt", "r") as data_file:
        for line in data_file:
            cur_line = [int(x) for x in line.strip().split(" ")]
            data.append(cur_line)
    print(data)
    for r, row in enumerate(data):
        retval.append([])
        cur_row = r
        for num in row:
            retval[cur_row].append([num, num])
            cur_row -= 1
    #print(retval)
    return retval

if __name__ == "__main__":
    formatted_data = init_data()
    max_total = 0
    for r, row in enumerate(formatted_data):
        for c, num in enumerate(row):
            #print("{0}, {1}".format(r, c))
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
    #for item in formatted_data:
    #    print(item)
    print(max_total)

    
