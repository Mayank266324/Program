import os
def scan_and_classify(path='.'):
    directories = []
    files = []
# Walk through the given directory
    for entry in os.listdir(path):
# Classify entries
        if os.path.isdir(os.path.join(path, entry)):
            directories.append(entry)
        elif os.path.isfile(os.path.join(path, entry)):
            files.append(entry)
            return directories, files
# Specify the path or leave it as '.' to scan the current directory
        path = '.'
        directories, files = scan_and_classify(path)
        print("Directories:")
        for directory in directories:
            print(directory)
            print("\nFiles:")
        for file in files:
            print(file)