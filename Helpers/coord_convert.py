import sys

def convert(x, y):
    return "glVertex3f(" + str(round(((x-640)/640), 3))+ ", " + str(round(((360-y)/360), 3)) + ", 0);"


if __name__ == '__main__':
    print(convert(float(sys.argv[1]), float(sys.argv[2])))