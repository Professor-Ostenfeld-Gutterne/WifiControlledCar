import os
from datetime import date

dir_path = "../src"

altered = 0

def line_prepender(filename, line):
    with open(filename, 'r+') as f:
        content = f.read()
        f.seek(0, 0)
        f.write(line.rstrip('\r\n') + '\n' + content)

def check_path(dir_path):
    for path in os.listdir(dir_path):
        if os.path.isfile(os.path.join(dir_path, path)):

            if path.split(".")[len(path.split(".")) - 1] == "cpp" or path.split(".")[len(path.split(".")) - 1] == "hpp":

                str_ = """/*******************************************************************************
 * @file """ + path + """
 * @date """+ date.today().strftime("%d/%m/%Y") + """
 * @author Markus Rytter (mr@neocortec.com)
 *
 * @copyright Copyright (c) """+date.today().strftime("%Y")+"""
 *
 *******************************************************************************/\n"""

                line_prepender(os.path.join(dir_path, path), str_)

        elif os.path.isdir(os.path.join(dir_path, path)):
            check_path(os.path.join(dir_path, path))
        
if __name__ == "__main__":
    check_path(dir_path)