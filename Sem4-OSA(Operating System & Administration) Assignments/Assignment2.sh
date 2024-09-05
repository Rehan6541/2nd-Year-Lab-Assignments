#!/bin/bash

# Display menu of process-related commands
echo "Choose a process-related command to execute:"
echo "1. ps"
echo "2. top"
echo "3. kill"
echo "4. killall"
echo "5. pgrep"
echo "6. renice"
echo "7. nice"
echo "8. pid"
echo "9. bg"
echo "10. fg"
echo "11. Exit"

# Read user input
read -p "Enter your choice (1-11): " choice

# Execute selected process-related command
case $choice in
    1)
        echo "Executing 'ps' command:"
        ps
        ;;
    2)
        echo "Executing 'top' command:"
        top
        ;;
    3)
        echo "Enter the PID of the process to kill:"
        read pid
        echo "Killing process with PID $pid"
        kill $pid
        ;;
    4)
        echo "Enter the name of the process to kill:"
        read pname
        echo "Killing all processes with name $pname"
        killall $pname
        ;;
    5)
        echo "Enter the name of the process to search:"
        read pname
        echo "Searching for processes with name $pname"
        pgrep $pname
        ;;
    6)
        echo "Enter the PID of the process to renice:"
        read pid
        echo "Enter the new nice value (priority) for the process (between -20 and 19):"
        read nice_val
        renice $nice_val $pid
        ;;
    7)
        echo "Enter the command to run with modified scheduling priority (nice value):"
        read command
        echo "Enter the nice value (priority) for the command (between -20 and 19):"
        read nice_val
        nice -n $nice_val $command
        ;;
    8)
        echo "Enter the name of the process to find its PID:"
        read pname
        echo "PID of process $pname:"
        pidof $pname
        ;;
    9)
        echo "Enter the job ID to put it in background:"
        read job_id
        bg $job_id
        ;;
    10)
        echo "Enter the job ID to bring it to foreground:"
        read job_id
        fg $job_id
        ;;
    11)
        echo "Exiting program"
        exit 0
        ;;
    *)
        echo "Invalid choice. Please enter a number from 1 to 11."
        ;;
esac