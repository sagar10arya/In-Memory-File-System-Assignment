/* 
# Create a directory and enter it
$ mkdir documents

# Current Directory: /
$ ls
documents

# Create a directory and enter it
$ mkdir work
$ cd work
Current Directory: /work $

# Create files in the current directory
$ touch report1.txt
$ touch report2.txt
$ ls
report1.txt report2.txt

# Return to the root directory
$ cd /
Current Directory: / $

# Create a directory and enter it
$ mkdir photos
$ cd photos
Current Directory: /photos $

# Create files in the current directory
$ touch image1.jpg
$ touch image2.jpg
$ ls
image1.jpg image2.jpg

# Return to the root directory
$ cd /
Current Directory: / $


# Move a file to a different directory
$ mv photos/image1.jpg work/
$ ls work/
report1.txt report2.txt image1.jpg

# Copy a file to a different directory
$ cp work/report1.txt photos/
$ ls photos/
image1.jpg image2.jpg report1.txt

# Remove a file
$ rm work/report2.txt
report2.txt removed successfully.

# Remove a directory
$ rm photos
Error: 'photos' not found.

# Save the current state to a file
$ save
State saved to file_system_state.txt

# Load the state from the file
$ load
State loaded from file_system_state.txt

# Check if the previous state is restored
$ ls work/
report1.txt image1.jpg
$ ls photos/
image1.jpg image2.jpg



*/