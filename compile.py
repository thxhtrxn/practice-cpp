import os

filename = input("name file: ")
if os.system(f"g++ -std=c++17 -O2 -Wall {filename}.cpp -o {filename}") == 0:
    print("done")
    print("--------")
    print("running...")
    print("--------")
    os.system(f"{filename}.exe")
else:
    print("something went wrong")