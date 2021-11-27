import sys

def convert(x, y):
    return "glVertex3f(" + str(round(((x-640)/640), 3))+ ", " + str(round(((360-y)/360), 3)) + ", 0);"
    
def convert_tuple(t):
    return convert(float(t[0]), float(t[1]))

def convert_from_file():
    ret = []
    with open("curves.txt", mode='r') as f:
        lines = f.readlines()
        for line in lines:
            t = eval(line)
            ret.append(convert_tuple(t))
    return ret

if __name__ == '__main__':
    if(len(sys.argv) > 1):
        print(convert(float(sys.argv[1]), float(sys.argv[2])))
    else:
        for line in convert_from_file():
            print(line)