#!/bin/bash

# Display menu of commands
echo "Choose a command to execute:"
echo "1. pwd (Print current working directory)"
echo "2. mkdir (Create a directory)"
echo "3. cd (Change directory)"
echo "4. cd.. (Go up one directory)"
echo "5. rmdir (Remove directory)"
echo "6. ls (List files and directories)"
echo "7. ls -l (List files and directories with details)"
echo "8. ls -al (List all files and directories with details)"
echo "9. rm -r (Remove directory recursively)"
echo "10. Exit"

# Read user input
read -p "Enter your choice (1-10): " choice

# Execute selected command
case $choice in
    1)
        echo "Current working directory:"
        pwd
        ;;
    2)
        echo "Enter the name of the directory to create:"
        read dirname
        mkdir $dirname
        ;;
    3)
        echo "Enter the path of the directory to change to:"
        read dirpath
        cd $dirpath
        ;;
    4)
        echo "Going up one directory..."
        cd ..
        ;;
    5)
        echo "Enter the name of the directory to remove:"
        read dirname
        rmdir $dirname
        ;;
    6)
        echo "Listing files and directories:"
        ls
        ;;
    7)
        echo "Listing files and directories with details:"
        ls -l
        ;;
    8)
        echo "Listing all files and directories with details:"
        ls -al
        ;;
    9)
        echo "Enter the name of the directory to rem