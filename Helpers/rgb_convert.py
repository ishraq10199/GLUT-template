import sys
def convert(tuple_args):
    x = tuple_args[0]
    y = tuple_args[1]
    z = tuple_args[2]
    #glColor3f(0.56, 0.4, 0.302);
    return "glColor3f(" + str(round((float(x)/255.0), 3))+ ", " + str(round((float(y)/255.0), 3)) + ", " + str(round((float(z)/255.0), 3)) +  ");"


if __name__ == '__main__':
    while(True):
        rgb_input = eval(input("\nRGB: "))
        ans = convert(rgb_input)
        print('\n' + ans + '\n')

        
        