import os

def shell():
    inputuser = input("> ")
    if (inputuser == "exit"):
        exit()
    os.system(inputuser)
    return shell()

print("Welcome to duckshell (python alpha)")
print("System info: ")
os.system("echo distro: $(uname -o)");
os.system("echo hostname: $(uname -n)");
os.system("echo architecture: $(uname -m)");
os.system("echo linux kernel: $(uname -r)");
os.system("echo python version: $(python --version)")
shell()