# Create a new folder with the name, a readme file and a .cpp file
# Usage: new.sh <folder name>
# Example: new.sh my_new_folder
mkdir "$*"
touch "$*"/README.md
touch "$*"/main.cpp