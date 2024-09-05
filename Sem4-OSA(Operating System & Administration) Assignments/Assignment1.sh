#!/bin/bash

# Display menu of commands
echo "Choose a command to execute:"
echo "1. cat (Concatenate and display file content)"
echo "2. cat 2files (Concatenate and display content of two files)"
echo "3. cp (Copy files or directories)"
echo "4. mv (Move or rename files or directories)"
echo "5. rm (Remove files or directories)"
echo "6. rmdir (Remove empty directories)"
echo "7. head (Display the first part of files)"
echo "8. tail (Display the last part of files)"
echo "9. more (Display file content page by page)"
echo "10. pg (Display file content page by page)"
echo "11. file (Determine file type)"
echo "12. ps (Display information about processes)"
echo "13. gedit (Open a text editor)"
echo "14. Exit"

# Read user input
read -p "Enter your choice (1-14): " choice

# Execute selected command
case $choice in
    1)
        echo "Enter the name of the file to display its content:"
        read filename
        echo "Displaying content of file $filename:"
        cat $filename
        ;;
    2)
        echo "Enter the name of the first file:"
        read file1
        echo "Enter the name of the second file:"
        read file2
        echo "Displaying content of files $file1 and $file2:"
        cat $file1 $file2
        ;;
    3)
        echo "Enter the source file/directory to copy:"
        read source
        echo "Enter the destination directory:"
        read destination
        cp $source $destination
        ;;
    4)
        echo "Enter the source file/directory to move:"
        read source
        echo "Enter the destination directory:"
        read destination
        mv $source $destination
        ;;
    5)
        echo "Enter the name of the file/directory to remove:"
        read target
        rm -rf $target
        ;;
    6)
        echo "Enter the name of the empty directory to remove:"
        read dir
        rmdir $dir
        ;;
    7)
        echo "Enter the name of the file to display its first lines:"
        read filename
        echo "Displaying first 10 lines of file $filename:"
        head $filename
        ;;
    8)
        echo "Enter the name of the file to display its last lines:"
        read filename
        echo "Displaying last 10 lines of file $filename:"
        tail $filename
        ;;
    9)
        echo "Enter the name of the file to display its content page by page:"
        read filename
        echo "Displaying content of file $filename page by page:"
        more $filename
        ;;
    10)
        echo "Enter the name of the file to display its content page by page:"
        read filename
        echo "Displaying content of file $filename page by page:"
        pg $filename
        ;;
    11)
        echo "Enter the name of the file to determine its type:"
        read filename
        echo "Determining type of file $filename:"
        file $filename
        ;;
    12)
        echo "Displaying information about processes:"
        ps
        ;;
    13)
        echo "Opening gedit text editor..."
        gedit &
        ;;
    14)
        echo "Exiting program"
        exit 0
        ;;
    *)
        echo "Invalid choice. Please enter a number from 1 to 14."
        ;;
esac