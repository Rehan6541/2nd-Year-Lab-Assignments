#!/bin/bash

# Display menu of commands
echo "Choose a command to execute:"
echo "1. lspci (List PCI devices)"
echo "2. lsusb (List USB devices)"
echo "3. lscpu (Display CPU information)"
echo "4. df (Display disk space usage)"
echo "5. mount (Display mounted filesystems)"
echo "6. umount (Unmount filesystem)"
echo "7. Exit"

# Read user input
read -p "Enter your choice (1-7): " choice

# Execute selected command
case $choice in
    1)
        echo "Listing PCI devices:"
        lspci
        ;;
    2)
        echo "Listing USB devices:"
        lsusb
        ;;
    3)
        echo "Displaying CPU information:"
        lscpu
        ;;
    4)
        echo "Displaying disk space usage:"
        df -h
        ;;
    5)
        echo "Displaying mounted filesystems:"
        mount
        ;;
    6)
        echo "Enter the mount point of the filesystem to unmount:"
        read mount_point
        echo "Unmounting filesystem mounted at $mount_point:"
        umount $mount_point
        ;;
    7)
        echo "Exiting program"
        exit 0
        ;;
    *)
        echo "Invalid choice. Please enter a number from 1 to 7."
        ;;
esac