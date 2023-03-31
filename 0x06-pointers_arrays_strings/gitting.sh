#!/bin/bash

# Add all changes
git add .

# Ask for commit message
read -p "Enter commit message: " message

# Commit changes
git commit -m "$message"

# Push changes
git push
