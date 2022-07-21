# Create a new folder with the name, a readme file and a .[cpp,java,py] file
# Usage: new.sh <folder name> <solution file extension>
# Example: new.sh my_new_folder py
mkdir "$1"
touch "$1"/README.md
touch "$1"/main.$2
