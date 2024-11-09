#!/bin/bash

# Check if a directory is provided
if [ $# -ne 1 ]; then
    echo "Usage: $0 <directory>"
    exit 1
fi

# Directory to search in
DIRECTORY=$1

# Safety check - make sure the provided directory exists
if [ ! -d "$DIRECTORY" ]; then
    echo "Error: Directory does not exist."
    exit 1
fi

# Find and delete .git directories
find "$DIRECTORY" -type d -name ".git" -exec echo Deleting {} \; -exec rm -rf {} \;

echo "All .git directories have been removed from $DIRECTORY."

